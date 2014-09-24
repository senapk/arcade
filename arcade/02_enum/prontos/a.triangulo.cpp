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

//Faça um programa que dados 3 lados de um triângulo. O programa deverá
//informar se os valores podem ser um triângulo. Indique, caso os lados
//formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
//@return: retorne um enum

enum Triangulos {EQUILATERO, ISOSCELES, ESCALENO, NAO_TRIANGULO};

Triangulos triangulo(int l1, int l2, int l3){
	return NAO_TRIANGULO;
}

//@end

//@tests
void tests(){
	cout << "#open triangulo BRONZE IF ENUM" << endl;
	cout << (triangulo(5, 5, 2) == ISOSCELES);
    cout << (triangulo(5, 8, 9) == ESCALENO);
    cout << (triangulo(8, 8, 8) == EQUILATERO);

}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//mth.solugnairt-sod-oacacifissalc/moc.sdikalocse.www//:ptth//
//:esseca ,solugnâirt so ertne açnerefid a abias oãn êcov osaC saciD//
//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}