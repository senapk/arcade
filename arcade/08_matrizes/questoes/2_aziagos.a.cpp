/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <vector>
#include <iostream>
using namespace std;
//@begin
/*
Um aziago é uma pessoa que trás má sorte pra todos
que estão ao seu redor.

Vamos brincar de azarar.

Dado um grupo de pessoas em uma matriz e uma posição de
um aziago, você vai inverter a sorte de todos que estivem
ao lado do aziago, mas deixar o aziago quieto.

Inverter a sorte significa mudar de positivo pra negativo
e vice versa. Retorne a nova matriz.

[ 1  2 -3  4
  5  6  7 -8
  4  2 -1  9
  6  5  3  2]

  Suponha que o aziago é o [1,1] a matriz fica assim
[-1 -2  3  4
 -5  6 -7 -8
 -4 -2  1  9
  6  5  3  2]

  Na mesma matriz chamando o [3,3] pra ser o aziago
[-1 -2  3  4
 -5  6 -7 -8
 -4 -2 -1 -9
  6  5 -3  2]

Para obter o numero de linhas e colunas use
int lin = mat.size();
int col = mat[0].size();

Para acessar o elemento y, x use mat[y][x]

Retorne uma nova matriz com as inversões.
Para inicializar uma nova matriz apartir da
matriz mat recebida é só fazer:

matriz<int> nova(mat);
*/
template<class T>
using matriz = vector<vector<T>>;

matriz<int> mudar_sorte(matriz<int> mat, int x, int y){
    return mat;
}

//@end

void tests(){
    cerr << "#open aziago ";
    matriz<int> mat = {{ 1, 2,-3, 4},
                       { 5, 6, 7,-8},
                       { 4, 2,-1, 9},
                       { 6, 5, 3, 2}};
    {
        matriz<int> nova= {{ 1,-2,-3, 4},
                           {-5,-6, 7,-8},
                           { 4, 2,-1, 9},
                           { 6, 5, 3, 2}};
        cerr << (mudar_sorte(mat, 0, 0) == nova);
    }
    {
        matriz<int> nova= {{ 1, 2,-3, 4},
                           { 5, 6, 7,-8},
                           {-4,-2, 1, 9},
                           {-6, 5,-3, 2}};
        cerr << (mudar_sorte(mat, 1, 3) == nova);
    }
    {
        matriz<int> nova= {{ 1, 2,-3, 4},
                           { 5, 6, 7,-8},
                           { 4, 2, 1,-9},
                           { 6, 5,-3, 2}};
        cerr << (mudar_sorte(mat, 3, 3) == nova);
    }
    {
        matriz<int> nova= {{ 1, 2, 3,-4},
                           { 5, 6,-7,-8},
                           { 4, 2, 1,-9},
                           { 6, 5, 3, 2}};
        cerr << (mudar_sorte(mat, 3, 1) == nova);
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}