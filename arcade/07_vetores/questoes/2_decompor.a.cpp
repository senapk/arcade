/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <algorithm>
#include <motor.h>
using namespace std;
//@begin

// Marquinhos está para ficar louco. Hermeneutico desafiou ele a fazer um código
// que quebra inteiros em um vetor. Mas essa tarefa aparentemente simples está
// acabando com os miolos de Marquinhos. Por favor, ajudar Marquinhos a recuperar
// sua paz de espirito fazendo esse código pra ele.
// Ex: 1235 -> {1, 2, 3, 5};
vector<int> decompor_int(int num){
    return vector<int>();
}

//@end

void tests(){
    cout << ("#open decompor_int OURO IF FOR VETOR ");
    cout << (decompor_int(0) == vector<int>({0}));
    cout << (decompor_int(4) == vector<int>({4}));
    cout << (decompor_int(41234) == vector<int>({4, 1, 2, 3, 4}));
    cout << (decompor_int(41934) == vector<int>({4, 1, 9, 3, 4}));
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}