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

//inverto o numero inteiro passado

//Exemplo:
//Entrada: 1234
//Saida: 4321

//@return: retorna um inteiro

int espelho_de_numeros(int numero)
{
    return 0;
}

//@end

void tests()
{
    cerr << ("#open inversao PRATA IF FOR") << endl;
    cerr << (espelho_de_numeros(1234) == 4321);
    cerr << (espelho_de_numeros(43254) == 45234);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Dica: Você criar uma variavel auxiliar, depois adicionaria nessa variavel,
//o modulo de 10 do numero, onde ele daria o valor do ultimo algarismo,
//dividiria por 10, e continuaria o processo adicionando sempre o ultimo numero
//a variavel, lembrando de tratar as posições de cada um.
