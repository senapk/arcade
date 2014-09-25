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

//Questão 01: Faça uma função que retorna a soma dos 4 primeiros números pares após o número x.
//Questão 02: Faça uma função que retorna a soma dos 10 primeiros números divisíveis por 3 depois do número x
//Questão 03: Faça uma função que retorna a soma dos y primeiros números divisíveis por z depois do número x

int soma4(int x){
	return 0;
}

//Questão 02
int soma10(int x){
	return 0;
}

//Questão 03
int somaxyz(int x, int y, int z){
	return 0;
}


//@end

//@tests
void tests(){

	//Questão 01
    cout << "#open soma4 BRONZE IF FOR" << endl;
    cout << (soma4(1) == 20);
    cout << (soma4(8) == 52);
    cout << endl;

	//Questão 02
    cout << "#open soma10 BRONZE IF FOR" << endl;
    cout << (soma10(0) == 165);
    cout << (soma10(3) == 195);
    cout << endl;

	//Questão 03
    cout << "#open somaxyz BRONZE IF FOR" << endl;
    cout << (somaxyz(20,3,2) == 72);
    cout << (somaxyz(0,1,2) == 2);
	cout << endl;

}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.ortuo rop oremún mu ed oãsivid ad otser od anroter euq ) % ( oludóm ed rodarepo od erbmel eS :aciD//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}