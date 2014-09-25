/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
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

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//
//
//.sohnitrec sesetnerap so racoloc arap odadiuC//
//mth.noreh-alumrof/acitametam/moc.oacacudeodnum.www//:ptth//
//knil esse etnet ,elgoog on rahca ed zapac iof oãn êcov eS//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}