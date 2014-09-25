/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Questão: Faça uma função que recebe 3 valores e retorna os valores do maior menor e do meio.
//return: struct Result.

struct Result{
    int maior;
    int meio;
    int menor;
};

Result maior_menor_meio(int one, int two, int three){
    return Result{0,0,0};
}

//@end

//@tests
bool igual(Result a, Result b){
    if(a.maior == b.maior )
        if(a.menor == b.menor)
            if(a.meio == b.meio)
                return true;
    return false;
}
void tests(){
    cout << "#open maior_menor_meio BRONZE IF STRUCT" << endl;

    {
        Result res{3,2,1};
        cout << (igual(res, maior_menor_meio(2,1,3))) << endl;
    }
    {
        Result res{2,1,0};
        cout << igual(res, maior_menor_meio(0,1,2)) << endl;
    }
    {
        Result res{10,9,2};
        cout << igual(res, maior_menor_meio(10,9,2)) << endl;
    }
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :).
//Essa questão não possui dicas.

