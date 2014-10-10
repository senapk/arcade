/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//@convertido por: Daniel Filho.

//Faça uma função que Rotacione todos os algarismos de um número N.
//Uma rotação de algarismo funciona da seguinte forma:
//Caso o algarismo seja 2 e seja feita 2 rotações sobre ele então
//a saída sérá 4 pois 2 + 2( número de rotações ) é igual a 4.
//
//Obs: Caso o algarismo depois da rotação ultrapasse 9 então a rotação continua apartir de 0.
//Ex.: 9 com 2 rotações == 1
//     9 com 1 rotação == 0
//     1234 com 2 rotações  == 3456
//     12 com 1 rotações  == 23
//     15 com 3 rotações == 48
//     92 com 1 rotações == 03
//     57 com 4 rotações == 91


//@return: int

int rotaciona_crip(int numero, int rotacao){
    return 0;
}


//@end

//@tests
void tests(){
    cerr << "#open rotaciona_crip BRONZE IF FOR" << endl;
    cerr << (rotaciona_crip(1,2) == 3);
    cerr << (rotaciona_crip(13,2) == 35);
    cerr << (rotaciona_crip(9,2) == 1);
    cerr << (rotaciona_crip(9,1) == 0);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}