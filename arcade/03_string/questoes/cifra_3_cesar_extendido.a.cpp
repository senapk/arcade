/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

//@autor David Sena, Italo Bandeira

/*
 *
 * Essa é uma ampliação da cifra de cesar.
 *
 * Agora a entrada podem ser caracteres minusculos, maiusculos, espaco e
 * pontuação. Mantenha a pontuação e os espacos e apenas altere
 * os caracteres. Minusculos permanecem minusculos e maiusculos
 * permanecem maiusculos.
 *
 * A rotação agora não é mais fixa de 3 posições. O segundo
 * parametro é um número entre 0 e 25 dizendo quantas posições
 * deve ser a rotação.
 *
 * O terceiro parametro se for true informa que deve
 * acontecer o processo de cifragem. Se for false, voce
 * deve fazer o processo de decifrar.
 *
 * Exemplo com rotação 5:
 * Entrada: So digo uma Coisa, digo e nada.
 * Saída:   Xt inlt zrf Htnxf, inlt j sfif.
 */

string cifra_mono_boa(string texto, int rot, bool para_cifrar)
{
    return "";
}

//@end

void tests() {
    string in1  = "So digo uma coisa, digo e Nada.";
    string out1 = "Xt inlt zrf htnxf, inlt j Sfif.";
    string in2  = "Paz, o Mundo precisa de paz!";
    string out2 = "Xih, w Ucvlw xzmkqai lm xih!";

    cerr << "#open cifra_mono_boa";
    cerr << (cifra_mono_boa(in1 , 5, true ) == out1);
    cerr << (cifra_mono_boa(out1, 5, false) == in1);
    cerr << (cifra_mono_boa( in2, 8, true ) == out2);
    cerr << (cifra_mono_boa(out2, 8, false) == in2);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}