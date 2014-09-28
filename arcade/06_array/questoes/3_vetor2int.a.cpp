/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
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
	cerr << ("#open vet2int OURO");

	int v1[] = {1};
	int v2[] = {0, 0, 1};
	int v3[] = {1, 0, 0};
	int v4[] = {1, 0, 2};
	int v5[] = {0, 0, 0};

	cerr << (vetor_para_int(v1, 1) == 1);
	cerr << (vetor_para_int(v2, 3) == 1);
	cerr << (vetor_para_int(v3, 3) == 100);
	cerr << (vetor_para_int(v4, 3) == 102);
	cerr << (vetor_para_int(v5, 3) == 0);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)
//por 10 e somar os dois.
//Dica: para unir dois números em um só você pode multiplicar o primeiro

