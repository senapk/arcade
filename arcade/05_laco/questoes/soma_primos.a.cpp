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
	cout << ("#open soma_primos") << endl;
	cout << ("#set BRONZE IF FOR") << endl;
    cout << (primeiros_primos(1, 5) == 3);
    cout << (primeiros_primos(6, 12) == 2);
    cout << (primeiros_primos(11, 18) == 2);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)
//http://www.somatematica.com.br/fundam/primos.php
//Para saber mais sobre os números primos acesse:
//Se o numero for primo incremente um contador e no final retorne o mesmo.
//Use essa função auxiliar para cada elemento i entre x+1 e y.
//Faça uma função auxiliar que retorne true ou false se o numero passado for primo ou não.

