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
Faça uma função que retorne quantas vezes um elemento
passado como parâmetro se repete no vetor.
*/

int num_de_repet(int vet[], int tam, int elem){
    return 0;
}

//@end

void tests(){
	cout << "#open repeticoes";
	int v[] = {1};
	int v1[] = {1, 2, 3};
	int v2[] = {0, 2, 0, 4, 5, 0};
	int v3[] = {4, 2, 3, -1, 5, 0};

	cout << (num_de_repet(v, 1, 1) == 1);
	cout << (num_de_repet(v1, 3, 3) == 1);
	cout << (num_de_repet(v2, 6, 0) == 3);
	cout << (num_de_repet(v3, 6, 1) == 0);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}