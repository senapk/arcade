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
    cout << ("#open reverse PRATA IF FOR VETOR");
    cout << (reverse({1, 2, 3, 4, 5, 6, 7, 8, 9}) == vector<int>({9, 8, 7, 6, 5, 4, 3, 2, 1}));
    cout << (reverse({1, 2, 3, 4, 5}) == vector<int>({5, 4, 3, 2, 1}));
    cout << (reverse({1, 0, 3}) == vector<int>({3, 0, 1}));
    cout << (reverse({0, 3}) == vector<int>({3, 0}));
    cout << (reverse({1, 3}) == vector<int>({3, 1}));
    cout << endl;
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}