/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <vector>
using namespace std;
//@begin
//@autor David Sena
/*
No quartel general os soldados formaram um retangulo.
O chefe quer quer você conte quantas mulheres ficaram
nas bordas do retangulo.

Sejam os soldados representados por um vetor de strings.
Os char '*' representam as mulheres e os '.' os homens.

Conte quantas mulheres estão nas bordas do quadrado
Voce pode usar para saber as linhas e colunas.

int lin = quartel.size();
int col = quartel[0].size();

Um vetor de strings é a mesma coisa que uma matriz
de caracteres. Voce pode acessar um elemento da linha
y coluna x usando quartel[y][x]
*/

int contar_bordas(vector<string> quartel){
    return 0;
}


//@end

void tests(){
    cerr << "#open contar_bordas ";
    vector<string> quartel;

    quartel= {
        "* *",
        "** "};
    cerr << (contar_bordas(quartel) == 4);

    quartel= {
        "***",
        "***"};
    cerr << (contar_bordas(quartel) == 6);

    quartel = {
        "* * ",
        " * *",
        "**  "};
    cerr << (contar_bordas(quartel) == 5);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}

//Uma abordagem simples é somar as mulheres que estão
//na primeira linha e na ultima linha.

//Se você somasse isso às mulheres da primeira e segunda
//coluna estaria correndo os riscos de contar as quinas
//duas vezes.

//Ou você soma as culunas integralmente e subtrai as
//mulheres duplicadas, ou faz um laço que começe da linha
//2 até a penultima linha.
