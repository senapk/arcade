/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <string.h>
using namespace std;
//@begin

//#Inverter String#
// Faça um código que receba uma string e retorne essa
// string ao contrário.
// Ex: "batata frita" -> "atirf atatab"
// Ex: "Pterodactilo" -> "olitcadoretP"
//@return: retorna uma string.

string inverteString(string texto){
	return "";
}

//@end

void tests() {
    cout << "#open inverteString" << endl;
    cout <<(inverteString("batata") == "atatab");
    cout <<(inverteString("batata Frita") == "atirF atatab");
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}