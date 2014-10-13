/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Faça uma função que recebea dois numeros naturais como entrada e determine o resto da
//divisao do maior pelo menor.

int resto_maior_menor(int n1, int n2){
    return 0;
}

//@end

//@tests
void tests() {
    cerr << "#open resto_maior_menor BRONZE IF" << endl;
    cerr << (resto_maior_menor(5,2) == 1);
    cerr << (resto_maior_menor(10,3) == 1);

}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

//Se n1 for maior que n2 faca n1%n2, senao faca n2%n1.
