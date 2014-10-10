/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//@completado e convertido por: Mikael Lemos

//Escreva uma função que leia um número N, inteiro maior que zero, e retorne o
//valor de H(número harmônico) segundo a série ao lado com N termos. H=(1)+(1/2)+(1/3)+(1/4)+...+(1/N).

//@return: retorna um float

float numero_harmonico(int n)
{
    return 0.0;
}

//@end

void tests()
{
    cerr << ("#open numero_harmonico PRATA FOR");
    cerr << (numero_harmonico(3) > 1.83 && numero_harmonico(3) < 1.84);
    cerr << (numero_harmonico(6) > 2.45 && numero_harmonico(6) < 2.46);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)


//Na fração, o numerador é constante e o denominador e variante.

