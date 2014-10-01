/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>

using namespace std;
//@begin

//Diga se um numero e primo ou não.
//@return: retorna um bool.
bool eh_primo(int numero) {
	return true;
}

//@end

//@tests
void tests() {
	cout << ("#open eh_primo") << endl;
	cout << ("#set PRATA IF FOR") << endl;
	cout << (eh_primo(5) == true);
	cout << (eh_primo(3) == true);
	cout << (eh_primo(0) == false);
	cout << (eh_primo(2) == true);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)
//então se as demais divisões forem exatas, ele não será primo.
//Um número só é primo quando é divisível por 1 e por ele msm,

