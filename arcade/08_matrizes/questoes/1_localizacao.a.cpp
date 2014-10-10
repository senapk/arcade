/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin
//@autor David Sena
/*
Faça uma função que retorne a localização de um determinada coordenada na matriz.
Voce deve informar se ele está na borda, no centro, ou fora da matriz.
*/
template<class T>
using matriz = vector<vector<int>>;

enum Localizacao{Borda, Centro, Fora};

Localizacao acharLocalizacao(matriz<int> mat, int y, int x){
    return Borda;
}

//@end

void tests ()
{
    matriz<int> mat(3, {0, 0, 0, 0});
    cerr << " #open achar_lugar ";
    cerr << (acharLocalizacao(mat, 0, 0) == Borda);
    cerr << (acharLocalizacao(mat, 1, 1) == Centro);
    cerr << (acharLocalizacao(mat, 0, 4) == Fora);
    cerr << (acharLocalizacao(mat, -1, 3) == Fora);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}