/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//O cálculo da mediana consiste em descobrir qual o valor intermediário
//do vetor. No vetor v = {1, 2, 3}, por exemplo, a mediana é 2, pois este
//é o elemento de valor intermediário. Se houver mais de um valor
//intermediário, a mediana será a média aritimética entre eles.
//
//Você pode usar a função erase do vetor.
//Depois que conseguir, tente usando a função sort da std


float mediana(vector<float> vet){
    return 0.0;
}

//@end

void tests() {
    auto feq = [](float a, float b){return (max(a,b)-min(a,b)<0.1);};
    cerr << "#open mediana OURO IF FOR" << endl;
    cerr << (feq(mediana({0, 1, 2}), 1.0));
    cerr << (feq(mediana({0, 9, 3.2, 1}), 2.1));
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)


//Se sobrarem dois você faz a media.
//ate sobrarem 2 ou menos.
//Ou vai a cada rodada removendo o menor e o maior
//Ou você ordena o vetor na mão e pega os valores do meio.

