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

//A serie FETUCCINE é gerada apartir da seguinte forma: os dois primeiros
//termos são passados como parametros e a partir dai, os termos são gerados
//com a soma ou subtração dos dois termos anteriores, ou seja,
//A de N = A de (N-1) + A de (N-2) se Impar e A de N= A de (N-1) - A de (N-2) se Par...

int fetuccine(int a1, int a2, int enesimo)
{
    return 0;
}

//@end

void tests()
{
    cerr << ("#open fetuccine PRATA FOR IF ");
    cerr << (fetuccine(1,1,10) == 5);
    cerr << (fetuccine(1,2,10) == 7);
    cerr << (fetuccine(3,5,10) == 19);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

//Você vai criar uma condição
//que executará de uma forma caso o indice do numero for impar e de outra forma caso for par, para os dois primeiros
//valores iguais a 1 ou sejá, 1º igual a 1 e o 2º igul a 1 a seguência fica da seguinte forma:
//1 , 1 , 2 , 1 , 3 , 2 , 5 , 3 , 8 , 5...
