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

// Papai Papudo me fez uma pergunta: dados dois números quaisquer, quais
// os fatores em comum entre os dois.
//
// Apostou 10 contos de reis que eu não conseguia fazer a conta em menos
// de 10 segundos.
//
// E era verdade. Mas como eu tenho um amigo programador, que é você.
// Você vai fazer o código pra eu colocar no meu celular e a cada 10
// contos que eu ganhar eu te dou 3. Mais do que justo naõ acha!!!
//
//
// Faça uma função que determine se dois números são co primos e retorne
// os fatores que ambos tem em comum.
//
// A e B são co-primos se a fatoração de ambos não tem fatores em comum.
// Ex: A = 10, B = 21
// A fatoração de A é {2, 5}
// A fatoração de B é {3, 7}
// Como A e B não tem fatores em comum então eles são co-primos.
//
// Ex2: A = 15, B = 21
// A = {3, 5}, B = {3, 7}
// Como ambos tem o fator 3, então eles não são co-primos.
//
// A = 8 e B = 4, deve gerar como saida apenas uma vez o número
// {2}. Mesmo que a fatoração de 8 seja {2, 2, 2} e 4 seja {2, 2}.
//
// \param A e B : os dois números a serem avaliados
//
// \return      : o vetor de primos em comum. Se o vetor tiver tamanho
//              : 0 então eles são co-primos


vector<int> fatores_comuns(int A, int B)
{
    return vector<int>();
}


//@end

void tests() {
    cout << "#open fatores_comuns OURO IF FOR VECTOR ";
    cout << (fatores_comuns( 5, 3)  == vector<int>({}));
    cout << (fatores_comuns( 8, 4)  == vector<int>({2}));
    cout << (fatores_comuns(15, 6) == vector<int>({3}));
    cout << (fatores_comuns(18, 6) == vector<int>({2, 3}));
    cout << (fatores_comuns(30, 36) == vector<int>({2, 3}));
}

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}