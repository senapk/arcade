/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <string>
#include <iostream>
using namespace std;
//@begin

//Questão:
// Faça uma função que retorna uma substring dada a string passada
// e a posição inicial e final.
//
// Ex: "Pterodactilo", 2, 5 -> "erod"
// Ex: "Power Ranger", 4, 11 -> "r Ranger"
//

//@return: Substring.

string sub_string(string palavra, int inicio, int fim){
    return "";
}

//@end

//@tests
void tests(){
    cerr << "#open sub_string BRONZE IF FOR STRING" << endl;
    cerr << (sub_string("Pterodactilo", 2, 5)  == "erod");
    cerr << (sub_string("Power Ranger", 4, 11) == "r Ranger");
    cerr << (sub_string("Jaspion", 2, 6) == "spion");
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)


//Dicas: Nenhuma

