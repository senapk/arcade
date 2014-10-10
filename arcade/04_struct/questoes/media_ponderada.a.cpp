/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <vector>
using namespace std;
//@begin

// A struct definida abaixo contém dois atributos, “nota” e “peso”, utilizaremos essa struct
// para calcular uma média ponderada, onde “peso” representa o peso que uma nota específica
// tem na média geral, a fórmula é a seguinte:

// media =  somatória de (nota*peso)/ somatória de (peso)

// ou seja, a somatória de todas as notas multiplicadas por seu respectivo peso, tudo isso
// dividido pela somatória dos pesos das notas.

// Com isso, crie uma função que recebe um vetor de provas, e retorna a média ponderada de
// seus elementos.

//@return: float referente a média ponderada.

struct Prova
{
    float nota;
    int peso;
};

float mediaPonderada(vector<Prova> p){
    return 0.0;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};
void tests(){
  cerr << "#open mediaPonderada BRONZE FOR STRUCT VECTOR" << endl;
  {
    vector<Prova> vec = {{7.0,1},{6.0,2},{8.0,3},{7.5,4}};
    cerr << (feq(mediaPonderada(vec),7.3));
  }
  {
    vector<Prova> vec = {{8.0,3},{7.0,2},{10.0,3},{5.5,4}};
    cerr << (feq(mediaPonderada(vec),7.5));
  }
  {
    vector<Prova> vec = {{5.0,1},{9.0,2},{6.4,3},{7.1,4}};
    cerr << (feq(mediaPonderada(vec),7.06));
  }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}