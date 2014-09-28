/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

/*
    Numa biblioteca, quando tiramos um livro do meio da prateleira todos os livros caem.
    Para deixar organizado é importante reorganizar os livros puxando pra onde ficou
    o buraco.

    Nesse código você receberá um vetor de inteiros e terá que se livrar do elemento
    que for pedido.

    Faça isso levando o elemento pro fim do vetor fazendo swaps com todos que estiverem
    após ele e por fim de um pop_back para se livrar do vetor.

    O vector tem uma função erase pra fazer isso, mas não a utilize

    Se o elemento não existir no vetor retorne false.
*/
bool remover_puxando(vector<int>& vet, int elem) {
    return false;
}

//@end

//@tests
void tests(){
    cerr <<("#open remover_puxando");

    {
        vector<int> vet {1, 2, 3};
        vector<int> out {1, 3};
        remover_puxando(vet, 2);
        cerr << (vet == out);
    }
    {
        vector<int> vet {1, 2, 3, 4, 5, 6, 7, 8};
        vector<int> out {1, 2, 3, 4, 6, 7, 8};
        remover_puxando(vet, 5);
        cerr << (vet == out);
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}