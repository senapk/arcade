/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
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
    cout << "#open colisaoString" << endl;
    cout <<(colisaoString("olho", "mel") == "olhomel");
    cout <<(colisaoString("minhoca", "arvore") == "minhocrvore");
    cout <<(colisaoString("mel", "lemax") == "ax");
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}