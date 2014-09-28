/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Faça uma função que retorne o resultado do jogo pedra, papel e tesoura.
//@return: EMPATE caso empate, JOGADOR1 caso o jogador 1 ganhe, JOGADOR2 caso o jogador 2 ganhe.

enum Opcao {PEDRA, PAPEL, TESOURA};
enum Resultado {EMPATE, JOGADOR1, JOGADOR2};
//@return: retorna uma enum.

Resultado quem_ganhou( Opcao jog1, Opcao jog2){
    return EMPATE;
}

//@end

//@tests
void tests(){
    cerr << "#open quem_ganhou BRONZE IF ENUM" << endl;
    cerr << (quem_ganhou(PEDRA, PEDRA) == EMPATE);
    cerr << (quem_ganhou(PEDRA, TESOURA) == JOGADOR1);
    cerr << (quem_ganhou(PAPEL, TESOURA) == JOGADOR2);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}