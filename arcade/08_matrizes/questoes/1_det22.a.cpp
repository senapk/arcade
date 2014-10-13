/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
//#include <motor.h>
using namespace std;
//@begin

//Calcule o determinande de uma matriz 2x2
float det22(int mat[2][2]){
    return 0.0;
}

//@end

//@tests
bool feq(float a, float b){
    return (max(a, b) - min(a, b) < 0.1);
}

void tests(){
    cerr << "#open det22 ";
    {
        int mat[2][2] = {{1, 1}, {1, 1}};
        cerr << (feq(det22(mat), 0.0));
    }
    {
        int mat[2][2] = {{1, 2}, {1, 1}};
        cerr << (feq(det22(mat), -1.0));
    }
    {
        int mat[2][2] = {{2, 2},
                         {1, 3}};
        cerr << (feq(det22(mat), 4.0));
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}