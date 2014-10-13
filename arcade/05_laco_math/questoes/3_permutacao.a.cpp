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

//Verifique se um numero é permutação de outro, um numero é permutação de outro caso todos seus
//algarismos sejam os mesmos do outro indenpendente da ordem.
//A função conta_digito(), lhe ajudará nessa questão.

//Exemplo:
//1234 é de 4321, 1234, 3241, ...

int conta_digito(int busco,int numero)
{
    return 0;
}

bool permutacao(int a, int b)
{
    return true;
}

//@end

void tests()
{
    cerr << ("#open permutacao BRONZE IF FOR ") << endl;
    cerr << (permutacao(1,1) == true);
    cerr << (permutacao(1,2) == false);
    cerr << (permutacao(34,2) == false);
    cerr << (permutacao(1,0) == false);
    cerr << (permutacao(1234,2314) == true);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Você tem apenas que saber quantas vezes um determinado numero aparece no primeiro valor e no segundo valor,
//caso essa quandidade sejam diferentes, você retorn false, faça isso para todos os numeros do primeiro ou segundo valor..

