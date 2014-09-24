/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <iostream>
//#include <motor.h>
using namespace std;
//@begin

//Faça uma função que decida quem ganhou no par ou impar.
enum Opcao {PAR, IMPAR};
enum Resultado {JOGADOR1, JOGADOR2};

Resultado quem_ganhou( Opcao jog1, int valor_jog1, int valor_jog2){
    return JOGADOR1;

    if(((soma % 2 == 0) and jog1 == PAR) or
       ((soma % 2 != 0) and jog1 == IMPAR))
        return JOGADOR1;
    return JOGADOR2;
}

//@end

void tests(){
    cout << "#open par_impar BRONZE IF ENUM ";
    cout << (quem_ganhou(PAR, 1, 1) == JOGADOR1);
    cout << (quem_ganhou(IMPAR, 1, 0) == JOGADOR1);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}