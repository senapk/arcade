/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Faça uma função que soma todos os elementos da diagonal principal,
//de uma matriz passada por parâmetro.
//Se a matriz recebida não for quadrada retorne 0.

//@return: int

template<int lin, int col>
int somar_diagonal_principal(int mat[lin][col]){
    return 0;
}

//@end

//@tests
void tests(){
    cerr << "#open somar_diagonal_principal BRONZE FOR MATRIZ" << endl;
    {
        int mat[2][2] = {{1, 2}, {3, 4}};
        cerr << (somar_diagonal_principal<2,2>(mat) == 5);
    }
    {
        int mat[3][3] = {{1, 2, 4},{3, 4, 8},{5, 4, 7}};
        cerr << (somar_diagonal_principal<3,3>(mat) == 12);
    }
    {
        int mat[1][3] = {{1, 2, 4}};
        cerr << (somar_diagonal_principal<1,3>(mat) == 0);
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)

//da coluna.
//Dicas: Você está em uma diagonal principal de uma matriz quando o número da linha é igual ao número

