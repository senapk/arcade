/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <motor.h>

using namespace std;
//@begin

//@converti: Ítalo Bandeira
//Faça uma função que remova TODOS elementos repetidos de um vector e
//adicione a soma no fim, até que não haja elementos repetidos
//{1 18 3 1 1 4 5 9 3}
//remove os tres primeiros 1 e adiciona 3 no fim
//{18 3 4 5 9 3 3}
//remove os tres numeros 3 e adiciona 9 no fim
//{18 4 5 9 9}
//remove os dois noves
//{18 4 5 18}
//remove os dois dezoitos
//{4 5 36}

vector<int> compactar(vector<int> vet){
    return vector<int>();
}


//@end

void tests ()
{
    cerr << "#open remover_ninja";
    {
        vector<int> resp = compactar({1, 18, 3, 1, 1, 4, 5, 9, 3});
        vector<int> esperado {4, 5, 36};
        cerr << (esperado == resp);
    }
    {
        vector<int> resp = compactar({1, 20, 3, 1, 1, 4, 5, 9, 3});
        vector<int> esperado {20, 4, 5, 18};
        cerr << (esperado == resp);
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}