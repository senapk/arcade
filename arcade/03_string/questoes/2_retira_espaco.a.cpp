/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
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

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)


//e caso seja espaço, so pode haver um.
//como a questão so quer que você retire os espaços, então você pode copiar se não for espaço
//Você pode verificar cada elemento da string usando nome_string[posicao_elemento]
//Para ver o tamanho de uma string, utilize o nome_string.length();

