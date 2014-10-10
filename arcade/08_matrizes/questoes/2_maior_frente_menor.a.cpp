/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Os soldados se colocaram em formação no quartel.
//Na formação eles formaram uma matriz.
//
//Cada soldado Stormtrooper tem uma numeração na sua farda, logo
//o Comandante Dart Vader querendo tripudiar de você, mandou
//você contar quantas vezes um soltado com numeração de fardamento menor está
//atrás de um maior.
//Você que não é besta, fez um código pra isso.
//
//Obs: Você tem que conferir as numerações verticalmente.
//
//Entrada:
//          2 4 6
//         3 8 9
//          1 0 5
//
//Saída: 3
//
//Para saber a quantidade de linhas e colunas use
//int lin = matriz.size();
//int col = matriz[0].size();
//Para acessar o elemento y, x use matriz[y][x]

template<class T>
using matriz = vector<vector<int>>;

//@return: int
int contar_fardamento_menor(matriz<int> mat){
    return 0;
}

//@end

//@tests
void tests(){
    cerr << "#open contar_maior_menor BRONZE FOR MATRIZ" << endl;
    {
        matriz<int> mat = {{2,4,6},{3,8,9},{1,0,5}};
        cerr << (contar_fardamento_menor(mat) == 3);
    }
    {
        matriz<int> mat = {{2,4},{3,8}};
        cerr << (contar_fardamento_menor(mat) == 0);
    }
    {
        matriz<int> mat = {{2,4,3},{3,8,0}};
        cerr << (contar_fardamento_menor(mat) == 1);
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}