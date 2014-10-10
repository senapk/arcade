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

// Rotação-Direita
//A rotação de um número inteiro consiste na transferência de um dígito de
//uma extremidade deste número para a outra. A rotação à direita, ou RD, retira o
//dígito mais a esquerda e o coloca mais a direita. Por exemplo, RD(1234) = 2341.


// Rotação-Esquerda
//A rotação à esquerda, ou RE, retira o dígito mais a direita e o coloca mais à
//esquerda. Por exemplo, RE(1234) = 4123.

int RD(int numero)
{
    return 0;
}

int RE(int numero)
{
    return 0;
}

//@end

void tests()
{
    cerr <<("#open rotacoes PRATA FOR IF") << endl;
    cerr << (RE(1234) == 4123);
    cerr << (RE(4234) == 4423);
    cerr << (RD(1234) == 2341);
    cerr << (RD(2345) == 3452);
    cerr << (RD(1112) == 1121);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)

//numero ao valor que restar depois da remorção.
//Dica RD: Retire o primeiro numero da esquerda pra direita e some esse


//"transforma-lo" usando uma "grandeza" e soma-lo ao resto que sobrar
//Dica RE: Você só precisa retirar o primeira numero da direita para a esquerda,


