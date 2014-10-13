/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//@completado e convertido por: Mikael Lemos

//Um ano é dito bisexto quando se acrescenta um dia ao mês de fevereiro. Isso
//acontece porque um ano tem 365 dias e 6 horas aproximadamente. Com isso, ao
//final de 4 anos, ficamos com um dia de adiantamento. Para compensar esse dia,
//acrescentamos o dia 29 de fevereiro e assim "gastamos" o dia extra. Além disso,
//Como seria chato fazer uma função que diz se um ano comum é bisexto ou não,
//implemente uma que recebe um número gigante de até 1000 dígitos
//em formato de String e diz se ele é bisexto ou não;

//Exemplo:
//Ano testado: 2004
//Saida: True

//@return: retornar um bool;


bool eh_bissexto(string num) {
    return false;
}

//@end

void tests() {

    cerr << "#open eh_bissexto BRONZE IF FOR" << endl;
    cerr << (eh_bissexto("2000") == true);
    cerr << (eh_bissexto("1188") == true);
    cerr << (eh_bissexto("2004") == true);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Dica: Os anos bissexto são múltiplos de 4 e não múltiplos de 100,
//mas podem ser múltiplos de 400.
