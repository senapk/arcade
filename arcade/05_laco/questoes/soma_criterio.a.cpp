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
    cout << "#open soma_divisiveis" << endl;
    cout << (soma_divisiveis(3) == 3);
    cout << (soma_divisiveis(10) == 18);
    cout << (soma_divisiveis(20) == 63);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)
//auxiliar para guardar a soma.
//numéro é divisível por outro. Use uma variável
//Use o operador de módulo (%) para saber se um


