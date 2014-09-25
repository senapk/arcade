/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
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
    cout <<  ("#open calcular_dia_da_semana PRATA IF ENUM");
    cout <<  (calcular_dia_da_semana(17, 06, 1996) == SEG);
    cout <<  (calcular_dia_da_semana(17, 07, 1986) == QUI);
    cout <<  (calcular_dia_da_semana(28, 02, 2004) == SAB);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}