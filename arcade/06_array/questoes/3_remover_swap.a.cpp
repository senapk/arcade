/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

/*
Remover com swap

Implemente uma função que localiza o elemento passado como parâmetro
e remove-o do vetor. Para isso, faça um swap (troca) entre o elemento
a ser removido e a última posição do vetor, lembrando de decrementar o
tamanho. A função deve retornar false se o elemento não existir no vetor.
Ex.: v = {1, 2, 3, 4, 5}. Após removermos e elemento "1", o vetor ficará assim:
v = {5, 2, 3, 4}. Note que o elemento "5" foi colocado no lugar do elemento "1"
e o tamanho do vetor foi decrementado.

*/

bool remover_com_swap(int v[], int &tam, int elem) {
    return false;
}

//@end

void tests() {
	cerr << ("#open remover_swap PRATA FOR VETOR");

	int v1[] = {1};
	int tam1 = 1;

	cerr << (remover_com_swap(v1, tam1, 1) == true);
	cerr << (tam1 == 0);

	int v2[] = {1, 2, 3};
	int tam2 = 3;

	cerr << (remover_com_swap(v2, tam2, 4) == false);
	cerr << (remover_com_swap(v2, tam2, 3) == true);
	cerr << (v2[0] == 1);
	cerr << (v2[1] == 2);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}