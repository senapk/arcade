#include <iostream>
using namespace std;

//João e Maria, um casal moderno, implementaram um programa para celular Android
//que divide a conta proporcionalmente entre o casal de namorados de acordo com o
//salário de cada um. Por exemplo, se João ganha R$ 1000,00 por mês e Maria recebe R$
//2000,00 e vamos supor que a conta do restaurante foi de R$ 90,00, então João deve
//pagar aproximadamente R$ 30,00 e Maria R$ 60,00 já que ela tem um salário maior e,
//proporcionalmente, irá pagar o dobro de João.
//Implemente um programa que receba 3 valores: O salário de Maria, o Salário de João e
//a Conta do restaurante, todos do tipo float. O programa deve retornar uma struct
//Conta com o valor a ser pago por cada um.

struct Conta{
    float joao;
    float maria;
};

Conta dividir_conta(float sal_joao, float sal_maria, float conta_total){
    return Conta{0,0};
}

int main ()
{
    return 0;
}
