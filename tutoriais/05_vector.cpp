#include <vector>
#include <iostream>
using namespace std;

void exemplos_criar(){
    //criando vetores vazios
    vector<int> numeros;
    vector<string> nomes;

    //criando vetores com vários elementos do mesmo tipo
    vector<string> frutas(6, "manga"); //6 mangas
    vector<int> uns(10, 1); //10 elementos com valor 1

    //criando vetores já com elementos
    vector<float> peso   = {98.0, 95.9, 88.0};
    vector<float> peso1({98.0, 95.9, 88.0});

    //criando vetores a partir de vetores
    vector<float> peso2(peso);
}

void exemplos_usar(){
    //USANDO

    //substuindo por novos valores
    vector<float>peso = {1.0, 2.1, 3.4, 6.9};

    //acessando elementos aleatoriamente
    cout << peso[0] << " " << peso.at(1) << endl; //2.1

    //obtendo tamanho
    cout << peso.size() << endl; //4

    //iterando sobre os elementos
    for(int i = 0; i < (int) peso.size(); i++){
        cout << peso[i] << " ";
    }
    cout << endl;
}

void exemplos_adicionar_remover(){
    vector<float>peso = {1.0, 2.1, 3.4, 6.9};

    //adicionando 4 novos elementos individualmente
    peso.push_back(6.1);
    peso.push_back(6.4);
    peso.push_back(6.0);
    peso.push_back(8.0); //1.0, 2.1, 3.4, 6.9, 6.1, 6.4, 6.0, 8.0

    //removendo os dois ultimos elementos adicionados
    peso.pop_back(); //remove o 8.0
    peso.pop_back(); //remove o 6.0

    //acessando o elemento da frente
    cout << peso[0] << endl; //1.0
    cout << peso.front() << endl; //1.0

    //acessando o elemento do fundo
    cout << peso[peso.size() - 1] << endl; //6.4
    cout << peso.back() << endl; //6.4
}

void exemplos_comparar_apagar(){
    //COMPARANDO
    //tipos básicos (string, int, char)
    vector<int> vet({1, 2, 7, 4});
    cout << (vet == vector<int>({1, 2, 3, 4}));
    //foi criado um vector sem nome só pra comparação

    //LIMPAR
    //Apagar todo conteúdo de um vector
    vet.clear();


    vet = {3, 6, 1, 7, 2, 8, 4, 9, 5};
    //Apagar o elemento índice 3 do vector
    vet.erase(begin(vet) + 3); //apaga o 7
    //Apagar os elementos de posicao 0, 2 e 3
    vet.erase(begin(vet) + 3); //apaga o 2
    vet.erase(begin(vet) + 2); //apaga o 1
    vet.erase(begin(vet) + 0); //apaga o 3
    //voce deve apagar as posicoes de tras pra frente
    //pra não perder a localização
}

//comparar structs ou classes é possível se você definir
//como o operador == deve atuar nessas classes.
struct Pos{
    int x;
    int y;
};

bool operator==(Pos A, Pos B){
    return (A.x == B.x and A.y == B.y);
}

void exemplos_comparar_struct(){
    vector<Posicao> posicoes1 = {{1, 2}, {3, 4}, {9, 1}};
    vector<Posicao> posicoes2 = {{1, 2}, {3, 4}, {9, 1}};
    cout << (posicoes1 == posicoes2);
}

void exemplos_for_range(){
    //voce pode acessar os elementos de um vetor por
    //para efetuar um laço dessa formaA
    vector<int> frutas({"maca", "banana", "uva", "manga"});

    for(string fruta : frutas){
        cout << fruta << " ";
    }
    cout << endl;

    //voce pode acessar os elementos de um vetor por
    //referencia para um laço adicionando o &
    for(string & fruta : frutas){
        fruta[0] = 'X';
    }
    //Xaca, Xanana, Xva, Xanga
}

int main(){
    exemplos_criar();
    exemplos_usar();
    exemplos_adicionar_remover();
    exemplos_comparar_apagar();
    exemplos_comparar_struct();
    exemplos_for_range();

    return 0;
}
