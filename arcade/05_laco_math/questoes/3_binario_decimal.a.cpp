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

//Faça uma função que receba um número de base 2 e o converta
//para a base decimal e vice-versa.

//Exemplo :
//Entrada: 10  >>   2
//Saida:   2   >>   10

//@return: retorna um inteiro
int binario_decimal(int numero)
{
    return 0;
}

int decimal_binario(int numero)
{
    return 0;
}
//@end

void tests()
{
    cerr << ("#open binario-decimal PRATA FOR") << endl;
    cerr << (binario_decimal(0) == 0);
    cerr << (binario_decimal(1) == 1);
    cerr << (binario_decimal(11) == 3);
    cerr << (decimal_binario(0) == 0);
    cerr << (decimal_binario(1) == 1);
    cerr << (decimal_binario(2) == 10);
    cerr << (decimal_binario(3) == 11);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

//Dica Binario-decimal: Existe uma tecnica para se converter de binario pra decimal que consiste em:
//você coloca todos os 0s e 1s numa fila, depois acima deles é só colocar todas as potencias de 2 comerçando pelo 1
//acima deles da direita pra esquerda, depois é só somar aquelas potencias que estiverem com um 1 abaixo e você terá
//seu resultado:
//Multiplos>>>   64  32  16  8 4 2 1
//Binario>>>>>   0   1   0   1 1 0 1
//ou seja, o numero 0101101 em decimal é 32 + 8 + 4 + 1 = 45

//Dica Decimal-binario: voce pegara o modulo de 2 do numero e saira adicionando da
//esquerda para a direita, depois você dividirá por 2 até que o numero não seja mais divisivel.
