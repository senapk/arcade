/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
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

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)
//com outra variável auxiliar depois retorne a diferença entre as duas.
//Use a função citada a cima em um laço e se o número for primo some ele em uma variável auxiliar, se não some
//tips: Faça uma função auxiliar que recebe um número por parâmetro e retorna se ele é primo ou não.


