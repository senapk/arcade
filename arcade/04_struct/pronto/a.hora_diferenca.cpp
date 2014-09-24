/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

//Joaozinho olhou o relógio e quis saber quanto tempo se passou desde a hora que ele almoçou.
//Faça uma função que mostre quanto tempo se passou entre dois tempos.
//Considere que o segundo tempo sempre será maior que o primeiro

struct Tempo{
    int hora;
    int minuto;
    int segundo;
};

Tempo diferenca(Tempo inicio, Tempo fim){
    return Tempo{0, 0, 0};
}

//@end

//@tests
bool igual(Tempo one, Tempo two){
    if(one.hora == two.hora)
        if(one.minuto == two.minuto)
            if(one.segundo == two.segundo)
                return true;
    return false;
}

void tests(){
    cout << "#open diferenca_tempo" << endl;
    cout << "#set PRATA IF STRUCT" << endl;
    cout << (igual(diferenca(Tempo{0, 0, 0}, Tempo{0, 0, 1}), Tempo{0, 0, 1}));
    cout << (igual(diferenca(Tempo{1, 0, 0}, Tempo{2, 3, 1}), Tempo{1, 3, 1}));
    cout << (igual(diferenca(Tempo{1, 50, 0}, Tempo{2, 0, 0}), Tempo{0, 10, 0}));

}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.opmet arap atlov ed atrevnoc ,oãçartbus ad odatluser O//
//sodnuges so aiartbuS//
//.sodnuges arap sopmet siod so atrevnoC//
//.sodnuges arap opmet ed etrevnoc euq oãçnuf amu açaF//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}