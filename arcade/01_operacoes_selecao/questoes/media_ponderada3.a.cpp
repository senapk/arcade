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

//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a
//média ponderada dessas notas.
//@return: retorna um float.
float media_ponderada( float nota1, float nota2, float nota3, float peso1, float peso2, float peso3 ){
	return 0.0;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};
void tests() {
	cout << ("#open media_ponderada_3") << endl;
	cout << ("#set BRONZE") << endl;
	cout << (feq(media_ponderada(7, 6, 8, 1, 2, 3), 7.16));
    cout << (feq(media_ponderada(8.9, 6.7, 8.1, 1.2, 2.4, 3.5), 7.76));
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.sesetnêrap sod otnemanoicisop on odadiuC//
//mth.adarednop-aidem/acitametam/moc.alocselisarb.www//:ptth//
//:etis etniuges on adartnocne res edop adarednop aidem ad alumrof A//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}