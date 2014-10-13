/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
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
    cerr << ("#open  calcular_desempenho");
    cerr << (feq(calcular_desempenho(100, 60, 10), 10.0));
    cerr << (feq(calcular_desempenho(100, 30, 10), 5.0));
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//O tempo em hora eh tempo em minutos/60
//A distancia percorrida é velocidade vezes tempo em horas
//O desempenho é distancia / consumo.
