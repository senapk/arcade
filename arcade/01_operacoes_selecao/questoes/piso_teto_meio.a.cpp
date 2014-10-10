/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Faça as funções piso, teto, meio que arredonda valores float para int.
//Em piso, o valor eh sempre arredondado para baixo.
//Em teto, o valor eh arredondado para cima.
//Em meio, o valor arredonda para baixo se menor que 0.5 e para cima caso maior.
//
//@return: int


float piso(float num){
    return 0;
}

float teto(float num){
    return 0;
}

float meio(float num){
    return 0;
}
//@end

//@tests
void tests(){

    cerr << "#open piso BRONZE" << endl;
    cerr << (piso(9.0) == 9);
    cerr << (piso(5.6) == 5);
    cerr << (piso(4.025) == 4);
    cerr << (piso(11.75) == 11);

    cerr << "#open teto BRONZE" << endl;
    cerr << (teto(9.0) == 10);
    cerr << (teto(5.6) == 6);
    cerr << (teto(4.025) == 5);
    cerr << (teto(11.75) == 12);

    cerr << "#open meio BRONZE" << endl;
    cerr << (meio(9.0) == 9);
    cerr << (meio(5.6) == 6);
    cerr << (meio(4.025) == 4);
    cerr << (meio(11.75) == 12);

}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}