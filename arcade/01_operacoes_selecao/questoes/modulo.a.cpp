/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

// Faça uma função que retorne o módulo de um número.
// Se o numero for negativo, inverter deixando positivo e retornar.
// Se for positivo, retornar o valor positivo.
//
//@return: bool

int modulo(int num){
    return 0;
}

//@end

//@tests
void tests() {
    cerr << "#open modulo BRONZE" << endl;
    cerr << (modulo(-5) == 5);
    cerr << (modulo(3) == 3);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)

//Para deixar um número negativo em módulo basta multiplicar o mesmo por -1.


