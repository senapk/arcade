/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <vector>
#include <iostream>
#include <motor.h>
using namespace std;
//@begin
/*
   Na contaminação por virus, o contato é essencial.
   Dada uma população inicial, todos os que estiverem
   em contato com alguem negativo(doente) ficam negativos
   também.

   [ 1  2  3  4
   5  6  7  8
   4  2 -1  9
   6  5  3  2]

   No próxima rodada todos que estão próximos ao -1 ficam
   doentes
   [ 1  2  3  4
   5 -6 -7 -8
   4 -2 -1 -9
   6 -5 -3 -2]

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


bool tem_amigo_doente(const matriz<int> & mat, int x, int y){
    int lin = mat.size();
    int col = mat[0].size();
    for (int c = x - 1; c <= x + 1; c++){
        for( int l = y - 1; l <= y + 1; l++){
            if(c >= 0 and c < col and  l >= 0 and l < lin){
                if(mat[l][c] < 0)
                    return true;
            }
        }
    }
    return false;
}

matriz<int> ebola(const matriz<int> & mat){
    matriz<int> nova(mat);
    int lin = mat.size();
    int col = mat[0].size();
    for(int x = 0; x < col; ++x){
        for(int y = 0; y < lin; ++y){
            if(mat[y][x] > 0){
                if(tem_amigo_doente(mat, x, y))
                    nova[y][x] = -nova[y][x];
            }
        }
    }
    return nova;
}


//@end

void tests(){
    cerr << "#open ebola PRATA";
    {
        matriz<int> mat = {
            { 1, 2,-3, 4},
            { 5, 6, 7,-8},
            { 4, 2,-1, 9},
            { 6, 5, 3, 2}};
        matriz<int> nova= {
            { 1,-2,-3,-4},
            { 5,-6,-7,-8},
            { 4,-2,-1,-9},
            { 6,-5,-3,-2}};
        cerr << (ebola(mat) == nova);
    }
    {
        matriz<int> mat = {
            {-1, 2,-3, 4},
            { 5, 6, 7,-8},
            { 4, 2,-1, 9},
            { 6, 5, 3, 2}};
        matriz<int> nova= {
            {-1,-2,-3,-4},
            {-5,-6,-7,-8},
            { 4,-2,-1,-9},
            { 6,-5,-3,-2}};
        cerr << (ebola(mat) == nova);
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}