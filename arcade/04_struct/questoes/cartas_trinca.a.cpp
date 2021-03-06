/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin
//Escreva uma função que verifica se o trio de cartas passadas por parametro forma
//uma sequencia que vence o jogo. O jogo é vencido de duas formas:
//1- As tres cartas possuem o mesmo valor.
//2- As tres cartas possuem o mesmo naipe e valores em sequencia.
//
//OBS: As cartas passadas já estão ordenadas.
//
enum Valor {AS = 1, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, OITO, NOVE, DEZ,
            VALETES, DAMAS, REIS};
enum Naipe {OUROS, ESPADAS, COPAS, PAUS};

struct Carta{
    Valor valor;
    Naipe naipe;
};

bool bateu_ordenado(Carta um, Carta dois, Carta tres){
    return false;
}

//@end

void tests(){
    cerr << "#open bateu_ordenado" << endl;
    cerr << "#set BRONZE IF ENUM STRUCT" << endl;
    cerr << (bateu_ordenado(Carta{DOIS, PAUS}, Carta{TRES, OUROS}, Carta{QUATRO, ESPADAS}) == false);
    cerr << (bateu_ordenado(Carta{DOIS, OUROS}, Carta{TRES, OUROS}, Carta{QUATRO, OUROS}) == true);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}