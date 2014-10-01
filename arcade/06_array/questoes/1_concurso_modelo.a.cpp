/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <math.h>
using namespace std;
//@begin

//Um concurso de modelo, é passado a altura de várias modelos,
//indique qual a maior altura existente nesse concurso.
//@return: retorna um float de dentro do vetor.
float maior_modelo (float candidata[], int tam){
    return 0.0;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};

void tests() {
    float v1[] = {1.50, 1.55, 1.89, 2.00, 2.01, 1.72};
    float v2[] = {1.56, 0.55, 2.00, 1.90, 1.91, 1.74};
    float v3[] = {1.80, 0.95, 1.89, 2.00, 2.01, 2.22};

    cerr << ("#open maior_modelo PRATA IF VETOR");
    cerr << (feq(maior_modelo(v1 ,6), 2.01));
    cerr << (feq(maior_modelo(v2 ,6), 2.00));
    cerr << (feq(maior_modelo(v3 ,6), 2.22));
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)
//com uma variavel em float.
//para que vc possa testar com os do vetor, certifique-se de testar
//Antes de ver qual o maior numero, armazene em uma variavel um valor

