#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
Gera o codigo do aluno.
Coloque o arquivo kgenerate.y na pasta /usr/local/bin/

Recebe o arquivo arquivo.p.cpp e gera o arquivo.a.cpp

./kgenerate.py codigo.p.cpp
./kgenerate.py *.cpp
"""


__author__ = "David Sena"

import sys
import os
import time


class Pieces(object):
    includes = None
    prof = None
    aluno = None
    testes = None
    hide = None
    dicas = None


header = """/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////
"""

simple_main = '\nint main(){\n    tests();\n    cout << endl << "#end";\n    return(0);\n}'


def processar_texto(texto):
    """ Processa o texto fazendo inclusoes e
    exclusoes
    """
    FDEL = "//@--"
    FADD = "//@++"
    FRESET = "//@=="
    FSINGLE = "//@@"

    def eh_comentario(linha):
        pos = 0
        for letra in linha:
            if(letra == ' ' or letra == '\t'):
                pos += 1
            else:
                break
        if(pos + 1 >= len(linha)):
            return False
        if(linha[pos] == '/' and linha[pos + 1] == '/'):
            return True
        return False

    def get_flag(linha):
        if(linha.find(FDEL) != -1):
            return FDEL
        if(linha.find(FADD) != -1):
            return FADD
        if(linha.find(FSINGLE) != -1):
            return FSINGLE
        if(linha.find(FRESET) != -1):
            return FRESET
        return ""

    def get_identacao(linha):
        pos = 0
        for letra in linha:
            if(letra == " "):
                pos += 1
                continue
            if(letra == '\t'):
                pos += 4
                continue
            break
        return pos

    texto = texto.split("\n")
    INCLUSAO = 1
    EXCLUSAO = 2
    NORMAL = 3
    saida = ""

    identacao = 0
    estado = NORMAL
    for linha in texto:
        flag = get_flag(linha)
        if(flag == FDEL):
            estado = EXCLUSAO
            identacao = get_identacao(linha)
            continue
        if(flag == FADD):
            estado = INCLUSAO
            identacao = get_identacao(linha)
            continue
        if(flag == FRESET):
            estado = NORMAL
            continue
        if(flag == FSINGLE):
            estado = EXCLUSAO
            saida += linha.replace(FSINGLE, "") + "\n"
            identacao = get_identacao(linha)
            continue
        if(flag == ""):
            if(estado == NORMAL):
                saida += linha + "\n"
            if(estado == INCLUSAO):
                if(get_identacao(linha) < identacao):
                    if(len(linha) != 0):
                        saida += linha + "\n"
                        estado = NORMAL
                else:
                    if(eh_comentario(linha)):
                        saida += linha.replace("//", "", 1) + '\n'
                    else:
                        estado = NORMAL
            if(estado == EXCLUSAO):
                if(get_identacao(linha) < identacao):
                    if(len(linha) != 0):
                        saida += linha + "\n"
                        estado = NORMAL
    return saida


def check_extension(path, extension):
    if(path.find(extension) == -1):
        return False
    return True


def add_prefix(path, prefix):
    indice = 0
    pos = 0
    for letra in path:
        indice += 1
        if(letra == '/'):
            pos = indice
    return path[0:pos] + prefix + path[pos:]


def format_tips(text, to_invert):
    """ Adiciona o texto tips e o link do site
        e inverte a dica
        to_inverto eh um bool para inverter
        retorna o texto formatado da dica
    """
    saida = ""
    saida += "\n//@tips"
    saida += "\n//As linhas estão invertidas para você não ler sem querer :)"
    # saida = saida + "\n//http://reverse-string.wezo.com.br/pt-BR\n"
    if to_invert:
        linhas_dicas = text.split('\n')
        for linha in reversed(linhas_dicas):
            # linha = linha + '//'
            # linha = linha[::-1] + '\n'
            linha = linha + '\n'
            saida += linha
    else:
        saida += text
    return saida


def wait_write(path):
    # espera o close salvar as informacoes no arquivo
    while(os.path.getsize(path) == 0):
        time.sleep(0.3)


def separate(text):
    pi = Pieces()

    # includes
    pos = text.find("using namespace ")
    pos = text.find('\n', pos)
    pi.includes = text[0: pos + 1]

    # tests
    inicio_testes = text.find("//@tests")
    if(inicio_testes == -1):
        inicio_testes = text.find("int main")

    fim_testes = text.find("#end", inicio_testes)
    fim_testes = text.rfind('\n', inicio_testes, fim_testes)
    testes = text[inicio_testes: fim_testes].replace("int main", "void tests")
    testes += "\n}"

    fim_main = text.find("\n}", fim_testes)
    inicio_tips = text.find("\n}", fim_main) + 2
    pi.dicas = text[inicio_tips:]

    pi.hide = testes
    pi.testes = processar_texto(testes)

    questao = text[pos:inicio_testes - 1]
    pi.prof = questao
    pi.aluno = processar_texto(questao)

    return pi


def gen_aluno(path_master):
        arq = open(path_master)
        fname = path_master.replace(".p.cpp", "")
        fname = fname.replace(".cpp", "")
        text = arq.read()
        pi = separate(text)

        # coloca no formato a.fname.cpp
        aluno_path = fname + ".a.cpp"
        # aluno_path = add_prefix(fname + ".cpp", "a.")

        # abrindo arquivo do aluno
        aluno_cpp = open(aluno_path, 'w')
        aluno_cpp.write(header)
        aluno_cpp.write('\n' + pi.includes)
        aluno_cpp.write("//@begin")
        aluno_cpp.write(pi.aluno)
        aluno_cpp.write("//@end\n")

        aluno_cpp.write('\n' + pi.testes)

        aluno_cpp.write(simple_main)

        if len(pi.dicas) > 5:
            dicas = format_tips(pi.dicas, True)
            aluno_cpp.write(dicas)

        aluno_cpp.close()

        wait_write(aluno_path)
        return aluno_path


def main():

    for path in sys.argv[1:]:
        if(check_extension(path, ".p.cpp") is False):
            print(" Pulando arquivo " + path + ": não possui extensao .p.cpp")
        else:
            gen_aluno(path)


if __name__ == "__main__":
    main()
