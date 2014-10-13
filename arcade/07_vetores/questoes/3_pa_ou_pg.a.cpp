/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

//@autor Bruno Barreto;
#include <iostream>
#include <vector>
#include <motor.h>
using namespace std;
//@begin

/*Q Próximo termo Q*/
/*T
  Atanagildetina é uma estudante de programação. Seu professor deu-lhe uma
  sequência de números inteiros e pediu uma função que retornasse o próximo elemento
  desta seqência. Mas o professor troll "esqueceu" de dizer a ela qual a razão entre os
  termos e se a sequência é uma progressão aritimética ou geométrica.
  Por exemplo, a sequência {1, 3, 5, 7}, é uma progressão ARITIMÉTICA de razão
  2, já a sequência {1, 2, 4, 8} é uma progresão GEOMÉTRICA de razão 2.
  Ajude Atanagildetina a fazer esta função que recebe uma sequência de inteiros
  e deduz a razão e a operação a ser feita e retorna o próximo termo. Considere
  que o vetor terá pelomenos 3 termos.
Dica: teste a diferença entre o primeiro termo e o segundo e veja se é
a mesa entre o segundo e o terceiro. Caso seja, esta será a razão
de uma sequência aritimética. Se não, teste o quociente entre os termos
visinhos.
T*/

int proximo_termo(vector<int> v) {
    return 0;
}

//@end

//@tests
void tests(){

    cerr << "#open 3_pa_ou_pg PRATA VECTOR IF" << endl;

    vector<int> v1 ({1,1,1});
    vector<int> v2 ({1,2,3});
    vector<int> v3 ({3,2,1});
    vector<int> v4 ({1,2,4});


    cerr << (proximo_termo(v1) == 1);
    cerr << (proximo_termo(v2) == 4);
    cerr << (proximo_termo(v3) == 0);
    cerr << (proximo_termo(v4) == 8);

}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}