/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//## Desafio ninja ##
//Faca um código que receba dia mes e ano e retorne o dia da semana.
//A continha é bem legal porém trabalhosa.
// Você pode descobrir como fazer acessando esse site:
// http://goo.gl/yJj5iG
//@return: retorna um enum

enum DiaDaSemana{ SEG = 0, TER, QUA, QUI, SEX, SAB, DOM};

DiaDaSemana calcular_dia_da_semana(int dia, int mes, int ano) {
    return SEG;
}

//@end

void tests() {
    cerr <<  ("#open calcular_dia_da_semana PRATA IF ENUM");
    cerr <<  (calcular_dia_da_semana(17, 06, 1996) == SEG);
    cerr <<  (calcular_dia_da_semana(17, 07, 1986) == QUI);
    cerr <<  (calcular_dia_da_semana(28, 02, 2004) == SAB);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}