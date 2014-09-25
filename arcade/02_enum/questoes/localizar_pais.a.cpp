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

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//lmth.sesiap/otua-sacidiruj-seocagil/tp.cddg.www//:ptth//
//:esseca ,odajurrevne ocuop mu ajetse aifargoeg ed otnemicehnoc ues osaC//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}