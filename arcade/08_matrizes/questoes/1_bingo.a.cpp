/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <vector>
using namespace std;
//@begin

//Bingo
//Dado um vetor verifique quantos numeros voce acertou
//na matriz
//

template<class T>
using matriz = vector<vector<int>>;

int bingo(vector<int> vet, matriz<int> mat)
{
    return 0;
}

//@end

void tests()
{
    cerr << "#open bingo BRONZE";
    {
        vector<int> V ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
        matriz<int> M = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
        cerr << (bingo(V,M) == 16);
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}