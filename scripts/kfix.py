#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Remonta o codigo do aluno
./kfix.py master.p.cpp alu.a.cpp

E cria arquivos intermediarios para analise
alu.a.b.cpp -> codigo remontado do aluno
alu.a.b.err -> resultado da compilacao
alu.a.b.out -> executavel criado
alu.a.b.txt -> resultado da compilação para saida resumida


"""

__author__ = "David Sena"

import kgenerate
import sys
import subprocess

MASTER_EXT = ".p.cpp"
REMOUNT_EXT = ".b.cpp"
ERROR_EXT = ".b.err"
EXEC_EXT = ".b.out"
OUTPUT_EXT = ".b.txt"


def get_lines_from_tags(text, tag_ini, tag_end):
    """ recebe o texto em text e retorna as linhas
        existentes entre as linhas que contem as palavras
        tag_ini e tag_end
    """
    pos_ini = text.find(tag_ini) + 1
    # pos_ini = text.rfind('\n', 0, pos_ini)
    # +1 e -1 para descartar os \n
    pos_ini = text.find("\n", pos_ini) + 1
    pos_end = text.find(tag_end)
    pos_end = text.rfind('\n', 0, pos_end) + 1
    return text[pos_ini:pos_end]


def remount(master, upload, remounted):
    """ Retorna o path do arquivo remontado
        usa o padrao r.upload colocado na mesma
        pasta do arquivo de upload
        retorna o path do arquivo remontado
    """
    master = master
    aluno_path = upload

    master_file = open(master)
    uploaded_file = open(aluno_path)
    remounted_file = open(remounted, 'w')

    prof_text = master_file.read()
    pi = kgenerate.separate(prof_text)

    aluno_text = uploaded_file.read()
    aluno_question = get_lines_from_tags(aluno_text, "//@begin", "//@end")

    remounted_file.write('\n' + pi.includes)
    # remounted_file.write('\n' + pi.questao)
    remounted_file.write('\n' + aluno_question)
    remounted_file.write('\n' + pi.hide)

    remounted_file.write(kgenerate.simple_main.replace("#end", "#summary"))
    remounted_file.close


def compile(remounted, error_log, exec_path):

    param = ['-Wall', '-std=c++11', remounted, '-o', exec_path]

    with open(error_log, "a") as f:
        proc1 = subprocess.Popen(['/usr/bin/g++'] + param, stderr=f)
        proc1.wait()
    return exec_path


def execute(executable, txt_path):
    with open(txt_path, "a") as f:
        proc1 = subprocess.Popen(["./" + executable], stdout=f)
        proc1.wait()
    return txt_path


def main():
    if(len(sys.argv) == 3):
        # modo correcao de questao
        master = sys.argv[1]
        uploaded = sys.argv[2]

        remounted = master.replace(MASTER_EXT, REMOUNT_EXT)
        error_path = master.replace(MASTER_EXT, ERROR_EXT)
        exec_path = master.replace(MASTER_EXT, EXEC_EXT)
        output_path = master.replace(MASTER_EXT, OUTPUT_EXT)

        remount(master, uploaded, remounted)
        compile(remounted, error_path, exec_path)
        execute(exec_path, output_path)


if __name__ == "__main__":
    main()
