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

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.omirp áres oãn ele ,sataxe merof seõsivid siamed sa es oãtne//
//,msm ele rop e 1 rop levísivid é odnauq omirp é ós oremún mU//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}