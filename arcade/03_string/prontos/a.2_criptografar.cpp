/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <string>

using namespace std;
//@begin

//Faça um programa para criptografar uma frase, trocando as consoantes por # e
//invertendo a frase.
//@return: retorna uma string;
string criptografar (string nome){
	return "abc";
}

//@end

void tests() {
	cout << ("#open criptografar") << endl;
	cout << ("#set PRATA IF FOR STRING") << endl;
	string a1 = "sua casa";
	cout << (criptografar(a1) == "a#a# au#\0");
	string a2 = "casa nova";
    cout << (criptografar(a2) == "a#o# a#a#\0");
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}