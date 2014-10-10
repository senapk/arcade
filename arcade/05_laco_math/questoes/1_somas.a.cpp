/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>

using namespace std;
//@begin

//Questão 01 - Faça uma função que soma de todos os números de ZERO até o numero inteiro positivo passado.
//@return: Soma de todos os números de 0 a N.
//
//Questão 02 - Faça uma função que soma todos os números de x até y, incluindo os números x e y.
//@return: Soma de todos os números de x a y.
//Questão 01
int somatorio_0_a_num(int num){
    return 0;
}

//Questão 02
int somatorio_x_y(int x, int y){
    return 0;
}
//@end

//@tests
auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};

void tests() {
    cerr << ("#open somatorio_0_a_num") << endl;
    cerr << ("#set BRONZE FOR") << endl;
    cerr << (somatorio_0_a_num(10) == 55);
    cerr << (somatorio_0_a_num(1) == 1);
    cerr << (somatorio_0_a_num(3) == 6);
    cerr << (somatorio_0_a_num(5) == 15);
    cerr << endl;

    cerr << "#open somatorio_x_y BRONZE FOR" << endl;
    cerr << (somatorio_x_y(9, 10) == 19);
    cerr << (somatorio_x_y(1, 3) == 6);
    cerr << (somatorio_x_y(4, 7) == 22);

}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)

//Use uma variável auxiliar que guarda a soma de cada número interado em um laço.

