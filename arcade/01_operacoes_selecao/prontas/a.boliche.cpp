/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
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
    cout << "#open area_triangulo" << endl;
    cout << "oi galera" << endl;
    cout << (diametro_caixa(3,3,2,5) == false);
    cout << (diametro_caixa(5,5,5,5) == true);
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//
//!sadidem siamed sa moc al-arapmoc etnet ,axiac ad ortemâid o met áj êcov euq etoN//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}