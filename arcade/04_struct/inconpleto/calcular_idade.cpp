#include <iostream>
#include <motor.h>
using namespace std;

#if true
//Faça um programa que receba a data de nascimento de uma pessoa
//e a data atual e retorne a idade dessa pessoa em anos, meses e dias
//Considere o ano com 365 dias, o mes com 30 dias.
struct Tempo{
    int anos;
    int meses;
    int dias;
};

Tempo calcular_idade(Tempo nascimento, Tempo atual){
    return Tempo{0, 0, 0};
}
#else
Tempo calcular_idade(Tempo nascimento, Tempo atual){
    return Tempo{0, 0, 0};
}
#endif


int main ()
{
    tests();
    cerr << "#end" << endl;
    return 0;
}

Idade calcularIdade (Data nascimento, Data atual);
