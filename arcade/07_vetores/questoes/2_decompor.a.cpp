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
// acabando com os miolos de Marquinhos. Por favor, ajude Marquinhos a recuperar
// sua paz de espírito fazendo esse código pra ele.
// Ex: 1235 -> {1, 2, 3, 5};
vector<int> decompor_int(int num){
    return vector<int>();
}

//@end

void tests(){
    cerr << ("#open decompor_int OURO IF FOR VETOR ");
    cerr << (decompor_int(0) == vector<int>({0}));
    cerr << (decompor_int(4) == vector<int>({4}));
    cerr << (decompor_int(41234) == vector<int>({4, 1, 2, 3, 4}));
    cerr << (decompor_int(41934) == vector<int>({4, 1, 9, 3, 4}));
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Forma 1 : Usando as operações de módulo por 10 e divisão por 10, vá retirando os números
//e fazendo push_back pra dentro do vetor.
//Depois faça uma função de inverter para destrocar a ordem dos elementos.

//Forma 2 : Faça a forma 1 primeiro. Quando conseguir, use o método to_string() do c++11
//para transformar o número em string e depois faça um for normal dando os push_back para
//o vetor.

//Para inverter o vetor você pode dar o include <algorithm> e usar o método 
//std::reverse(begin(vet), end(vet));
