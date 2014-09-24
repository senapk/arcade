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

//Faça um programa que receba um valor float de uma nota entre 0 e 10
//e retorne a categoria que o aluno ficou.
//Menor que 4 - CatD
//Entre 4 e 7 - CatC
//Entre 7 e 9 - CatB
//Maior que 9 - CatA
//Valor inválido - return CatErro
//@return: retorna um enum.

enum Categoria { CatA, CatB, CatC, CatD, CatErro};

Categoria categoria (float nota){
	return CatA;
}
//@end

//@tests
void tests(){
	cout << "#open nota_prova BRONZE IF ENUM" << endl;
	cout << (categoria(3.0) == CatD);
    cout << (categoria(7.0) == CatB);
    cout << (categoria(6.9) == CatC);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}