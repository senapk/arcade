/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

//Faça uma função que decida quem ganhou no par ou impar.
enum Opcao {PAR, IMPAR};
enum Resultado {JOGADOR1, JOGADOR2};

Resultado quem_ganhou( Opcao jog1, int valor_jog1, int valor_jog2){
    return JOGADOR1;
}

//@end

void tests(){
    cerr << "#open par_impar BRONZE IF ENUM ";
    cerr << (quem_ganhou(PAR, 1, 1) == JOGADOR1);
    cerr << (quem_ganhou(IMPAR, 1, 1) == JOGADOR2);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}