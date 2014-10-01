/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Faça um código que receba um dos países abaixo e retorne o continente
//em que ele se encontra. Use o comando switch.
//@return: retorna um enum.

enum Pais { Brasil, Italia, EUA, Japao, Australia};
enum Continente { AmericaSul, AmericaNorte, Europa, Asia, Oceania };


Continente acharLocalizacao( Pais pais){
	return AmericaSul;
}

//@end

//@tests
void tests(){
	cout << "#open acharLocalizacao BRONZE ENUM" << endl;
	cout << (acharLocalizacao(Brasil) == AmericaSul);
    cout << (acharLocalizacao(Italia) == Europa);
    cout << (acharLocalizacao(EUA) == AmericaNorte);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)
//http://www.gddc.pt/ligacoes-juridicas-auto/paises.html
//Caso seu conhecimento de geografia esteja um pouco enverrujado, acesse:

