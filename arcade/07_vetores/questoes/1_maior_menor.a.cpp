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

//Faca uma funcao que retorne a soma do maior com o menor elemento
int soma_maior_menor(vector<int> vet){
    return 0;
}

//@end

void tests ()
{
    cerr << "#open maior_menor ";
    cerr << (soma_maior_menor({1, 2, 3, 4, 5}) == 6);
    cerr << (soma_maior_menor({1, 2, 0, 4, 5}) == 5);
    cerr << (soma_maior_menor({1, 2, 0, 4, 9}) == 9);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}