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

// Dada a velocidade máxima permitida em uma avenida e a velocidade com que o motorista
// estava dirigindo nela e calcule a multa que uma pessoa vai receber, sabendo que:

// Até 10 % acima ele não paga nada.
// Entre 10 e 20 % ele paga 100;
// Entre 20 e 30 % ele paga 200;
// Acima de 30 % ele paga 300;

//@return: int referente a multa.


int calcular_multa(float vel_max, float vel_carro){
    return 0;
}

//@end

//@tests
void tests(){
    cout << "#open calcular_multa BRONZE IF" << endl;
    cout << (calcular_multa(100,120) == 200) << endl;
    cout << (calcular_multa(100,110) == 0) << endl;
    cout << (calcular_multa(100,111) == 100) << endl;
    cout << (calcular_multa(150,90) == 0) << endl;
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//
//-- :saciD//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}