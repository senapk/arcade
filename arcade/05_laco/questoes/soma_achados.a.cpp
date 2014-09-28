/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Questão 01: Faça uma função que retorna a soma dos 4 primeiros números pares após o número x.
//Questão 02: Faça uma função que retorna a soma dos 10 primeiros números divisíveis por 3 depois do número x
//Questão 03: Faça uma função que retorna a soma dos y primeiros números divisíveis por z depois do número x

int soma4(int x){
	return 0;
}

//Questão 02
int soma10(int x){
	return 0;
}

//Questão 03
int somaxyz(int x, int y, int z){
	return 0;
}


//@end

//@tests
void tests(){

	//Questão 01
    cerr << "#open soma4 BRONZE IF FOR" << endl;
    cerr << (soma4(1) == 20);
    cerr << (soma4(8) == 52);
    cerr << endl;

	//Questão 02
    cerr << "#open soma10 BRONZE IF FOR" << endl;
    cerr << (soma10(0) == 165);
    cerr << (soma10(3) == 195);
    cerr << endl;

	//Questão 03
    cerr << "#open somaxyz BRONZE IF FOR" << endl;
    cerr << (somaxyz(20,3,2) == 72);
    cerr << (somaxyz(0,1,2) == 2);
	cerr << endl;

}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)
//Dica: Se lembre do operador de módulo ( % ) que retorna do resto da divisão de um número por outro.

