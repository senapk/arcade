/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
#include <string>
#include <vector>
using namespace std;
//@begin

//@autor David Sena


// Dama uma matriz de entrada que representa um caça palavras de Y linhas por
// X colunas e uma palavra procurada, retornar se a palavra existe na matriz
// e a posição em que a palavra se encontra.
//
// A palavra pode estar horizontal, vertical, diagonal crescente ou decrescente.
// A palavra sempre vai estar na sua escrita normal, nunca invertida da direita
// esquerda ou de baixo pra cima.
//
// Se a palavra existir, preecha a struct palavra com existe = true, a posição
// x e y de onde a palavra começa e a direção.
//
// Se não existir, coloque existe = false;
//
// Ex:
// alsdpsayuansnrw
// mjuqpeewhhdsfgn
// djdfkqgerjzrjrr
// pdovcixayhnqbew
// pvyuzhxnsewqrfg
// pqpouqewrufisau
// pnpfqewnjrsdfwr
//
// procurada = pegasus
//
// saida = existe, xini = 4, yini = 0, direcao = Diagonal
//
// A entrada é um vector<string> mat
// o número de linhas é dado por mat.size()
// o número de colunas por mat[0].size();
// um elemento qualquer por mat[y][x]
//

enum Direcao{Horizontal, Vertical, Diagonal, AntiDiagonal, Nenhuma};

struct Lugar{
    bool existe;
    int x;
    int y;
    Direcao direcao;
};


Lugar procurar(vector<string> matriz, string str)
{
    return Lugar{false, 0, 0, Nenhuma};
}

//@end

//@tests
#include <tuple>
bool igual(Lugar a, Lugar b){
    if(a.existe == b.existe && a.existe == false)
        return true;
    return (tie(a.x, a.y, a.direcao) == tie(b.x, b.y, b.direcao));
}

void tests()
{
    cerr << "#open caca_palavras DIAMANTE";
    vector<string> mat= {  "alimpartendanrw",
                           "mjuqpeewhhdsfgf",
                           "djdfkqgerjzrjru",
                           "pdovcixayhnqbeg",
                           "pv?uzhxnsewqrfa",
                           "pqpouqewrufisau",
                           "pnpfqewnjrsdfwr"};

    cerr << (igual(procurar(mat, "ali"), Lugar{true, 0, 0, Horizontal}));
    cerr << (igual(procurar(mat, "nrw"), Lugar{true, 12, 0, Horizontal}));
    cerr << (igual(procurar(mat, "pegasus"), Lugar{true, 4, 0, Diagonal}));
    cerr << (igual(procurar(mat, "impar"), Lugar{true, 2, 0, Horizontal}));
    cerr << (igual(procurar(mat, "fuga"), Lugar{true, 14, 1, Vertical}));
    cerr << (igual(procurar(mat, "pq?"), Lugar{true, 0, 6, AntiDiagonal}));
    cerr << (igual(procurar(mat, "ninja"), Lugar{false, 0, 0, Horizontal}));
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)


 //Quando tiver conseguido solucionar esse problema, que tal fazer um gerador de caça palavras.

 //então a palavra não está naquela posição naquela direção.
 //Verifique os limites da matriz, se não conseguir extrair uma string do tamanho da palavra

 //se preocupar com a direção.
 //Se você passar o incremento para a função que extrai as strings não precisa

 //Antidiagonal é      +1, -1
 //Diagonal é          +1, +1
 //Vertical é sempre   +0, +1
 //Horizontal é sempre +1, +0
 //Você também pode pensar nas direções em relação ao incremento de x e y

 //Se você conseguir retirar strings da matriz, compará-las vai ser fácil.
 //a direção.
 //Faça uma função que arranca strings da matriz passando o tamanho, a posição inicial e

 //Algumas sugestões para te ajudar.



