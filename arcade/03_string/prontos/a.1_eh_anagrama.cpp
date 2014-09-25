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
    cout << "#open eh_anagrama" << endl;
    cout << "#set OURO IF STRING  FOR";
	cout << (eh_anagrama("aaabtt", "batata") == true);
    cout << (eh_anagrama("espinafre", "espinafri") == false);
    cout << (eh_anagrama("pegasus", "peg") == false);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}