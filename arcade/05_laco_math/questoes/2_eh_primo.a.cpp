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
    cerr << ("#open eh_primo") << endl;
    cerr << ("#set PRATA IF FOR") << endl;
    cerr << (eh_primo(5) == true);
    cerr << (eh_primo(3) == true);
    cerr << (eh_primo(0) == false);
    cerr << (eh_primo(2) == true);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Um número só é primo quando é divisível por 1 e por ele msm,
//então se as demais divisões forem exatas, ele não será primo.
