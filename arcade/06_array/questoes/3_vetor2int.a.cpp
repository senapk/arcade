/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

/*
Esta função deve transformar um vetor em um número inteiro e retornar
esse valor. Todos os elementos do vetor possuem apenas um dígito.
Ex.: o vetor v = {1, 2, 3, 4}, torna-se o inteiro 1234.
*/

int vetor_para_int(int v[], int tam) {
    return 0;
}

//@end

void tests(){
	cout << ("#open vet2int OURO");

	int v1[] = {1};
	int v2[] = {0, 0, 1};
	int v3[] = {1, 0, 0};
	int v4[] = {1, 0, 2};
	int v5[] = {0, 0, 0};

	cout << (vetor_para_int(v1, 1) == 1);
	cout << (vetor_para_int(v2, 3) == 1);
	cout << (vetor_para_int(v3, 3) == 100);
	cout << (vetor_para_int(v4, 3) == 102);
	cout << (vetor_para_int(v5, 3) == 0);
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.siod so ramos e 01 rop//
//oriemirp o racilpitlum edop êcov ós mu me soremún siod rinu arap :aciD//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}