/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Verifique se uma matriz e simetrica.
//OBS:Lembre que uma matriz é simétrica é aquela onde mat[linha, coluna] = mat[coluna, linha].
//
//@return: bool
template<int dim>
bool matriz_simetrica(int mat[dim][dim]){
    return false;
}

//@end

//@tests
void tests(){

    cerr << "#open matriz_simetrica BRONZE FOR MATRIZ" << endl;
    {
        int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        cerr << (matriz_simetrica<3>(mat) == false);
    }
    {
        int mat[3][3] = {{6,2,3},{4,5,6},{7,8,9}};
        cerr << (matriz_simetrica<3>(mat) == false);
    }
    {
        int mat[3][3] = {{3,7,9},{7,4,6},{9,6,2}};
        cerr << (matriz_simetrica<3>(mat) == true);
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}