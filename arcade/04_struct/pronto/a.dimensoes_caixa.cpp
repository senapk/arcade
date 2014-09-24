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
    cout << "#open calcula_area_volume" << endl;
    cout << "#set PRATA STRUCT" << endl;
    {
        Dimensoes dim{10,10,10};
        Resposta res = calcula_area_volume(dim);

        cout << (feq(res.volume, 1000.0));
        cout << (feq(res.area, 600.0));
    }

}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//lmth.emulov-e-aera-ortemirep/60/2102/rb.moc.topsgolb.01acitametamoacacude//:ptth//
//:etis etse esseca adivúd reuqlauQ//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}