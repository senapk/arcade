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

//Questão 01 - Faça uma função que retorne quantos números ímpares e divisíveis por 3 existem entre 0 e 500.
//Questão 02 - Faça uma função que retorna quantos número divisíveis por 3 existem entre x e y (incluindo y).
//Questão 03 - Faça uma função que conte quantos números divisíveis por 2, 3 e x, existem entre y e z.
//@return: retorna um int
//Questão 01
int impares_3_500(){
    return 1;
}

//Questão 02
int contar_div3(int x, int y){
    return 1;
}

//Questão 03
int contar_div23x(int x, int y, int z){
    return 1;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};

void tests() {
	cout << ("#open soma_condicional") << endl;
	cout << ("#set PRATA FOR IF") << endl;
	cout << (impares_3_500() == 83);
    cout << endl;

    cout << ("#open contar_div3") << endl;
    cout << ("#set PRATA FOR IF") << endl;
    cout << (contar_div3(10,20) == 3);
    cout << (contar_div3(100,103) == 1);
    cout << endl;

    cout << ("#open contar_div23x") << endl;
    cout << ("#set PRATA FOR IF") << endl;
    cout << (contar_div23x(1,20,30) == 2);
    cout << (contar_div23x(4,10,12) == 1);


}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.leváirav asse enroter siopeD//
//.sodassap sortemârap//
//solep levísivid rof oremun o odnauq ale etnemercni e rodatnoc omoc adasu áres euq leváirav amu esU//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}