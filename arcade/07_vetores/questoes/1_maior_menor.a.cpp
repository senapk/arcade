/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <motor.h>
using namespace std;
//@begin

//Faca uma funcao que retorne a soma do maior com o menor elemento
int soma_maior_menor(vector<int> vet){
    return 0;
}

//@end

void tests ()
{
    cout << "#open maior_menor ";
    cout << (soma_maior_menor({1, 2, 3, 4, 5}) == 6);
    cout << (soma_maior_menor({1, 2, 0, 4, 5}) == 5);
    cout << (soma_maior_menor({1, 2, 0, 4, 9}) == 9);
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}