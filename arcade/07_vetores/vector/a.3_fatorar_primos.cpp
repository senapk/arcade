/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <motor.h>
using namespace std;
//@begin

// Meriosvaldo quer quebrar a senha do computador do seu irmão. Descobriu que o
// arquivo de senhas foi cifrado com um algoritmo muito famoso chamada RSA.
//
// Lá na wikipedia ele leu que pra quebrar a senha ele precisa ser capaz de fatorar
// numeros. Como Mariosvaldo não estudou pra ir pra faculdade, quer que você,
// estudante de programação resolva isso pra ele.
//
// Faça uma função que recebe um número num maior que 1 e retorna um vetor
// ordenado com os números que compõe a fatoração de num exceto o 1.
// Se um fator se repetir na fatoração, repita-o no vetor.
// Ex: num = 2 -> res {2}
// Ex: num = 6 -> res {2, 3}
// Ex: num = 12 -> res {2, 2, 3}
// Ex: num = 11 -> res {11}
// Ex: num = 60 -> res {2, 2, 3, 5}
// \param num : o número a ser fatorado
//
// \return    : o vetor com o resultado da fatoração

vector<int> fatorar_primos(int num){
    return vector<int>();
}

//@end

void tests(){
    cout << ("#open fatorar_primos ");
    cout << (fatorar_primos(2) == vector<int>({2}));
    cout << (fatorar_primos(8) == vector<int>({2, 2, 2}));
    cout << (fatorar_primos(60) == vector<int>({2, 2, 3, 5}));
    cout << (fatorar_primos(420) == vector<int>({2, 2, 3, 5, 7}));
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}