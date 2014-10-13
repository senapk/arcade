/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

//@autor Bruno Barreto;
#include <iostream>
#include <motor.h>
#include <vector>
using namespace std;
//@begin

/*Duplas Multiplicadas.
  Dado um número n, apresente todas as duplas que multiplicadas
  dão n. Não repita duplas
ex:  num 6: {1, 6}, {2, 3}
num 45: {1, 45}, {3, 15}, {5, 9}
*/

struct Pair{
    int x;
    int y;
};


vector<Pair> buscar_duplas(int n){
    return vector<Pair>();
}

bool operator==(vector<Pair> a, vector<Pair> b)
{
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < (int)a.size(); i++)
        if(a[i].x != b[i].x or a[i].y != b[i].y)
            return false;
    return true;
}

//@end

void tests(){
    cerr << "#open buscar_duplas" << endl;
    int n1 = 12, n2 = 24, n3 = 1, n4 = 7;

    cerr << (buscar_duplas(n1) == vector<Pair>({{1,12}, {2,6}, {3,4}}));
    cerr << (buscar_duplas(n2) == vector<Pair>({{1,24}, {2,12}, {3,8}, {4,6}}));
    cerr << (buscar_duplas(n3) == vector<Pair>({{1,1}}));
    cerr << (buscar_duplas(n4) == vector<Pair>({{1,7}}));
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)

//através do operador ==.
//A funcao bool operator== tem como objetivo permitir a comparacao de dois vector<Pair>()


