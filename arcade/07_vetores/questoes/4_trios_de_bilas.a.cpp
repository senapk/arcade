/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <motor.h>
using namespace std;
//@begin

/*
Joaozinho olhou no seu saco de bilas procurando trios de bilas pra jogar.
Tres bilas das mesma cor formam um trio. Quantos trios Joaozinho eh capaz
de formar dado o saco de bilas.
Cada valor inteiro no vetor representa uma cor de bila.
Ex:
[ 1, 2, 3, 1, 1, 1, 1, 2, 2, 2, 3, 1, 1]
Temos 7 1s, que formam apenas dois trios
Temos 4 2s, formando um trio
Temos 2 3s, que não formam nenhum trio
No total temos 4 trios de bilas
Se quiser, voce pode usar as funcoes de algorithm como remove
*/

int contar_trios(vector<int> sacola){
    return 0;
}

//@end

void tests ()
{
    cerr << "#open trio_bilas DIAMANTE ";
    cerr << (contar_trios({1, 1, 1}) == 1);
    cerr << (contar_trios({1, 1}) == 0);
    cerr << (contar_trios({1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3}) == 4);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}