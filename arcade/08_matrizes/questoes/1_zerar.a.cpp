/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

//O professor surtou e quer colocar zero em todas
//as notas do quadro de alunos, ajude-o a fazer isso
//colocando zero em todas as posicoes da matriz
template<int lin, int col>
void zerar(int mat[lin][col]){
    return;
}

//@end

//@tests
#include <algorithm>
void tests(){

    cerr << "#open zerar";
    {
        int mat[3][2] = {{1, 2}, {3, 4}, {5, 6}};
        int res[3][2] = {{0, 0}, {0, 0}, {0, 0}};
        zerar<3,2>(mat);
        cerr << (equal((int*)mat, (int*)mat + 6, (int*)res));
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}