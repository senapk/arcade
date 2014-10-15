/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//#BigNumber#
//A linguegem C++ não suporta números muito grandes. O tipo inteiro (int),
//por exemplo, suporta 4294967295 números diferentes. Pensando nisso, uma alternativa
//à representação de números grandes (Big numbers) é o uso de Strings. Mas como realizar
//operações com estes números? Começe com uma operação simples, faça uma função que
//receba um número gigante com até 1000 casas e retorne true se ele é divisível
//por 11. Existem formas para se determinar essa divisibilidade. Pesquise um pouco.

bool eh_divisivel_por_11(string num){
    return false;
}

//@end

void tests() {
    cerr << "#open eh_div_11 PRATA IF FOR STRING" << endl;
    cerr << (eh_divisivel_por_11("11") == true);
    cerr << (eh_divisivel_por_11("1") == false);
    cerr << (eh_divisivel_por_11("110") == true);
    cerr << (eh_divisivel_por_11("121") == true);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

//Existe uma relação entre as somas dos algarismos índice par e índice ímpar.
//Se você somar todos os algarismos índice par terá sum_par;
//Se você somar todos os algarismos índice impar terá sum_impar;

//Se (si_impar - si_par) for divisível por 11, então o número todo é divisível.

