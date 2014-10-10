/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

//@autor Bruno Barreto;

#include <motor.h>
#include <iostream>
#include <vector>
using namespace std;
//@begin

/*Busca binária
Até agora você fez as implementações sem se preocupar com a rapidez e aficiência
de suas funções, pontos escenciais de um bom programa. Na sua função "existe()", por exemplo,
você teve que percorrer todo o vetor em busca do elemento procurado. em um vetor muito grande
isso pode levar muito tempo. Uma alternativa é a busca binária, que reduz bastante o tempo de busca
de um elemento em um vetor.
Para entender esse algorítmo de busca, imagine um livro de 1024
páginas, onde você busca a página 100. Você abriu o livro exatamente no meio dividindo-o em dois
e encontrou a página 512. Você irá se preocupar agora, apenas com a primeira metade do livro,
já que 100 é menor que 512. Com essa metade do livro em mãos, você a dividiu novamente
em duas partes e encontrou a página 256. Continuando com este algorítmo
dividindo as páginas em duas metades e escolhendo sempre
a metade correta, você logo encontrará a página 100. Isso só é possivel,
é claro, porque as páginas estão em ordem.
Implemente uma função que faça a busca de um elemento utilizando o
algorítmo citado acima e retorne true se o elemento existir.
 */

bool existe_busca_bin(vector<int> v, int elem) {
    return false;
}

//@end

//@tests
void tests() {
    cerr << "#open existe_busca_bin PRATA IF FOR" << endl;
    vector<int> v1 ({1});
    vector<int> v2 ({1,2,3});
    vector<int> v3 ({1,2,3,4,5,6,7,8,9});
    vector<int> v4 (1024);

    for(int i = 0; i <= 1023; i++)
        v4.at(i) = i+1;

    cerr << (existe_busca_bin(v1, 1) == true);
    cerr << (existe_busca_bin(v1, 2) == false);
    cerr << (existe_busca_bin(v1, 0) == false);
    cerr << (existe_busca_bin(v2, 3) == true);
    cerr << (existe_busca_bin(v3, 1) == true);
    cerr << (existe_busca_bin(v4, 1) == true);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}