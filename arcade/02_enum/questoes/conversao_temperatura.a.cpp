/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <math.h>
using namespace std;
//@begin
//Faça um código que converta entre Celsius, Farenheit e Kelvin.
//Ele deve receber um valor e duas escalas. A primeira escala
//eh a do valor atual e a segunda a do valor desejado.
//Exemplo:  converter(0, CELSIUS, KELVIN) deve dar 273.
//Pois 0 CELSIUS equivale a 273 KELVIN
//@return: A função retorna um double.

enum Escala {CELSIUS, FARENHEIT, KELVIN};

//essas são as sugestões de protótipo, mas só o metodo converter serah testado

double celsius_faren(float valor) {
    return 0.0;
}
double faren_celsius(float valor) {
    return 0.0;
}
double celsius_kelvin(float valor) {
    return 0.0;
}
double kelvin_celsius(float valor) {
    return 0.0;
}
double converter(float valor, Escala escala_entrada, Escala escala_saida){
    return 0.0;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};

void tests(){
    cerr << ("#open conversao_temperatura BRONZE IF ENUM ");
    cerr << (feq(converter(39.0, CELSIUS, FARENHEIT), 102.20));
    cerr << (feq(converter(39.0, CELSIUS, KELVIN), 312.00));
    cerr << (feq(converter(373.0, KELVIN, FARENHEIT), 212.00));
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Faça primeiro as questões que convertem valores individuais
//e depois utilize-as na função converter.
//c2f -> converte de celsius para farenheit
//f2c -> converte de farenheit para celsius
//k2c -> de kelvin para celsius
//c2k -> de celsius para kelvin
//Exemplo:
//float c2k(float valor){
//    return valor + 273;
//}
//Para converter de farenheit para kelvin basta usar f2c e c2k.
