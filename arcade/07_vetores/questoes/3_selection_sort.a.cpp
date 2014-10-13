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

/*Q Ordenação Q*/

/*T
  Mesmo com a sua função de inserir ordenado, alguns professores não
  utilizaram essa função e foram adicionando mais notas sem se preocupar
  com a ordem. Pensando nisso, implemente uma função que reordena o vetor
  de notas passado como parametro e retorne o vetor ordenado.

  Uma opção de algoritmo de ordenação e o selection sort, onde percore-se
  o vetor e encontra-se o menor elemento, que é colocado na primeira posição
  do vetor. Uma nova busca é realizada nos elementos restantes em busca do menor
  entre eles, quando encontrado é colocado na segunda posição do vetor. Seguindo
  esse algoritmo até o final do vetor, é garantida a ordenação.
  T*/

vector<int> ordenar(vector<int> v) {
    return vector<int>();
}

//@end

//@tests
void tests(){

    cerr << "#open selection_sort PRATA IF FOR" << endl;


    vector<int> v1 ({1});
    vector<int> v2 ({2,1});
    vector<int> v3 ({5,4,3,2,1});
    vector<int> v4 ({1,9,2,8,3,7,5, 6, 4});

    vector<int> teste1 ({1});
    vector<int> teste2 ({1,2});
    vector<int> teste3 ({1,2,3,4,5});
    vector<int> teste4 ({1,2,3,4,5,6,7,8,9});

    cerr << (teste1 == ordenar(v1));
    cerr << (teste2 == ordenar(v2));
    cerr << (teste3 == ordenar(v3));
    cerr << (teste4 == ordenar(v4));
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}