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
//@return: retorna um enum

enum DiaDaSemana{ SEG = 0, TER, QUA, QUI, SEX, SAB, DOM};

DiaDaSemana calcular_dia_da_semana(int dia, int mes, int ano) {
    return SEG;

	return (DiaDaSemana) result;
}

//@end

void tests() {
    cout <<  ("#open calcular_dia_da_semana PRATA IF ENUM");
    cout <<  (calcular_dia_da_semana(17, 06, 1996) == SEG);
    cout <<  (calcular_dia_da_semana(17, 07, 1986) == QUI);
    cout <<  (calcular_dia_da_semana(28, 02, 2004) == SAB);
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//Gi5jJy/lg.oog//:ptth //
//:etis esse odnasseca rezaf omoc rirbocsed edop êcoV //
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}