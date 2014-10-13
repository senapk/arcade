/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//@autor: Daniel Filho.

//A bordo da Enterprise Spok recebeu a missão de explorar novos planetas.
//Cada planeta é tem um indentificador(ID) único.
//Como o combustível da nave está pouco, Spok dicidiu explorar
//apenas planetas que possuem ID palindrome.
//Então ele pediu pra você fazer uma função que recebe um inteiro referente ao ID
//de um planeta e retorne true se o ID é palindrome e false caso contrário.
//
//Obs.: Um número é palindrome quando o seu inverso é igual a ele.
//Ex.: 121 é palindrome pois seu inverso é 121.
//
//@return: bool
bool id_palindrome(int id){
    return false;
}

//@end

//@tests
void tests(){
    cerr << "#open id_palindrome BRONZE IF FOR" << endl;
    cerr << (id_palindrome(121) == true);
    cerr << (id_palindrome(122) == false);
    cerr << (id_palindrome(1) == true);
    cerr << (id_palindrome(11) == true);
    cerr << (id_palindrome(1235321) == true);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Para saber mais sobre números palindromos acesse:
//http://matematicaenigmatica.blogspot.com.br/2009/11/numeros-palindromos-ou-capicua.html
