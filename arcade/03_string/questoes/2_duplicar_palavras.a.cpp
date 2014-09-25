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

//Faça um programa que receba uma frase e imprima a
//mesma frase com as palavras repetidas.
//Entrada: "OLA PLANETA TERRA"
//Saida: "OLA OLA PLANETA PLANETA TERRA TERRA"
//@return: retorna uma string.
string duplicar_palavras(string a){
	return "abc";
}

//@end

void tests() {
	cout << ("#open duplicar_palavras") << endl;
	cout << ("#set PRATA FOR IF STRING") << endl;
	cout << (duplicar_palavras("OLA PESSOAS DA TERRA\0") == "OLA OLA PESSOAS PESSOAS DA DA TERRA TERRA\0");
	cout << (duplicar_palavras("EU SOU A LENDA\0") == "EU EU SOU SOU A A LENDA LENDA\0");
	cout << (duplicar_palavras("BATATAS VOADORAS DE MARTE\0") == "BATATAS BATATAS VOADORAS VOADORAS DE DE MARTE MARTE");
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//
//
//.oçapse me oan//
//'0\' me animret ale siop ,arvalap amitlu a ratart ed es-erbmel ,artuo a arvalap amu odnanetacnoc iav e//
//,gnirts avon amu a arvalap amu osac on ,gnirts asse atnecserca cv ,rartnocne o cv odnauq//
//oçapse mu rartnocne eta arvalap adac alen odnezamra e railixua gnirts amu rairc edop êcov//
//spit//
//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}