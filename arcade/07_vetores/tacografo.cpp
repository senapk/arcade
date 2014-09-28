#include <iostream>
#include <vector>
#include <motor.h>
using namespace std;

/*
Um tacografo registra a alteração das velocidades de um veículo.
Assim, a empresa sabe qual a velocidade máxima do carro em um
determinado trecho.

Suponha que o carro começa com velocidade igual a zero.
Você vai receber um vetor de aceleração e outro de tempo.

acele = {30, -5, 40, -10}
tempo = {10, 10, 10, 20}

O carro sobe a velocidade para 30 e anda 10 segundos.

Aumenta a velocidade em 30. Vel: 0 + 30 -> 30.
Anda 10 segundos. Distancia = vel * tempo =  300;

Diminui a velocidade em 5. Velocidade 25.
Anda 10 segundos. Distancia 250 + 300 = 550.

Aumenta vel + 40. Vel final = 25 + 40 = 65;
Anda 10 segundos. Distancia 550 + 650 = 1200;

Diminui vel em 10. Vel final = 55;
Anda 20 segundos. Distancia = 1200 + 1100 = 2300

Dado o vetor de aceleração e de tempo dia qual a velocidade
maxima e a distancia percorrida.
*/

struct Resp{
    int vmax;
    int dist;
};


Resp tacografo(vector<int> acel, vector<int> tempo){
    return Resp{0, 0};
}

int main(){

}
