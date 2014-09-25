/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
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