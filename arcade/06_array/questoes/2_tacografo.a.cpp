/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <cmath>
#include <iostream>
using namespace std;
//@begin

//Tacógrafos
//
//Tacógrafos são dispositivos instalados em determinados
//tipos de veículos, que registram a velocidade, tempo e
//distância percorrida por tal veículo. É utilizada
//principalmente em veículos de transporte coletivo e
//de transporte de cargas, assim ajudando a evitar abusos
//de velocidade por parte dos motoristas.
//
//A empresa SBC (Sociedade Brasileira dos Caminhoneiros) decidiu
//encomendar uma versão um pouco mais básica (e barata) para
//seus associados não precisarem gastar tanto na instalação
//desses aparelhos. Essas versões modificadas registram apenas
//os intervalos de tempo e as velocidades médias do caminhão
//naqueles intervalos.
//
//Tarefa
//
//Apesar das restrições dos aparelhos novos, a SBC quer poder
//saber qual foi a distância percorrida pelos caminhões. Você
//deverá escrever um programa que recebe uma série de intervalos
//de tempo com suas respectivas velocidades médias e calcula qual
//foi a distância total percorrida pelo caminhão de acordo com o
//tacógrafo
//
//Obs: Você receberá um N que representa a quantidade de intervalos
//de tempo registrados no tacógrafo.
//
//Você deve retornar um número inteiro representando a distância total
//percorrida, em quilômetros.

int tacografo(int n, int tempo[], int velocidade[]){
    return 0;
}

//@end

void tests(){
    cerr << "#open tacografo PRATA VETOR FOR" << endl;
    int t1[5] = {10,55,75};
    int v1[5] = {0,12,120};
    int t2[11] = {45,46,7,95,12,78,10,52,13,1};
    int v2[11] = {46,101,2,104,107,29,26,86,79,107};
    cerr << (tacografo(3, t1, v1) == 9660);
    cerr << (tacografo(10, t2, v2) == 26022);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}