/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Receba um valor em float, e arredonde-o seguindo os critérios:
//De x.0 até x.24, arredondar para x.0, de x.25 até x.74 arredondar para x.5
//Maior ou igual a x.75, arredondar para cima.
//@return: retorna um float.

float arredondamento(float nota){
    return 0.0;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};
void tests() {
    cout << ("#open arredondamento") << endl;
    cout << ("#set PRATA IF") << endl;
    cout << (feq(arredondamento(2.30), 2.50));
    cout << (feq(arredondamento(1.00), 1.00));
    cout << (feq(arredondamento(7.24), 7.00));

}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.otnemadnoderra ed seõçidnoc sa rezaf ós//
//é íad ritrap a ,lamiced rolav o áret êcov arietni a e taolf me aton a ertne//
//açnerefid a odnaluclac ,aton ad orietni rolav o edraug euq levairav amu eirC//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}