/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

//@autor Bruno Barreto;
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <motor.h>
using namespace std;
//@begin

// Quando uma palavra começa com a mesma vogal que a palavra
// de trás terminou é comum emendarmos a leitura.
//
// Exemplo: A amiga da andreia odeia alfaces.
//
// Quando lemos essa frase sai algo como:
//          A miga da ndreia odeia lfaces.
//
// Em frances isso se chama liaison :D
// Exemplo : Ela ama a amora.
// Saida   : Ela ma mora
//
// Voce deve escrever um codigo que quando a palavra da
// frente começa com a letra que teminou a ultima palavra
// essa letra deve ser omitida.
//
// A entrada sempre sera em letra minuscula e sem pontuacao
//
string upper(string input){
    return "";
}


string remover_caractere(string frase, int indice){
    return "";
}

string emendar(string input){
   return "";
}

//@end

//@tests
void tests(){
    cerr << "#open emendar OURO FOR IF STRING ";
    string in = "a amiga da andreia odeia alfaces";
    string out = "a miga da ndreia odeia lfaces";
    cerr << (emendar(in) == out) << endl;


    in = "ela ama a amora";
    out = "ela ma mora";
    cerr << (emendar(in) == out);


    in = "o gago disse a a a amo voce";
    out = "o gago disse a mo voce";
    cerr << (emendar(in) == out);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}