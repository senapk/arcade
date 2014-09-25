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

//Faça uma função que retorne quantos primos existem entre x e y incluindo y.
//@return: retorna um valor inteiro.
//Função isPrimo serve como uma função auxiliar...
bool isPrimo(int x){
	return true;
}

int primeiros_primos(int x, int y){
	return 0;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};

void tests() {
	cout << ("#open soma_primos") << endl;
	cout << ("#set BRONZE IF FOR") << endl;
    cout << (primeiros_primos(1, 5) == 3);
    cout << (primeiros_primos(6, 12) == 2);
    cout << (primeiros_primos(11, 18) == 2);
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//php.somirp/madnuf/rb.moc.acitametamos.www//:ptth//
//:esseca somirp soremún so erbos siam rebas araP//
//.omsem o enroter lanif on e rodatnoc mu etnemercni omirp rof oremun o eS//
//.y e 1+x ertne i otnemele adac arap railixua oãçnuf asse esU//
//.oãn uo omirp rof odassap oremun o es eslaf uo eurt enroter euq railixua oãçnuf amu açaF//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}