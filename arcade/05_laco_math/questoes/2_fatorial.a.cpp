/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>

using namespace std;
//@begin

//Faca um programa que calcule o fatorial de um numero
//@return: retorna um valor inteiro.
int fatorial(int numero) {
    return 0;
}

//@end

void tests() {
    cerr << ("#open fatorial") << endl;
    cerr << ("#set PRATA FOR") << endl;
    cerr << (fatorial(1) == 1);
    cerr << (fatorial(2) == 2);
    cerr << (fatorial(3) == 6);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//O fatorial de um número é sua multiplicação pelos demais números
//em ordem decrescente até o 1.
//Exemplo: 5! = 5 * 4 * 3 * 2 * 1 OU 1 * 2 * 3 * 4 * 5 = 120
//Lembrando que a ordem não altera o resultado.
