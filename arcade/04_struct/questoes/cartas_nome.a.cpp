/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

//Escreva uma função que retorne o nome da carta passada por parâmetro.
//O nome deve ser da forma:
//"7 de Paus" para valores entre 2 e 10.
//"As de Copas" para As, Valetes, Damas e Reis.
//Verifique os testes para mais informações.
//
enum Valor {AS = 1, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, OITO, NOVE, DEZ,
            VALETES, DAMAS, REIS};
enum Naipe {OUROS, ESPADAS, COPAS, PAUS};

struct Carta{
    Valor valor;
    Naipe naipe;
};

string gerar_nome(Carta carta){
    return "";
}

//@end

void tests(){
    cout << "#open gerar_nome" << endl;
    cout << "#set PRATA IF ENUM STRUCT" << endl;
    cout << (gerar_nome(Carta{AS, ESPADAS}) == "As de Espadas");
    cout << (gerar_nome(Carta{DAMAS, PAUS}) == "Damas de Paus");
    cout << (gerar_nome(Carta{REIS, OUROS}) == "Reis de Ouros");
    cout << (gerar_nome(Carta{VALETES, COPAS}) == "Valetes de Copas");
    cout << (gerar_nome(Carta{SETE, COPAS}) == "7 de Copas");
    cout << (gerar_nome(Carta{SETE, COPAS}) == "7 de Copas");
    cout << (gerar_nome(Carta{CINCO, COPAS}) == "5 de Copas") << endl;
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}