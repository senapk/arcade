/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
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
    cout << ("#open conversao_temperatura BRONZE IF ENUM ");
    cout << (feq(converter(39.0, CELSIUS, FARENHEIT), 102.20));
    cout << (feq(converter(39.0, CELSIUS, KELVIN), 312.00));
    cout << (feq(converter(373.0, KELVIN, FARENHEIT), 212.00));
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.k2c e c2f rasu atsab nivlek arap tiehneraf ed retrevnoc araP//
//}//
//;372 + rolav nruter	//
//{)rolav taolf(k2c taolf//
//:olpmexE//
//nivlek arap suislec ed >- k2c//
//suislec arap nivlek ed >- c2k//
//suislec arap tiehneraf ed etrevnoc >- c2f//
//tiehneraf arap suislec ed etrevnoc >- f2c//
//.retrevnoc oãçnuf an sa-ezilitu sioped e//
//siaudividni serolav metrevnoc euq seõtseuq sa oriemirp açaF//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}