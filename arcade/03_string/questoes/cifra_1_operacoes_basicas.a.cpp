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

//Essas questões são prerequisito para as listas de criptografia

//Objetivo: Somar um numero a um char minusculo de forma modular
//c+1 = d, f+3 = i,  z + 1 = a
//Use o operador de módulo
char soma_min( char letra, int num){
    return 0;
}

//Objetivo: Subtrair um numero a um char minusculo de forma modular
//c-1 = b, f-3 = c,  a - 1 = z
//Use o operador de módulo
char sub_min( char letra, int num){
    return 0;
}

//Objetivo: Somar dois char minusculos de forma modular
//e retornar o char resultante
//ex : a vale 0, b vale 1 ...
//a + a = a, b + c = d,
char soma_2char(char letra, char codigo){
    return 0;
}

//Objetivo: subtrai dois char de forma modular
//e retornar o char resultante
char sub_2char(char letra, char codigo){
    return 0;
}

//@end

//@tests
void test_soma_min()
{
    cerr << endl;
    cerr << ("#open soma_min ");
    cerr << ( soma_min('a', 0) == 'a');
    cerr << ( soma_min('a', 1 ) == 'b');
    cerr << ( soma_min('d', 1) == 'e');
}

void test_sub_min()
{
    cerr << endl;
    cerr << ("#open sub_min ");
    cerr << ( sub_min('a', 0) == 'a');
    cerr << ( sub_min('a', 1) == 'z');
    cerr << ( sub_min('d', 1) == 'c');
    cerr << ( sub_min('b', 3) == 'y');
}

void test_soma_2char()
{
    cerr << endl;
    cerr << ("#open soma_2char ");
    cerr << ( soma_2char('a', 'a') == 'a');
    cerr << ( soma_2char('a', 'b') == 'b');
    cerr << ( soma_2char('d', 'b') == 'e');
    cerr << ( soma_2char('z', 'c') == 'b');
}

void test_sub_2char()
{
    cerr << endl;
    cerr << ("#open sub_2char ");
    cerr << ( sub_2char('a', 'a') == 'a');
    cerr << ( sub_2char('a', 'b') == 'z');
    cerr << ( sub_2char('d', 'b') == 'c');
    cerr << ( sub_2char('b', 'd') == 'y');
}

void tests(){
    test_soma_min();
    test_sub_min();
    test_soma_2char();
    test_sub_2char();
    cerr << endl;
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}