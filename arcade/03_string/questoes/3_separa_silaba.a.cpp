/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>

using namespace std;
//@begin

//Faça um programa que receba palavras e separe suas silabas levando em
//consideração o seguinte critério: se após uma vogal existir uma
//não-vogal, deve-se separar a sílaba
//@return: retorna uma string.


string separa_silaba(string a){
    return "abc";
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};

void tests() {
    cerr << ("#open separa_silaba") << endl;
    cerr << ("#set PRATA STRING FOR IF") << endl;
    cerr << (separa_silaba("Paralelepipedo") == "Pa-ra-le-le-pi-pe-do");
    cerr << (separa_silaba("Paraguai") == "Pa-ra-guai");
    cerr << (separa_silaba("Havaiana de Palmeira") == "Ha-vaia-na de Pa-lmei-ra");
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)


//tips


