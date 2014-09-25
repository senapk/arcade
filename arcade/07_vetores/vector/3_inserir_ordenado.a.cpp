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
    cout << "#open inserir_ordenado ";
    {
        vector<int> vet {1, 2, 3};
        vector<int> out {0, 1, 2, 3};
        inserir_ordenado(vet, 0);
        cout << (vet == out);
    }
    {
        vector<int> vet {1, 2, 3, 4, 6, 7, 8};
        vector<int> out {1, 2, 3, 4, 5, 6, 7, 8};
        inserir_ordenado(vet, 5);
        cout << (vet == out);
    }
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.adived oacisop an egehc ele euq éta spaws odnezaf o-etlov e//
//mif on otnemele od kcab_hsup mu eD//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}