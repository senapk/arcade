/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <iostream>
#include <vector>
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
    cout << "#open trio_bilas DIAMANTE ";
    cout << (contar_trios({1, 1, 1}) == 1);
    cout << (contar_trios({1, 1}) == 0);
    cout << (contar_trios({1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3}) == 4);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}