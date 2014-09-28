/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
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
	cerr << ("#open criptografar") << endl;
	cerr << ("#set PRATA IF FOR STRING") << endl;
	string a1 = "sua casa";
	cerr << (criptografar(a1) == "a#a# au#\0");
	string a2 = "casa nova";
    cerr << (criptografar(a2) == "a#o# a#a#\0");
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}