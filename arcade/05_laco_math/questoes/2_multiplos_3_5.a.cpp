/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//@convertido por: Daniel Filho

// Faça uma função capaz de somar todos os números naturais abaixo de 10 que são múltiplos de 3 ou 5,
// temos 3, 5, 6 e 9. A soma desses múltiplos é 23.
// Determine a soma de todos os múltiplos de 3 ou 5, inferior ao número X.
//
//@return: int referente a soma dos múltiplos.

int mult_3_5(int x){
    return 0;
}

//@end

//@tests
void tests(){

    cerr << "#open mult_3_5 BRONZE IF FOR" << endl;
    cerr << (mult_3_5(10) == 23);
    cerr << (mult_3_5(11) == 33);
    cerr << (mult_3_5(12) == 33);

}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}