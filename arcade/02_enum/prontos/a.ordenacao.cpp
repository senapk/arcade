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

//Faça um código que receba 3 valores e retorne se eles possuem alguma
//ordenação.
//@return: Retorna uma enum.

enum Ordenacao {Crescente, Decrescente, SemOrdem};

Ordenacao ver_ordem(int A, int B, int C){
    return Crescente;
}

//@end

void tests(){
    cout << "#open ver_ordem BRONZE IF ENUM" << endl;
    cout << (ver_ordem(1, 3, 5) == Crescente);
    cout << (ver_ordem(1, 3, 2) == SemOrdem);
    cout << (ver_ordem(4, 3, 2) == Decrescente);
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.sacid iussop oãn oãtseuq assE//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}