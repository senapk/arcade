/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin
//@autor Daniel
//Jarisvaldo gosta de brincar com feijões, um dia ele resolveu espalhar
//caroços de feijões por um tabuleiro.
//Ele pediu sua ajuda para saber qual posição no tabuleiro que tem a menor
//quantidade de caroços de feijão.
//Faça uma função que percorre o tabuleiro (matriz) e retorna a menor quantidade
//de caroços e sua posicao no tabuleiro (x e y).

//@return: struct Result

struct Result{
    int x;
    int y;
    int value;
};

template <class T>
using matriz = vector<vector<int>>;

Result encontrar_menor_valor(matriz<int> mat){
    return Result{0,0,0};
}


//@end

//@tests
void tests(){
    cerr << "#open encontrar_menor_valor BRONZE MATRIZ FOR STRUCT" << endl;
    {
        matriz<int> mat = {{4,2},{1,4}};
        Result r = encontrar_menor_valor(mat);
        cerr << (r.value == 1 && r.x == 0 && r.y == 1);
    }
    {
        matriz<int> mat = {{4,2,1},{1,4,0},{11,2,5}};
        Result r = encontrar_menor_valor(mat);
        cerr << (r.value == 0 && r.x == 2 && r.y == 1);
    }
    {
        matriz<int> mat = {{4,2,1},{-1,4,0},{1,2,0}};
        Result r = encontrar_menor_valor(mat);
        cerr << (r.value == -1 && r.x == 0 && r.y == 1);
    }
    {
        matriz<int> mat = {{4,2,1},{-100,4,2}};
        Result r = encontrar_menor_valor(mat);
        cerr << (r.value == -100 && r.x == 0 && r.y == 1);
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}