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

//Faça uma função que dado um inteiro N como entrada, determinar no conjunto {1 · · · N} a soma
//de todos os não-primos subtraída da soma dos primos.
//@return: retorna um inteiro

bool isPrimo(int n){
	return true;
}

int nao_primo_menos_primo(int num)
{
    return 0;
}

//@end

//@tests
void tests() {
	cout << "#open nao_primo_menos_primo PRATA IF FOR" << endl;
    cout << (nao_primo_menos_primo(0) == 0);
    cout << (nao_primo_menos_primo(1) == 1);
    cout << (nao_primo_menos_primo(4) == 0);
    cout << (nao_primo_menos_primo(3) == -4);

}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//.saud sa ertne açnerefid a enroter sioped railixua leváirav artuo moc//
//emos oãn es ,railixua leváirav amu me ele emos omirp rof oremún o es e oçal mu me amic a adatic oãçnuf a esU//
//.oãn uo omirp é ele es anroter e ortemârap rop oremún mu ebecer euq railixua oãçnuf amu açaF :spit//
//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}