/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
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

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
///otiefrep-odardauq/golb/rb.gro.pembo.sebulc//:ptth//
//:esseca sotiefrep sodardauq so erbos siam rebas araP//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}