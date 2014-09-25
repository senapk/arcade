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

//Crie uma função que calcule a distância entre dois pontos (x1,y1) e (x2, y2)
//em um plano cartesiano.
//@return: Distância dos dois pontos.
float distancia_pontos(int x1, int y1, int x2, int y2){
	return 0.0;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};

void tests() {
	cout << ("#open distancia_pontos") << endl;
	cout << ("#set BRONZE") << endl;
    cout << (feq(distancia_pontos(-2,3,-5,-9), 12.36));
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//
//
//lmth.sotnop-siod-ertne-aicnatsid/acitametam/moc.oacacudeodnum.www//:ptth//
//:etis o etisiv siam rebas araP//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}