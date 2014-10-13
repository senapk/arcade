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
    cerr << "#open soma_divisiveis" << endl;
    cerr << (soma_divisiveis(3) == 3);
    cerr << (soma_divisiveis(10) == 18);
    cerr << (soma_divisiveis(20) == 63);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

//Use o operador de módulo (%) para saber se um
//numéro é divisível por outro. Use uma variável
//auxiliar para guardar a soma.
