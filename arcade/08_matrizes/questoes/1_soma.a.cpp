/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

//Mamãe me perguntou
//-Se somar essas notas todas do teu boletim num
//dá um 10 né menino.
//
//Eu disse:
//-Dá sim mamãe e eu ainda faço um programa pra isso.
//
//Some e retorne todas as notas da matriz
template<int lin, int col>
int somar(int mat[lin][col]){
    return 0;
}

//@end

void tests(){

    cerr << "#open somar";
    int mat[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    cerr << (somar<3, 2>(mat) == 21);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}