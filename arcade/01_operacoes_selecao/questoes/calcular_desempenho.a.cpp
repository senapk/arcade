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

//Fernando lhe deu a velocidade média do carro dele em km/h,
//o tempo da viagem em minutos e o consumo de um carro em litros
//e pediu que você faça um programa que calcule o desempenho do
//motor em km por litro.
float calcular_desempenho(float vel, float tempo, float consumo){
    return 0.0;
}

//@end

void tests() {
    auto feq = [](float A, float B)->bool{
        return ((max(A,B)-min(A,B)) < 0.01);
    };
    cout << ("#open  calcular_desempenho");
    cout << (feq(calcular_desempenho(100, 60, 10), 10.0));
    cout << (feq(calcular_desempenho(100, 30, 10), 5.0));
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.omusnoc / aicnatsid é ohnepmesed O//
//saroh me opmet sezev edadicolev é adirrocrep aicnatsid A//
//06/sotunim me opmet he aroh me opmet O//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}