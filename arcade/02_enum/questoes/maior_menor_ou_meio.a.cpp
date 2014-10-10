/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Anakin Skywalker possui 3 irmãs, ele pediu pra você fazer um programa que verificasse
//qual posição a idade da sua irmã Nikana está em relação as suas outras 2 irmãs.

//@return: enum Posicao.

enum Posicao {MAIOR, MEIO, MENOR};

Posicao verificar_idade(int idadeNikana, int irma2, int irma3){
    return MAIOR;
}

//@end

//@tests
void tests(){
    cerr << "#open verificar_idade BRONZE IF ENUM" << endl;

    cerr << (verificar_idade(2,5,6) == MENOR);
    cerr << (verificar_idade(2,1,6) == MEIO);
    cerr << (verificar_idade(10,6,8) == MAIOR);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)

//Dicas: --

