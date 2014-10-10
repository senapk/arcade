/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
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
    cerr << ("#open juntar_varios OURO IF FOR VECTOR");
    cerr << (juntar_varios({1, 0}) == 10);
    cerr << (juntar_varios({1, 10, 10}) == 11010);
    cerr << (juntar_varios({25, 37, 50, 9}) == 2537509);
    cerr << (juntar_varios({12345, 6789, 0}) == 1234567890);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)

//Observe que juntar {10, 4} é 104. E juntar {1, 10} é 110.
//Aprenda a concatenar dois números e use um laço para concatenar todo o vetor.

