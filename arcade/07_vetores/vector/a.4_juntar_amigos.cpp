/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

// Fernando é pessimista, acha que a união nem sempre faz a força.
// Otávio é otimista, acha que a união faz a força.
//
// Fernando desafiou Otávio a fazer um código simples que una inteiros.
// Se Otávio conseguir, Fernando vai virar otimista.
//
// Agora Otávio está desesperado porque ele não sabe programar e quer
// sua ajudar pra resolver o problema.
//
// Crie uma função que concatena elementos de um vetor para formar
// um único número.
// Ex: vet {1, 0, 0} deve dar como saída 100.
// Ex: vet {1, 10, 100} deve dar como saída 110100.
//
// \param vet : Um vetor contendo os elementos
//
// \return    : O número que é resultado da concatenação entre os elementos


long juntar_varios(vector<int> vet)
{
    return 0;
}


//@end

void tests(){
    cout << ("#open juntar_varios OURO IF FOR VECTOR");
    cout << (juntar_varios({1, 0}) == 10);
    cout << (juntar_varios({1, 10, 10}) == 11010);
    cout << (juntar_varios({25, 37, 50, 9}) == 2537509);
    cout << (juntar_varios({12345, 6789, 0}) == 1234567890);
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.011 é }01 ,1{ ratnuj E .401 é }4 ,01{ ratnuj euq evresbO//
//.rotev o odot ranetacnoc arap oçal mu esu e soremún siod ranetacnoc a adnerpA//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}