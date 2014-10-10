/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <motor.h>
using namespace std;
//@begin

/*
    Crie uma função que retorna a soma das linhas em um vetor.
    e outra que retorna a soma das colunas em um vetor.
*/
template<class T>
using matriz = vector<vector<T>>;

vector<int> somar_linhas(matriz<int> mat){
    return vector<int>();
}


vector<int> somar_colunas(matriz<int> mat){
    return vector<int>();
}

//@end

void tests(){
    cerr << "#open somar_colunas" << endl;
    {
        matriz<int> teste = {{5,2,3}, {5,2,3}, {5,2,3}};
        cerr << (somar_linhas(teste) == vector<int>({10,10,10}));
        cerr << (somar_colunas(teste) == vector<int>({15, 6, 9}));
    }

    {
        matriz<int> teste = {{10,9,12}, {3,2,3}, {1,5,0}};
        cerr << (somar_linhas(teste) == vector<int>({31,8,6}));
        cerr << (somar_colunas(teste) == vector<int>({14,16,15}));
    }

}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}