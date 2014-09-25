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

    cout << ("#open maior_modelo PRATA IF VETOR");
    cout << (feq(maior_modelo(v1 ,6), 2.01));
    cout << (feq(maior_modelo(v2 ,6), 2.00));
    cout << (feq(maior_modelo(v3 ,6), 2.22));
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.taolf me levairav amu moc//
//ratset ed es-euqifitrec ,rotev od so moc ratset assop cv euq arap//
//rolav mu levairav amu me enezamra ,oremun roiam o lauq rev ed setnA//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}