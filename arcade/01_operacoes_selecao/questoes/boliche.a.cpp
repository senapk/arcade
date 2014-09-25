/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <cmath>
#include <iostream>
using namespace std;
//@begin

//Bolas de Boliche
//
//Bolas de futebol são muito fáceis de transportar, já que elas saem das fábricas vazias e
//só são enchidas somente pelas lojas ou pelos consumidores finais. Infelizmente o mesmo
//não pode ser dito das bolas de boliche. Como elas são completamente sólidas, elas só podem
//ser transportadas embaladas uma a uma, em caixas separadas. Escreva um programa que, dado
//o diâmetro de uma bola e as 3 dimensões de uma caixa (altura, largura e profundidade), diz
//se a bola de boliche cabe dentro da caixa ou não.
//
//Você deve retornar true caso a bola de boliche caiba dentro da caixa, se não couber retorne false.
//@return: A funcao deve retornar um boolean.
bool diametro_caixa(int diametro, int altura, int largura, int profundidade){
	return false;
}

//@end

void tests(){
    cout << "#open boliche" << endl;
    cout << (diametro_caixa(3,3,2,5) == false);
    cout << (diametro_caixa(5,5,5,5) == true);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)

//Note que você já tem o diâmetro da caixa, tente compara-la com as demais medidas!

