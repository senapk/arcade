/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Faça um programa que calcula o IMC (índice da massa corpórea) de uma
//pessoa e use esse IMC para informar o nível de obesidade.
//
//O IMC é calculado com o peso em kg, dividido pelo quadrado da altura,
//em metros, IMC = Peso/Altura².
//De acordo com o IMC calculado, o nível de obesidade é obtido de acordo com
//a tabela abaixo:
//
//Abaixo de 17        Muito abaixo do peso
//Entre 17 e 18,49    Abaixo do peso
//Entre 18,5 e 24,99  Peso normal
//Entre 25 e 29,99    Acima do peso
//Entre 30 e 34,99    Obesidade I
//Entre 35 e 39,99    Obesidade II (severa)
//Acima de 40         Obesidade III (mórbida)
//@return: retorna uma enum.

enum NivelObesidade {MuitoAbaixo, Abaixo, Normal, Acima, Obeso, Severo, Morbido};


NivelObesidade verificarPeso(float peso, float altura){
    return MuitoAbaixo;
}

//@end

//@tests
void tests(){
    cout << "#open verificarPeso BRONZE IF ENUM" << endl;
    cout << (verificarPeso(70.0, 1.80) == Normal);
    cout << (verificarPeso(85.0, 1.80) == Acima);
    cout << (verificarPeso(100.0, 1.80) == Obeso);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}