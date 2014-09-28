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
/*
Amora está apaixonada e quer descobrir quantas vezes em sua cartinha de amor
aparecem palavras amorosas.

Escreva uma função em que recebe como parâmetro uma substring e uma string e
retorna como resultado o número de ocorrências da substring na string.
*/

int n_substring(string menor, string maior)
{
    return 0;
}

//@end

void tests(){
    cerr << "#open n_substring PRATA ";
    string in = "amo o amor que me amou, oh amora amortecida";
    cerr << (n_substring("amor", in) == 3);
    cerr << (n_substring("amo", in) == 5);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}