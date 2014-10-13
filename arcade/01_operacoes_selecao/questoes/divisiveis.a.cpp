/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//@question
//Faça uma função que confere se dois números, num1 e num2 são divisíveis por 3 ou por 5.
//Se num1 e num2 forem ambos divisiveis por 3 ou forem ambos divisiveis
//por 5 retorne true.
//
//Logo depois faça outra função que retorna true se o resto da divisão de num1 por num2 é
//igual ao resto da divisão de num3 por num4 ou false caso contrário.
//
//@return: false ou true.
//

bool ambos_3_ou_ambos_5(int num1, int num2)
{
    return false;
}

bool restos_iguais( int num1, int num2, int num3, int num4)
{
    return false;
}

//@end

//@tests
void tests() {
    cerr << "#open ambos_3_ou_ambos_5 BRONZE" << endl;
    cerr << (ambos_3_ou_ambos_5(9,27) == true);
    cerr << (ambos_3_ou_ambos_5(100,20) == true);
    cerr << (ambos_3_ou_ambos_5(35,10) == true);

    cerr << endl << "#open restos_iguais BRONZE" << endl;
    cerr <<(restos_iguais(10,3,8,7) == true);
    cerr <<(restos_iguais(3,3,5,5) == true);
    cerr <<(restos_iguais(18,5,19,4) == true);

}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

//Para saber se um número é divisível por outro basta usar o operador % (Módulo ou Resto da divisão).
//Se o resto da divisão de um número n1 por outro numero n2 for 0 então n1 é divisível por n2.
