/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
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
    cout << "#open mediana OURO IF FOR" << endl;
    cout << (feq(mediana({0, 1, 2}), 1.0));
    cout << (feq(mediana({0, 9, 3.2, 1}), 2.1));
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//
//.aidem a zaf êcov siod merarbos eS//
//.sonem uo 2 merarbos eta//
//roiam o e ronem o odnevomer adador adac a iav uO//
//.oiem od serolav so agep e oãm an rotev o anedro êcov uO//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}