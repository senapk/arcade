/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <string.h>
using namespace std;
//@begin

//#Interpretador para Inteiros#
//Faça um interpretador para inteiros. O interpretador
//receberá os comando e o seu programa deverá retornar as
//respostas desse comando.
//
//Exemplo:
//
//("add", a, b) -> soma de dois inteiros.
//("sub", a, b) -> subtração de dois inteiros.
//("mul", a, b) -> multiplicação de dois inteiros.
//("div", a, b)-> divisão de dois inteiros.
//("mod", a, b) -> módulo de dois inteiros.
//
//("add", 1, 2)  -> Comandos recebidos.
// 3             -> Retorno.
//("sub", 10, 5) -> Comandos recebidos.
// 5             -> Retorno.
//("mul", 7, 3)  -> Comandos recebidos.
// 21            -> Retorno.
//("div", 10, 3) -> Comandos recebidos.
// 3             -> Retorno.
//("mod", 10, 3) -> Comandos recebidos.
// 1             -> Retorno.
//
//Atenção: Na divisão, divida o maior inteiro pelo o menor.
//@return: retorna um inteiro.

int interpretador_inteiro(string letra, int a, int b)
{
	return 0;
}

//@end

void tests(){
	cerr << "#open interpretador_inteiro" << endl;
	cerr << (interpretador_inteiro("add", 20, 40) == 60);
	cerr << (interpretador_inteiro("sub", 20, 40) == -20);
	cerr << (interpretador_inteiro("mul", 5, 9) == 45);
	cerr << (interpretador_inteiro("div", 10, 5) == 2);
	cerr << (interpretador_inteiro("mod", 10, 5) == 0);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}