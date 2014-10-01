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

//Pesquise na internet sobre a fórmula de Heron, utilizada para calcular
//a área de um triângulo a partir do tamanho de seus lados.
// @return : o valor da área
float area_triangulo(float a, float b, float c){
    return 0.0;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};
void tests(){
    cout << "#open area_triangulo" << endl;
    cout << (feq(area_triangulo(3.4, 4.5, 5.1), 7.51));
    cout << (feq(area_triangulo(6.4, 4.5, 5.1), 11.39)) << endl;
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)


//Cuidado para colocar os parenteses certinhos.
//http://www.mundoeducacao.com/matematica/formula-heron.htm
//Se você não foi capaz de achar no google, tente esse link

