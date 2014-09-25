/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <vector>
using namespace std;
//@begin

//38E, 41D, 39E, 39D, 40E, 41D, 42E, 41D, 38D

//O dono de uma sapataria contratou você para resolver um grande
//problema. Ele lhe mostrou um deposito de vários sapados do mesmo
//modelo mais descasados os pés esquerdo e direito e os tamanhos.
//Ele quer que você crie um programa que o diga quantos pares
//corretos de sapatos ele tem no estoque.

struct Sapato{
    int numero;
    char pe;
};
int procurar_pares(vector<Sapato> sapatos){
    return 0;
}

//@end

void tests ()
{
    cout << "#open pares_sapatos OURO IF FOR VECTOR STRUCT ";
    vector<Sapato> loja = {{38,'D'}, {39, 'E'}, {40, 'D'}, {39, 'E'}, {40, 'E'},
                           {38,'E'}, {39, 'D'}, {40, 'D'}, {39, 'E'}, {40, 'E'}};
    //saida esperada
    //38d 38e 39e 39d 40d 40e 40d 40e
    //4 pares
    cout << (procurar_pares(loja) == 4);

    vector<Sapato> loja2 = {{38,'D'}, {39, 'E'}, {38, 'E'}};
    //saida esperada
    //38d 38e
    //1 pares
    cout << (procurar_pares(loja2) == 1);

}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}