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

//#Anagrama#
//Faça uma função que receba duas strings e retorne true se uma for anagrama
//da outra, ou retorne false se não for anagrama.
//Lembre-se, uma palavra é anagrama de outra se é formada pelas mesmas letras
//nas mesmas quantidades, mas em qualquer ordem. A entrada será composta
//apenas de caracteres minusculos.
//
//EXEMPLO: alma aaml | true
//amor roam | true
//rio  ori | true
//bola dama | false
//@return: retorna um bool.


bool eh_anagrama(string A, string B)
{
	return false;
}

//@end

void tests()
{
    cerr << "#open eh_anagrama" << endl;
    cerr << "#set OURO IF STRING  FOR";
	cerr << (eh_anagrama("aaabtt", "batata") == true);
    cerr << (eh_anagrama("espinafre", "espinafri") == false);
    cerr << (eh_anagrama("pegasus", "peg") == false);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}