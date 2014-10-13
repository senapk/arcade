/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//@completado e convertido por: Daniel Filho.

//Joãozinho passou o dia visualizando os seus contatos no celular.
//Logo ele decidiu fazer um programa que calcula a quantidade de vezes que um
//determinado dígito aperece em um número de contato.
//Apos passar uma semana tentanto ele repassou esse problema para você.

//Exemplo:
//Dígito buscado : 1
//Número do contato: 99176810
//Saída: O dígito 1 se repete 2 vezes!

//@return: retornar um int

int conta_digito(int busco, int numero){
    return 0;
}

//@end

void tests()
{
    cerr << "#open conta_digito" << endl;
    cerr << (conta_digito(2,99102030) == 1);
    cerr << (conta_digito(1,99123321) == 2);
    cerr << (conta_digito(9,95398900) == 3);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Dica: Para pegar o primeiro numero da direita pra esquerda no valor,
//você pode usar o operador MOD, depois é só pegar todos
//e verificar a ocorrencia de um outro numero
