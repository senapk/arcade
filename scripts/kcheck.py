#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Remonta o codigo do aluno"""
"""./remount.py master.cpp a.alu.cpp"""

__author__ = "David Sena"

import kgenerate
import sys
import subprocess


def main():
    for path in sys.argv[1:]:
        # modo execucao questao aluno
        aluno_path = kgenerate.gen_aluno(path)
        aluno_exec = aluno_path.replace(".cpp", ".out")

        param = ['-Wall', '-std=c++11', aluno_path, '-o', aluno_exec]
        proc = subprocess.Popen(['/usr/bin/g++'] + param)
        proc.wait()
        proc = subprocess.Popen(["./" + aluno_exec])


if __name__ == "__main__":
    main()
