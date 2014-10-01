/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

//@autor David Sena

//Essas questões de conversão de caracteres vão prepará-lo
//para códigos mais interessantes como criptografia.

//Dado o caracter c, que corresponde a um hexadecimal, retorne o
//valor em inteiro.
//ex: '1' vale 1, '9' vale 9, 'a' vale 10, 'b' 11, 'f' vale 15
int char2hex(char c) {
    return 0;
}

//Retornar o valor do char usando logica do baralho, se nao
//existir no baralho deve retornar 0
//ex: '1' vale 1, '9' vale 9, 'j' vale 11, 'q' 12, 'k' vale 13
int char2baralho(char c) {
    return 0;
}

//@end

//@tests
void test_char2hex(){
    cerr << ("#open char2hex" );
    cerr << ( char2hex('a') == 10 );
    cerr << ( char2hex('f') == 15 );
    cerr << ( char2hex('4') == 4 );
    cerr << ( char2hex('0') == 0 );
}

void test_char2baralho(){
    cerr << ("#open char2baralho");
    cerr << ( char2baralho('k') == 13 );
    cerr << ( char2baralho('j') == 11 );
    cerr << ( char2baralho('4') == 4 );
    cerr << ( char2baralho('g') == 0 );
}

void tests(){
    test_char2hex();
    test_char2baralho();
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}