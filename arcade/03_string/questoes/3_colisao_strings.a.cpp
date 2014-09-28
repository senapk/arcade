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

//#Colisao de Strings#
// Faça uma função que anule o final de uma string com o começo de outra como se fosse
// uma colisão. Como se você juntasse as duas palavras, mas excluisse as letras até
// que não sejam iguais as letras de contato
// Ex: olho, mel -> olhomel
// Ex: minhoca, arvore -> minhocrvore
// Ex: pegasus, suspiro -> pegapiro
// ex: mel, lema -> a
//
// \param one : a palavra da esquerda
// \param two: a palavra da direita
// \return     : a palavra colidida
//@return: retorna uma string.

string colisaoString(string one, string two)
{
	return "";
}

//@end

void tests()
{
    cerr << "#open colisaoString" << endl;
    cerr <<(colisaoString("olho", "mel") == "olhomel");
    cerr <<(colisaoString("minhoca", "arvore") == "minhocrvore");
    cerr <<(colisaoString("mel", "lemax") == "ax");
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}