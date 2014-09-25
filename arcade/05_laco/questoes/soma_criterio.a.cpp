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

//#Soma Critério#
//Faça uma função que retorne a soma dos primeiros x
//números naturais que sejam divisíveis
//por 3 mas que não sejam divisíveis por 7.
//

int soma_divisiveis(int x){
	return 0;
}

//@end

//@tests
void tests() {
    cout << "#open soma_divisiveis" << endl;
    cout << (soma_divisiveis(3) == 3);
    cout << (soma_divisiveis(10) == 18);
    cout << (soma_divisiveis(20) == 63);
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.amos a radraug arap railixua//
//leváirav amu esU .ortuo rop levísivid é orémun//
//mu es rebas arap )%( oludóm ed rodarepo o esU//
//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}