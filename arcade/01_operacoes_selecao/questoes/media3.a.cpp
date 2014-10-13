/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <cmath>
using namespace std;
//@begin

//Faça um programa que calcule a média de três notas.
//@return : float

float media( float nota1, float nota2, float nota3 ){
    return 0;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};
void tests() {
    cerr << "#open media BRONZE "<< endl;
    cerr << (feq(media(1,2,3), 2.0));
    cerr << (feq(media(2,4,3), 3));
    cerr << (feq(media(1.5,2.5,3.5), 2.5));

}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

//Para calcular a média basta somar as três notas e dividir por 3.
//Tenha cuidado na hora de colocar o parêntese na divisão.
