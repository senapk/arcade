/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Receba um valor em float, e arredonde-o seguindo os critérios:
//De x.0 até x.24, arredondar para x.0, de x.25 até x.74 arredondar para x.5
//Maior ou igual a x.75, arredondar para cima.
//@return: retorna um float.

float arredondamento(float nota){
    return 0.0;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};
void tests() {
    cerr << ("#open arredondamento") << endl;
    cerr << ("#set PRATA IF") << endl;
    cerr << (feq(arredondamento(2.30), 2.50));
    cerr << (feq(arredondamento(1.00), 1.00));
    cerr << (feq(arredondamento(7.24), 7.00));
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)

//só fazer as condições de arredondamento.
//entre a nota em float e a inteira você terá o valor decimal, a partir daí é
//Crie uma variavel que guarde o valor inteiro da nota, calculando a diferença

