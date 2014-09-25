/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
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
	cout << ("#open somatorio_0_a_num") << endl;
	cout << ("#set BRONZE LACO") << endl;
	cout << (somatorio_0_a_num(10) == 55);
    cout << (somatorio_0_a_num(1) == 1);
    cout << (somatorio_0_a_num(3) == 6);
    cout << (somatorio_0_a_num(5) == 15);
    cout << endl;

    cout << "#open somatorio_x_y BRONZE LACO" << endl;
    cout << (somatorio_x_y(9, 10) == 19);
    cout << (somatorio_x_y(1, 3) == 6);
    cout << (somatorio_x_y(4, 7) == 22);

}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.oçal mu me odaretni oremún adac ed amos a adraug euq railixua leváirav amu esU//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}