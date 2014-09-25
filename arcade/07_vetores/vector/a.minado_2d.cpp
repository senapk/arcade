/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <motor.h>
#include <cmath>
#include <iostream>
using namespace std;
//@begin

//O objetivo desse jogo é determinar, para cada célula do tabuleiro,
//o número de minas explosivas nos arredores da mesma (que são a própria
//célula e as células imediatamente vizinhas à direita e à esquerda, caso
//essas existam). Por exemplo, a figura abaixo ilustra uma possível
//configuração de um tabuleiro com 6 células. E o vetor de proximidade que
//eh gerado pela soma da celula atual com as vizinhas
//
// [0 1 0 0 0 1 1 1 0] -> minas
// [1 1 1 0 1 2 3 2 1] -> proximidade
//
//Escrever um programa, dado um tabuleiro, informe o número de minas na
//vizinhança de cada posição. Retorne esse vetor de proximidade

vector<int> minado(vector<int> vet){
    return vector<int>();
}

//@end

void tests(){
    cout << "#open minado PRATA VECTOR FOR" << endl;
// [0 1 0 0 0 1 1 1 0] -> minas
// [1 1 1 0 1 2 3 2 1] -> proximidade
    cout << (minado({0, 1, 0, 0, 0, 1, 1, 1, 0}) ==
        vector<int>({1, 1, 1, 0, 1, 2, 3, 2, 1}));
    cout << (minado({0, 0, 1, 1, 0, 1}) ==
        vector<int>({0, 1, 2, 2, 2, 1}));
	cout << (minado({0, 0, 1, 1, 1, 0}) ==
            vector<int>({0, 1, 2, 3, 2, 1}));
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}