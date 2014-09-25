/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
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
    cout << "#open sub_string BRONZE IF FOR STRING" << endl;
    cout << (sub_string("Pterodactilo", 2, 5)  == "erod");
    cout << (sub_string("Power Ranger", 4, 11) == "r Ranger");
    cout << (sub_string("Jaspion", 2, 6) == "spion");
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//
//amuhneN :saciD//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}