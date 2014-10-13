/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <vector>
using namespace std;
//@begin

//@autor: Ronildo, Ítalo, David
//Os soldados se colocaram em formação no quartel.
//Na formação eles formaram uma matriz. Na formação
//encontram-se homens e mulheres. O comandante percebeu
//que homens que ficaram perto de mulheres, não estão
//se concentrando nas ordens dadas.
//
//O Comandante sabendo que pode contar com você,
//quer que você conte quantos homens estão pertos
//de pelo menos uma mulher
//
//Você que não é besta, fez um código pra isso.
//
//uma mulher é um * e o homem um .
//pro homem ser contado como desconcentrado deve
//estar adjacente a uma mulher, também valendo diagonais.
//@return: int
int contar_desconcentrados(vector<string> mat){
    return 0;
}

//@end

void tests()
{

    cerr << "#open desconcentrados";
    {
        vector<string> mat = {"...",
                              "...",
                              ".**"};
        cerr << (contar_desconcentrados(mat) == 4);
    }
    {
        vector<string> mat = {".*.",
                              "...",
                              ".*."};
        cerr << (contar_desconcentrados(mat) == 7);
    }
    {
        vector<string> mat = {"..*........",
                              "...........",
                              "....*.....*",
                              ".*........*"};
        cerr << (contar_desconcentrados(mat) == 14);
    }


}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

//int contar_desconcentrados(vector<string> mat){
//    para todas as pessoas
//        se eh homem
//            para todos os proximos
//                se o proximo existe
//                    se o proximo eh mulher
//                        cont++;
//}


