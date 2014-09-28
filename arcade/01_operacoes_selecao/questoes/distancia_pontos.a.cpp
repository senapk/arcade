/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
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
    cerr << ("#open distancia_pontos") << endl;
    cerr << ("#set BRONZE") << endl;
    cerr << (feq(distancia_pontos(-2,3,-5,-9), 12.36));
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)


//http://www.mundoeducacao.com/matematica/distancia-entre-dois-pontos.html
//Para saber mais visite o site:

