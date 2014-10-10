/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin
//@autor Italo

//Dizemos que uma matriz quadrada inteira é um quadrado magico se a soma dos
//elementos de cada linha, a soma dos elementos de cada coluna e a soma dos
//elementos das diagonais principal e secundária são todas iguais.
//Retorne verdadeiro(true) se a matriz é uma quadrado mágico ou falso(false) caso contrário
//
//@return: bool

template<int dim>
bool quadrado_magico(int matriz[dim][dim])
{
    return false;
}

//@end

//@tests
void tests()
{
    cerr << "#open quadrado_magico BRONZE MATRIZ FOR IF" << endl;
    {
        int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        cerr << (quadrado_magico<3>(mat) == false);
    }
    {
        int mat[3][3]={{6,2,3},{4,5,6},{7,8,9}};
        cerr << (quadrado_magico<3>(mat) == false);
    }
    {
        int mat[3][3]={{2,7,6},{9,5,1},{4,3,8}};
        cerr << (quadrado_magico<3>(mat) == true);
    }
    {
        int mat[3][3]={{8,1,6},{3,5,7},{4,9,2}};
        cerr << (quadrado_magico<3>(mat) == true);
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}