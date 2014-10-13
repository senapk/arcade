/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>

using namespace std;
//@begin

//Faça uma função que retorne quantos primos existem entre x e y incluindo y.
//@return: retorna um valor inteiro.
//Função isPrimo serve como uma função auxiliar...
bool isPrimo(int x){
    return true;
}

int primeiros_primos(int x, int y){
    return 0;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};

void tests() {
    cerr << ("#open soma_primos") << endl;
    cerr << ("#set BRONZE IF FOR") << endl;
    cerr << (primeiros_primos(1, 5) == 3);
    cerr << (primeiros_primos(6, 12) == 2);
    cerr << (primeiros_primos(11, 18) == 2);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Faça uma função auxiliar que retorne true ou false se o numero passado for primo ou não.
//Use essa função auxiliar para cada elemento i entre x+1 e y.
//Se o numero for primo incremente um contador e no final retorne o mesmo.
//Para saber mais sobre os números primos acesse:
//http://www.somatematica.com.br/fundam/primos.php
