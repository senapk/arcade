/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

// Faça uma função que inverta um vetor passado por parametro. Voce receberá um vetor
// e deve retornar uma novo vetor invertido.
// \param vet : o vetor recebido
// \return um novo vetor invertido
//
// Nao use o std::reverse, faça primeiramente na forma manual
//
vector<int> reverse(const vector<int> vet)
{
    return vector<int>();
}

//@end

void tests(){
    cerr << ("#open reverse PRATA IF FOR VETOR ");
    cerr << (reverse({1, 2, 3, 4, 5, 6, 7, 8, 9}) == vector<int>({9, 8, 7, 6, 5, 4, 3, 2, 1}));
    cerr << (reverse({1, 0, 3}) == vector<int>({3, 0, 1}));
    cerr << (reverse({0, 3}) == vector<int>({3, 0}));
    cerr << (reverse({1, 3}) == vector<int>({3, 1}));
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}