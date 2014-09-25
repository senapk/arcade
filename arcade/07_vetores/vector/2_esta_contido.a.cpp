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

//#Está Contido#
//Descubra se o vetor v1 está contido em v2 e retorne true se isso ocorrer.


bool esta_contido(vector<int> maior, vector<int> menor){
    return false;
}

//@end

void tests() {
    cout << "#open esta_contido BRONZE IF FOR" << endl;
    cout << (esta_contido({1, 2, 3, 4, 5}, {1, 3, 5}) == true);
    cout << (esta_contido({1, 2, 3, 4, 5}, {1, 3, 6}) == false);
    cout << (esta_contido({1, 2, 3, 4, 5}, {1, 3, 5, 4, 2, 0}) == false);
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.2v me oditnoc//
//ratse edop ós 1v ,2v me meritsixe 1v ed sotnemele so sodot es :aciD//
//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}