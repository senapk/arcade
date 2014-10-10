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

// A série de fibonatti é 1 2 3 5 8 ...
// A soma dos 3 primeiros termos é 6
// retorne o valor da soma de todos os termos até n

//@return: returna um inteiro
int fibo(int n){
    return 0;
}

//@end

void tests()
{
    cerr << ("#open fibonatti PRATA IF  FOR") << endl;
    cerr << (fibo(3) == 6);
    cerr << (fibo(4) == 11);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)

// diferenciado, respectivamente 1 e 2.
// a partir da terceira posição, se forem a posicao 1 e 2, estes tem valor
// A sequencia de fibonatti leva em conta a soma dos dois termos anteriores

