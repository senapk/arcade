/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
//@begin

//#Jogo da forca simulation#
// Faça um código que simule o comportamento do jogo da forca.
// Voce recebe como parâmetro a palavra real e todos as letras que
// já foram chutadas pelo participante e deve retornar a palavra cifrada
// a ser apresentada pelo programa. Nas letras não acertadas ainda, voce
// deve colocar o caractere hided passado por parametro. Se nas palavras
// ouver pontuação ou espaço, voce deve imprimi-los corretametente. Se
// a letra for maiuscula, voce deve imprimir maiuscula.
// Ex:  palavra        ,   chutes         , hided  -> saida
// Ex: "Abacaxi"       ,  "axnpqe"        , '-'    -> "A-a-ax-"
// Ex: "extraordinario",  "aeioubcdfgh"   , '*'    -> "e***ao*di*a*io"
// Ex: "Teco-Teco!"    ,  "tbxyan"        , '_'    -> "T___-T___!"
// Ex: "Seu Pilantra!" ,  "yzxa"          , '*'    -> "*** ***a***a!"
//@return: retorna uma string.

string forca_montar_palavra(const string palavra, const string chutes, char hided)
{
	return "";
}

//@end

void tests()
{
    cerr << "#open forca_montar_palavra PRATA FOR IF STRING VETOR" << endl;
    cerr << (forca_montar_palavra("Abacaxi"       , "axnpqe"     , '-') == "A-a-ax-");
    cerr << (forca_montar_palavra("extraordinario", "aeioubcdfgh", '*') == "e***ao*di*a*io");
    cerr << (forca_montar_palavra("Teco-Teco!"    , "tbxyan"     , '_') == "T___-T___!");
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}