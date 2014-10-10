#include <motor.h>
#include <iostream>
#include <vector>
using namespace std;

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
    //@@return 0.0;
    float somaNotas = 0;
    int somaPesos = 0;
    for(int i = 0; i <(int) p.size(); i++){
        somaNotas += p[i].nota * p[i].peso;
        somaPesos += p[i].peso;
    }
    return somaNotas/somaPesos;
}

//@tests
auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};
int main(){
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
  //@--
  {
    vector<Prova> vec = {{1,1},{1,1},{1,1},{1,1}};
    cerr << (feq(mediaPonderada(vec),1))<<endl;
  }
  cerr << "#end" << endl;
  return 0;
}

