/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Faça uma função que retorne verdadeiro se o resto da divisao do número num por 3
//for igual a 1 e tambem num for divisivel por 5.
//
//
//Logo depois faça uma função que retorne verdadeiro se o num por par, mas nao for divisivel
//por 4 nem por 6.
//
//@return: true ou false;

bool eh_sobra31_div5(int num)
{
    return false;
}

bool eh_par_n46(int num)
{
    return false;
}

//@end

//@tests
void tests() {
    cerr << "#open eh_sobra31_div5 BRONZE IF" << endl;
    cerr << (eh_sobra31_div5(10) == true);
    cerr << (eh_sobra31_div5(15) ==  false);
    cerr << (eh_sobra31_div5(19) == false);

    cerr << endl << "eh_par_n46 BRONZE IF" << endl;
    cerr << (eh_par_n46(10) == true);
    cerr << (eh_par_n46(14) == true);
    cerr << (eh_par_n46(22) == true);

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


