/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Faça um programa que dados 3 lados de um triângulo. O programa deverá
//informar se os valores podem ser um triângulo. Indique, caso os lados
//formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
//@return: retorne um enum

enum Triangulos {EQUILATERO, ISOSCELES, ESCALENO, NAO_TRIANGULO};

Triangulos triangulo(int l1, int l2, int l3){
    return NAO_TRIANGULO;
}

//@end

//@tests
void tests(){
    cerr << "#open triangulo BRONZE IF ENUM" << endl;
    cerr << (triangulo(5, 5, 2) == ISOSCELES);
    cerr << (triangulo(5, 8, 9) == ESCALENO);
    cerr << (triangulo(8, 8, 8) == EQUILATERO);

}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

//Dicas Caso você não saiba a diferença entre os triângulos, acesse:
//http://www.escolakids.com/classificacao-dos-triangulos.htm
