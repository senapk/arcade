/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <vector>
#include <iostream>
#include <motor.h>
using namespace std;
//@begin
//@autor David Sena
/*
Os soldados se colocaram em formação no quartel.
Juntos eles formam uma matriz.

Hoje vai ter uma inspeção do Capitão. O Comandante
quer enganar o capitão colocando os maiores de cada
fila na frente, pra dar a impressão de que todos
são altos.

Você já sabe a quem ele atribuiu essa tarefa.

Sua missão é descobrir quem é o mais alto de cada
coluna e trocá-lo de prosição com o primeiro da coluna.

É apenas uma troca por coluna. Não é pra ordenar a coluna.

Assuma que os mais altos devem estar na última linha
da matriz.

Você que não é besta, fez um código pra isso.

[ 1  2  3  4
  5  6  7  8
  4  2  1  9
  6  5  3  2]

Após puxar os mais altos pra frente, o resultado fica assim:

[ 1  2  3  4
  5  5  3  2
  4  2  1  9
  6  6  7  8]

Para obter o numero de linhas e colunas use
int lin = mat.size();
int col = mat[0].size();

Para acessar o elemento y, x use mat[y][x]

Retorne a matriz com as alterações.
Para inicializar uma nova matriz apartir da
matriz mat recebida é só fazer:

matriz<int> nova(mat);
*/

template<class T>
using matriz = vector<vector<T>>;

matriz<int> puxar_altoes(matriz<int> mat){
    return mat;
}


//@end

void tests(){
    cerr << "#open aziago ";
    {
        matriz<int> mat = {{ 1, 2, 3, 4},
                           { 5, 6, 7, 8},
                           { 4, 2, 1, 9},
                           { 6, 5, 3, 2}};

        matriz<int> nova= {{ 1, 2, 3, 4},
                           { 5, 5, 3, 8},
                           { 4, 2, 1, 2},
                           { 6, 6, 7, 9}};
        cerr << (puxar_altoes(mat) == nova);
    }
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}