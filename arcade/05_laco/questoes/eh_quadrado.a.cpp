/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>

using namespace std;
//@begin

//Um quadrado perfeito é um número natural cuja raiz quadrada também
//pertence aos naturais. O conjunto dos quadrados perfeitos são {1, 4, 9, 16, 25, 36,49,...}.
//Dado um inteiro de entrada determinar, sem uso de operadores reais
//(como raiz quadrada, por exemplo), se ele é retorne verdadeiro senão retorne falso.
//@return: return true ou false.
bool eh_quadrado_perfeito(int num){
	return true;
}

//@end

//@tests
void tests() {
	cout << ("#open distancia_pontos") << endl;
	cout << ("#set BRONZE IF FOR") << endl;
	cout << (eh_quadrado_perfeito(0) == false);
    cout << (eh_quadrado_perfeito(1) == true);
    cout << (eh_quadrado_perfeito(2) == false);
    cout << (eh_quadrado_perfeito(3) == false);
    cout << (eh_quadrado_perfeito(140) == false);
    cout << (eh_quadrado_perfeito(6084) == true);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)
//http://clubes.obmep.org.br/blog/quadrado-perfeito/
//Para saber mais sobre os quadrados perfeitos acesse:

