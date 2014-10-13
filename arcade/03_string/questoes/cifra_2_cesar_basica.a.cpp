/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

/*

   Essa é a primeira tarefa de criptografia. Nosso objetivo é fazer
   uma cifra clássica conhecida como cifra de César.
   Mais informações em:
   http://comp.ist.utl.pt/ec-csc/Acetatos/1-Cifra/12-CifraClassica.pdf
*/

/*
   Dado a palavra de entrada apenas com caracteres minúsculos
   cifre utilizando a cifra de Cesar.
   Retorne o texto cifrado.

   A cifra de Cesar faz uma rotação simples de 3 posições.
   No caso, o z vira c, a vira d, etc.

   o texto possui apenas espacos e caracteres minusculos

   ex:
   "aba pai" -> "ded sdl"
 */

string cifra_cesar(string texto){
    return "";
}

/*
 * Faça o código que decifra a cifra feita acima.
 */
string decifra_cesar(string texto){
    return "";
}

//@end

//@tests

void test_cifra_cesar()
{
    cerr << ("#open cifra_cesar");
    cerr << (cifra_cesar("aba pai") == "ded sdl");
    cerr << (cifra_cesar("cem quilos de queijo") == "fhp txlorv gh txhlmr") ;
    cerr << (cifra_cesar("pterodactilo voador") == "swhurgdfwlor yrdgru") ;
}

void test_decifra_cesar()
{
    cerr << ("#open decifra_cesar");
    cerr << ("aba pai" == decifra_cesar("ded sdl"));
    cerr << ("cem quilos de queijo" == decifra_cesar("fhp txlorv gh txhlmr")) ;
    cerr << ("pterodactilo voador" == decifra_cesar("swhurgdfwlor yrdgru")) ;
}

void tests(){
    test_cifra_cesar();
    test_decifra_cesar();
    cerr << endl;
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

//Sugiro que você faça uma função que cifra e decifra um char.
//Teste se ela funciona bem.
//Faça algo como
//char cifrar_char(char c);
//
//Aproveite e faça uma função que decifra um char
//Use isso no código que cifra o texto.
//Se não for espaço, cifre o char.

