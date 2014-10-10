/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

//@autor: Bruno Barreto;

/*
   some todos os elementos da diagonal principal,
   e subtraia da soma dos elementos da diagonal
   secundária.
   */



template <int dim>
int somar(int mat[dim][dim]){
    return 0;
}


//@end

void tests(){
    cerr << "#open somar" << endl;
    {
        int mat[3][3] = {{1,1,1}, {1,1,1}, {1,1,1}};
        cerr << (somar(mat) == 0) << endl;
    }

    {
        int mat[4][4] = {{1,2,3,4}, {4,5,6,7}, {7,8,9,10}, {10,11,12,13}};
        cerr << (somar(mat) == 0) << endl;
    }

    {
        int mat[2][2] = {{5,9}, {3,4}};
        cerr << (somar(mat) == -3) << endl;
    }

}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}