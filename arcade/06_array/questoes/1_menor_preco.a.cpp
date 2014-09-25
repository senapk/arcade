/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <math.h>
using namespace std;
//@begin
//Faça um programa que olha o preço de vários produtos e informe qual o
//produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.
//Retorne o valor do menor produto.

float menor(float preco[], int tam){
    return 0.0;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};
void tests() {
    float v1[] = {1.50, 1.55, 1.89, 2.00, 2.01, 1.72};
    float v2[] = {1.56, 0.55, 2.00, 1.90, 1.91, 1.74};
    float v3[] = {1.80, 0.95, 1.89, 2.00, 2.01, 2.22};
    cout << ("#open maior_modelo BRONZE IF VETOR ");
    cout << (feq(menor(v1 ,6), 1.50));
    cout << (feq(menor(v2 ,6), 0.55));
    cout << (feq(menor(v3 ,6), 0.95));
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}