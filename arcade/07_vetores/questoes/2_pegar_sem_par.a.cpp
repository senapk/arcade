/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
#include <vector>
using namespace std;
//@begin

//@autor: Bruno Barreto Freitas;

/*
    Crie uma função que, ao receber um vetor de animais, em que
    cada espécie é representada por um número inteiro, retorne
    um vetor com os animais que não pussem par.
    Exemplo:
    vetor = [1 2 3 2 4 6 1 8 1 3 2 7 6 7]
    resultado = [1 2 4 8]
    Note que um animal não pode fazer par com mais de um animal.
    @return: vector<int>
*/


vector<int> pegar_sem_par(vector<int> vet){
    return vector<int>();
}


//@end

void tests(){
    cerr << "#open pegar_sem_par" << endl;

    {
        vector<int> pares = {1,2,3,2,4,6,1,8,1,3,2,7,6,7};
        cerr << (pegar_sem_par(pares) == vector<int>({1,2,4,8}));
    }

    {
        vector<int> pares = {1,3,4,2,1,1,4,5,6,9,9,0,3};
        cerr << (pegar_sem_par(pares) == vector<int>({1,2,5,6,0}));
    }

}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}