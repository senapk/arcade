#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Remonta o codigo do aluno"""
"""./remount.py master.cpp a.alu.cpp"""

__author__ = "David Sena"

import kgenerate
import sys
import subprocess


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


def remount(master, upload):
    """ Retorna o path do arquivo remontado
        usa o padrao r.upload colocado na mesma
        pasta do arquivo de upload
        retorna o path do arquivo remontado
    """
    prof_path = master
    aluno_path = upload
    # out_path = kgenerate.add_prefix(upload, "b.")
    out_path = upload.replace(".cpp", ".b.cpp")

    prof_file = open(prof_path)
    aluno_file = open(aluno_path)
    out_file = open(out_path, 'w')

    prof_text = prof_file.read()
    pi = kgenerate.separate(prof_text)

    aluno_text = aluno_file.read()
    aluno_question = get_lines_from_tags(aluno_text, "//@begin", "//@end")

    out_file.write('\n' + pi.includes)
    # out_file.write('\n' + pi.questao)
    out_file.write('\n' + aluno_question)
    out_file.write('\n' + pi.hide)

    out_file.write(kgenerate.simple_main.replace("#end", "#summary"))
    out_file.close
    return out_path


def compile(remounted):
    # exec_path = remounted + ".exe"
    exec_path = remounted.replace(".cpp", ".out")
    err_path = remounted.replace(".cpp", ".err")
    # err_path = remounted + ".err"

    param = ['-Wall', '-std=c++11', remounted, '-o', exec_path]

    with open(err_path, "a") as f:
        proc1 = subprocess.Popen(['/usr/bin/g++'] + param, stderr=f)
        proc1.wait()
    return exec_path


def execute(txt_path, executable):
    with open(txt_path, "a") as f:
        proc1 = subprocess.Popen(["./" + executable], stdout=f)
        proc1.wait()
    return txt_path


def main():
    if(len(sys.argv) == 3):
        # modo correcao de questao
        remounted = remount(sys.argv[1], sys.argv[2])
        executable = compile(remounted)
        execute(remounted.replace(".cpp", ".txt"), executable)


if __name__ == "__main__":
    main()
