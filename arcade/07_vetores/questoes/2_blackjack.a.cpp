/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <motor.h>
using namespace std;
//@begin

//Faça uma função que conte o valor de uma mão de blackjack.
//Ela recebe um vetor de cartas e calcula usando as seguntes
//regras. K, Q e J valem 10 pontos. ÁS vale 11 pontos. As
//outras cartas valem seu próprio valor.
//Se a soma de pontos for maior que 21, o Ás passa a valer
//1 ponto, diminuindo a soma total, tentando fazer o valor
//baixar para menos de 21.
//
//No vetor de inteiros mao, o valor 1, 11, 12 e 13
//são respectivamente Ás, J, Q e K.

int blackjack(vector<int> mao){
    return 0;
}

//@end

void tests(){
    cerr << "#open blackjack ";
    cerr << (blackjack({1, 13}) == 21);
    cerr << (blackjack({11, 13}) == 20);
    cerr << (blackjack({1, 1, 1}) == 13);
    cerr << (blackjack({1, 1, 2, 3, 12}) == 17);
    cerr << (blackjack({1, 1, 2, 10, 12}) == 24);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
