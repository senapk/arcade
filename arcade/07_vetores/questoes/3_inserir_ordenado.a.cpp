/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

//Sua estante tem todos os livros organizados em ordem alfabetica.
//Para inserir um livro é necessário achar a posicao exata do livro
//e deslocar todos os livros após essa posição para que o novo livro
//possa entrar em seu lugar.
//
//Faça um código que recebe um vetor de inteiros que já está ordenado,
//procure a posição exata do novo elemento e o adicione empurrando
//os elementos uma posição adiante.
//
//Não use a função insert do vector. Faça manualmente
//Altere o vetor recebido, não precisa retornar nenhum parametro


void inserir_ordenado(vector<int>& vet, int elem){
    return;
}

//@end

void tests(){
    cerr << "#open inserir_ordenado ";
    {
        vector<int> vet {1, 2, 3};
        vector<int> out {0, 1, 2, 3};
        inserir_ordenado(vet, 0);
        cerr << (vet == out);
    }
    {
        vector<int> vet {1, 2, 3, 4, 6, 7, 8};
        vector<int> out {1, 2, 3, 4, 5, 6, 7, 8};
        inserir_ordenado(vet, 5);
        cerr << (vet == out);
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)

//e volte-o fazendo swaps até que ele chege na posicao devida.
//De um push_back do elemento no fim

