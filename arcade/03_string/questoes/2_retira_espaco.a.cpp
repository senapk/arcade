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
    cerr << ("#open retira_espaco") << endl;
    cerr << ("#set PRATA STRING IF FOR") << endl;
    string a1 = "HELLO       WORLD\0";
    cerr << (retira_espaco(a1) == "HELLO WORLD\0");
    string a2 = "LABORATORIO     DE      PROGRAMACAO      I\0";
    cerr << (retira_espaco(a2) == "LABORATORIO DE PROGRAMACAO I\0");
    string a3 = "BOLA     DE      FUTEBOL\0";
    cerr << (retira_espaco(a3) == "BOLA DE FUTEBOL\0");
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Para ver o tamanho de uma string, utilize o nome_string.length();
//Você pode verificar cada elemento da string usando nome_string[posicao_elemento]
//como a questão so quer que você retire os espaços, então você pode copiar se não for espaço
//e caso seja espaço, so pode haver um.


