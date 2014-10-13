/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

// Faça uma função que calcula o MDC de dois numeros qualquer.
// O MDC é o Maior numero que divide os dois numeros,
// ele é menor ou igual ao menor dos dois numeros.

//@return: int

int mdc(int a, int b){
    return 0;
}

//@end

//@tests
void tests(){
    cerr << "#open mdc BRONZE IF FOR" << endl;
    cerr << (mdc(1,1) == 1);
    cerr << (mdc(1,2) == 1);
    cerr << (mdc(2,4) == 2);
    cerr << (mdc(20,40) == 20);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Vai dividindo até encontrar um numero que sejá igual ou menor ao menor dos dois numeros que divide os dois,
//talvez sejá preciso vc ir armazenando o que dar pra dividir, caso nenhum que é igual ao menor dar pra dividir.
//Para saber mais acesse:
//http://www.somatematica.com.br/fundam/mdc.php
