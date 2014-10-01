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
	cout << ("#open duplicar_palavras") << endl;
	cout << ("#set PRATA FOR IF STRING") << endl;
	cout << (duplicar_palavras("OLA PESSOAS DA TERRA\0") == "OLA OLA PESSOAS PESSOAS DA DA TERRA TERRA\0");
	cout << (duplicar_palavras("EU SOU A LENDA\0") == "EU EU SOU SOU A A LENDA LENDA\0");
	cout << (duplicar_palavras("BATATAS VOADORAS DE MARTE\0") == "BATATAS BATATAS VOADORAS VOADORAS DE DE MARTE MARTE");
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)


//nao em espaço.
//e vai concatenando uma palavra a outra, lembre-se de tratar a ultima palavra, pois ela termina em '\0'
//quando vc o encontrar, vc acrescenta essa string, no caso uma palavra a uma nova string,
//você pode criar uma string auxiliar e armazendo nela cada palavra ate encontrar um espaço
//tips


