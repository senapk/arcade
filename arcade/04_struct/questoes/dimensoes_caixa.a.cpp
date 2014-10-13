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

//Faça duas funções, que determinem a partir da largura, altura e comprimento de uma caixa d'água,
//(a) O volume de água que a caixa pode armazenar.
//(b) A área de material utilizada para construir a caixa com tampa.
//return: a resposta na struct resposta.

struct Dimensoes{
    int largura;
    int altura;
    int comprimento;
};

struct Resposta {
    float volume;
    float area;
};


Resposta calcula_area_volume( Dimensoes dim ){
    return Resposta{0,0};
}
//@end

//@tests
auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};

void tests(){
    cerr << "#open calcula_area_volume" << endl;
    cerr << "#set PRATA STRUCT" << endl;
    {
        Dimensoes dim{10,10,10};
        Resposta res = calcula_area_volume(dim);

        cerr << (feq(res.volume, 1000.0));
        cerr << (feq(res.area, 600.0));
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Qualquer dúvida acesse este site:
//http://educacaomatematica10.blogspot.com.br/2012/06/perimetro-area-e-volume.html
