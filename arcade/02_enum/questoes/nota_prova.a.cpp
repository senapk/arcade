/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Faça um programa que receba um valor float de uma nota entre 0 e 10
//e retorne o resultado da disciplina.
//Menor que 4 - Reprovado
//Entre 4 e 7 - Final
//Maior que 7 - Aprovado
//Valor inválido - Erro
//@return: retorna uma Categoria

enum Categoria { Reprovado, Final, Aprovado, Erro};

Categoria categoria (float nota){
    return Erro;
}
//@end

//@tests
void tests(){
    cerr << "#open nota_prova BRONZE IF ENUM ";
    cerr << (categoria(3.0) == Reprovado);
    cerr << (categoria(7.0) == Aprovado);
    cerr << (categoria(6.9) == Final);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}