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
    cout << "#open quem_ganhou BRONZE IF ENUM" << endl;
    cout << (quem_ganhou(PEDRA, PEDRA) == EMPATE);
    cout << (quem_ganhou(PEDRA, TESOURA) == JOGADOR1);
    cout << (quem_ganhou(PAPEL, TESOURA) == JOGADOR2);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}