/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

/*
O seu professor de FUP está curioso para saber a média das notas da sua turma.
Para isso, ele armazenou as notas em um vetor e agora pede sua ajuda para
implementar uma função que retorna a media aritimética dos valores contidos em
um vetor.
*/

float media(float v[], int tam) {
    return 0.0;
}

//@end

//@tests
void tests(){
    auto feq = [](float a, float b){return (max(a, b) - min(a, b) < 0.1);};

    cout << "#open media ";
	float v1[] = {1.0};
	float v2[] = {1.0, 2.0, 3.0};
	float v3[] = {2.0, 2.0, 2.0, 2.0};

	cout << (feq(media(v1, 1), 1.0));
	cout << (feq(media(v2, 3), 2.0));
	cout << (feq(media(v3, 4), 2.0));
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//aidem alep adivid siopeD //
//.rotev od serolav so sodot odnehlocer //
//ri arap rodalumuca mu rasu asicerp êcov amos a raluclac araP //
//.sotnemele //
//ed edaditnauq alep adidivid sotnemele so sodot ed amos a é aidém A //
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}