#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Realiza a composição dos trabalhos utilizando namespaces
A pasta de destino eh o ultimo parametro e sera criada caso nao exista

Exemplo de uso
./kcomposer.py questao1.p.cpp questao2.p.cpp questao3.p.cpp pasta_destino

ou apenas
./kcomposer.py *.cpp pasta_destino
"""
__author__ = "David Sena"

import sys
import os
from kgenerate import separate


def add_dir_barra(dir_name):
    """ Se a string dir_name não tiver o / no final
        do nome, então adicione
    """
    if dir_name[len(dir_name)-1] != '/':
        dir_name = dir_name + '/'
    return dir_name


def namespace_wrap(question_name, text):
    """ retorna uma nova string contendo o text
        envolvido por um namespace com nome de
        question_name

    """
    NID = "\nnamespace " + question_name + "{\n"
    NID_close = "}\n"
    novo = ""
    for linha in text.split('\n'):
        if(len(linha) > 0):
            novo += "    " + linha + '\n'
        else:
            novo += "\n"
    return NID + novo + NID_close


def add_only_new(lista, novos):
    """ Retorna uma nova string com as a lista antiga
        mais as linhas de novos que ainda nao existiam
        na lista
    """
    linhas = novos.split('\n')
    for linha in linhas:
        if lista.find(linha) == -1:
            lista += linha + '\n'
    return lista


def get_lastname(path):
    indice = 0
    pos = 0
    for letra in path:
        indice += 1
        if(letra == '/'):
            pos = indice
    return path[pos:]


def composer_factory(arquivos, destino):
    testes_main = "int main(){\n"
    includes = ""
    aluno = ""
    prof = ""
    testes = ""
    hides = ""
    dicas = ""

    for path in arquivos:
        arq = open(path)
        fname = get_lastname(path).replace(".cpp", "")
        text = arq.read()
        pi = separate(text)
        ID = "\n//@question " + fname + "\n"

        # adiciona a linha de chamada do teste dessa questao
        testes_main += "    " + fname + "::tests();\n"

        # adiciona apenas os include que nao existem
        includes = add_only_new(includes, pi.includes)

        aluno += namespace_wrap(fname, pi.aluno)
        prof += namespace_wrap(fname, pi.prof)
        testes += namespace_wrap(fname, pi.testes.replace('"fname"', '"' + fname + '"'))
        hides += namespace_wrap(fname, pi.hide.replace('"fname"', '"' + fname + '"'))

        if(len(pi.dicas) > 10):
            dicas += ID + pi.dicas

    testes_main += '    cout << "#end" << endl;\n    return 0;\n}\n'

    # criando pasta e arquivos
    path_destino = destino
    path_destino = add_dir_barra(path_destino)
    aluno_dir = path_destino
    prof_dir = path_destino + "prof/"
    if not os.path.exists(path_destino):
        os.makedirs(path_destino)
    if not os.path.exists(prof_dir):
        os.makedirs(prof_dir)


    # montando estrutura final
    aluno = includes + aluno
    prof = includes + prof
    testes = '#include "questoes.cpp"\n' + testes + dicas + testes_main
    hides = '#include "questoes.cpp"\n' + hides + testes_main

    # limpando linhas brancas duplicadas
    aluno = aluno.replace("\n\n\n", "\n\n")
    testes = testes.replace("\n\n\n", "\n\n")
    prof = prof.replace("\n\n\n", "\n\n")
    hides = hides.replace("\n\n\n", "\n\n")

    # abrindo arquivos
    faluno = open(aluno_dir + 'questoes.cpp', 'w')
    ftestes = open(aluno_dir + 'testes.cpp', 'w')
    fprof = open(prof_dir + 'questoes.cpp', 'w')
    fhide = open(prof_dir + 'testes.cpp', 'w')

    # escrevendo nos arquivos
    faluno.write(aluno)
    fprof.write(prof)
    ftestes.write(testes)
    fhide.write(hides)

    # fechando arquivos
    faluno.close()
    fprof.close()
    ftestes.close()
    fhide.close()


def main():
    tam = len(sys.argv)
    destino = sys.argv[tam - 1]
    arquivos = sys.argv[1:(tam - 1)]
    composer_factory(arquivos, destino)

if __name__ == "__main__":
    main()
