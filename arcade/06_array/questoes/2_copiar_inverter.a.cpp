/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin


//Faça uma função que copie os elementos de um vetor dentro de outro.
//Considere que eles já estão alocados com o mesmo tamanho.
void copiar(int v1[], int v2[], int tam) {
    return;
}

//Faça uma função que copie os elementos na ordem invertida.
void inverter(int v1[], int v2[], int tam) {
    return;
}


//@end

void tests(){
    cerr << "#open copiar_inverter ";
	int a1[] = {1};
	int b1[1];

	int a2[] = {1, 2, 3};
	int b2[3];

	int a3[] = {0, -1, 0, 2};
	int b3[4];

	copiar(a1, b1, 1);
	copiar(a2, b2, 3);
	copiar(a3, b3, 4);

	cerr << (b1[0] == 1);
	cerr << (b2[0] == 1);
	cerr << (b2[1] == 2);
	cerr << (b2[2] == 3);
	cerr << (b3[0] == 0);
	cerr << (b3[1] == -1);
	cerr << (b3[2] == 0);
	cerr << (b3[3] == 2);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)
//    vetor2 [indice] recebe o valor do vetor1 [ultimo - indice]
//Para todos os indices
//
//O algoritmo ficaria:
//No caso o ultimo = tam - 1;
//
//o primeiro, o penultimo o segundo e etc.
//copiar, mas muda a atribuição. No caso o ultimo elemento recebe
//Também pode copiar já invertendo. Voce mantem o laco do algoritmo
//
//algoritmo de cópia e depois inverter.
//Se você já souber o algoritmo de inversão pode copiar usando o
//Inverter é equivalente ao copiar.
//#questao inverter
//
//    vetor2 [indice] recebe o valor do vetor1 [indice]
//Para todos os indices
//
//você copie esse elemento do primeiro vetor para o segundo.
//laço com índice. A ideia é que pra cada indice dos vetores
//Para copiar de um vetor para outro você vai precisar usar um
//#questao copiar

