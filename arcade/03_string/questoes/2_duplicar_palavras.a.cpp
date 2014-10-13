/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
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
    cerr << ("#open duplicar_palavras") << endl;
    cerr << ("#set PRATA FOR IF STRING") << endl;
    cerr << (duplicar_palavras("OLA PESSOAS DA TERRA\0") == "OLA OLA PESSOAS PESSOAS DA DA TERRA TERRA\0");
    cerr << (duplicar_palavras("EU SOU A LENDA\0") == "EU EU SOU SOU A A LENDA LENDA\0");
    cerr << (duplicar_palavras("BATATAS VOADORAS DE MARTE\0") == "BATATAS BATATAS VOADORAS VOADORAS DE DE MARTE MARTE");
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

//tips
//você pode criar uma string auxiliar e armazendo nela cada palavra ate encontrar um espaço
//quando vc o encontrar, vc acrescenta essa string, no caso uma palavra a uma nova string,
//e vai concatenando uma palavra a outra, lembre-se de tratar a ultima palavra, pois ela termina em '\0'
//nao em espaço.


