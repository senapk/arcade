/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//#Está Contido#
//Descubra se o vetor v1 está contido em v2 e retorne true se isso ocorrer.


bool esta_contido(vector<int> maior, vector<int> menor){
    return false;
}

//@end

void tests() {
    cerr << "#open esta_contido BRONZE IF FOR" << endl;
    cerr << (esta_contido({1, 2, 3, 4, 5}, {1, 3, 5}) == true);
    cerr << (esta_contido({1, 2, 3, 4, 5}, {1, 3, 6}) == false);
    cerr << (esta_contido({1, 2, 3, 4, 5}, {1, 3, 5, 4, 2, 0}) == false);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

//Dica: se todos os elementos de v1 existirem em v2, v1 só pode estar
//contido em v2.
