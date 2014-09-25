/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <string>
using namespace std;
//@begin

//Faça um programa que receba palavras separadas por vários espaços em
//branco e apresente essas palavras separadas por somente um espaço.
//@return: retorne uma string.
string retira_espaco(string A){
	return "abc";
}

//@end

//@tests

void tests() {
	cout << ("#open retira_espaco") << endl;
	cout << ("#set PRATA STRING IF FOR") << endl;
	string a1 = "HELLO       WORLD\0";
	cout << (retira_espaco(a1) == "HELLO WORLD\0");
	string a2 = "LABORATORIO     DE      PROGRAMACAO      I\0";
    cout << (retira_espaco(a2) == "LABORATORIO DE PROGRAMACAO I\0");
    string a3 = "BOLA     DE      FUTEBOL\0";
    cout << (retira_espaco(a3) == "BOLA DE FUTEBOL\0");
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//
//
//.mu revah edop os ,oçapse ajes osac e//
//oçapse rof oãn es raipoc edop êcov oãtne ,soçapse so eriter êcov euq reuq os oãtseuq a omoc//
//]otnemele_oacisop[gnirts_emon odnasu gnirts ad otnemele adac racifirev edop êcoV//
//;)(htgnel.gnirts_emon o ezilitu ,gnirts amu ed ohnamat o rev araP//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}