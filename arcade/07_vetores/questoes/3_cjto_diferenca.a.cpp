/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

//@autor Bruno Barreto, David Sena
#include <iostream>
#include <vector>
#include <motor.h>
using namespace std;
//@begin
/*
Implemente uma função que descubra e retorne quantos elementos fazem
parte do vetor v1 e não fazem parte do vetor v2. Elementos repetidos
contam como apenas um elemento.
*/
vector<int> diferenca(vector<int> maior, vector<int> menor){
    return vector<int>();
}

//@end

void tests(){
    cerr << "#open diferenca PRATA FOR IF" << endl;

    cerr << (diferenca({1, 3, 9, 7, 8}, {2, 9, 10}) == vector<int>({1, 3, 7, 8}));
    cerr << (diferenca({1, 2, 3, 4}, {4, 1}) == vector<int>({2, 3}));
    cerr << (diferenca({1, 3, 4}, {4, 1, 2}) == vector<int>({3}));
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}