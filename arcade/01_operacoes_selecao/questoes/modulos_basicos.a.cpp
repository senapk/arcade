/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Faça uma função que retorne true se o número passado por parâmetro
//for par ou false caso contrário.
//
//Logo depois faça uma função que recebe dois números num1 e num2
//e retorne true se o num1 for múltiplo de num2 ou false caso contrário.

bool eh_par(int num)
{
    return false;
}

bool eh_mult(int num1, int num2)
{
    return false;
}

//@end

//@tests
void tests() {
    cerr << "#open eh_par BRONZE" << endl;

    cerr << (eh_par(2) == true);
       cerr << (eh_par(3) == false);
       cerr << (eh_par(-1) == false);

       cerr << endl << "#open eh_mult BRONZE" << endl;

       cerr << (eh_mult(4,2) == true);
    cerr << (eh_mult(4,9) == false);

}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)

//Se o resto da divisão de um número n1 por outro numero n2 for 0 então n1 é divisível por n2.
//Para saber se um número é divisível por outro basta usar o operador % (Módulo ou Resto da divisão).


