/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//@completada por: Daniel Filho.

//Zordon foi contratado para trabalhar em um hotel em Quixadá.
//Nesse hotel os quartos são numerados seguindo a sequência de Fibonacci, sendo que as 2 primeiras portas
//são de um mesmo quarto, logo elas possuem a mesma numeração.
//Logo para saber qual o número da 10º porta, por exemplo, é necessário saber qual o
//número na 10º posição na sequência de fibonacci...
//Ex: Porta: 1 possui a numeração 1.
//    Porta: 2 possui a numeração 1.
//    Porta: 3 possui a numeração 2.
//    Porta: 4 possui a numeração 3.
//    Porta: 5 possui a numeração 5.
//    Porta: 6 possui a numeração 8.
//    Porta: 7 possui a numeração 13.
//Assim por diante...
//Zordon, por estar muito ocupado, pediu para você fazer uma função que recebe a posição de uma porta
//e retorna qual o numeração dela.
//
//@return: int

int numeracao_porta(int posicao){
    return 0;
}

//@end

//@tests
void tests(){
    cerr << "#open numeracao_porta BRONZE" << endl;
       cerr << (numeracao_porta(1) == 1);
    cerr << (numeracao_porta(2) == 1);
    cerr << (numeracao_porta(3) == 2);
    cerr << (numeracao_porta(4) == 3);
    cerr << (numeracao_porta(5) == 5);
    cerr << (numeracao_porta(6) == 8);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

// Para obter a serie de fibonnaci, você precisa de 3 variaveis, a primeira referente ao valor que voce vai "aumentar",
// a segunda referente ao seu anterior e a ultima referente a anterior da anterior, para "aumentar" a primeira você
// precisa das outras duas, depois que aumenta-la, você precisa atualizar o valor das outras duas corretamente, para lembra-lo
// a serie de fibonnaci é a seguinte:
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, … (podendo ser omitido o zero inicial).

