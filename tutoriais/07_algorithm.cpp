#include <iostream>
#include <algorithm>
#include <ctime> //funcao time
#include <cstdlib> //funcao srand
using namespace std;

//exige c++11
//prototipo da funcao pra imprimir um vetor de int
void print(vector<int> vet);

//A maioria das funções recebe ou retorna iteradores que são como ponteiros
void exemplo_ordenando_embaralhando_invertendo(){
    cout << "Vetor normal" << endl;
    vector<int> vet {1, 5, 3, 2, 9, 50, 4, 2, 7};
    print(vet);

    //ordenando
    cout << "Vetor ordenado" << endl;
    sort(begin(vet), end(vet));
    print(vet);

    cout << "Vetor invertido" << endl;
    reverse(begin(vet), end(vet));
    print(vet);

    string texto = "Homem Aranha pulando do predio";
    cout <<"NORMAL:    " << texto << endl;
    reverse(begin(texto), end(texto));
    cout <<"INVERTIDO: " << texto << endl;
    cout << endl;

    srand(time(0));
    cout << "Vetor embaralhado 1" << endl;
    random_shuffle(begin(vet), end(vet));
    print(vet);
    cout << "Vetor embaralhado 2" << endl;
    random_shuffle(begin(vet), end(vet));
    print(vet);

    cout << "Vetor ordenado" << endl;
    sort(begin(vet), end(vet));
    print(vet);


    cout << "Embaralhando do segundo ao antepenultimo" << endl;
    random_shuffle(begin(vet) + 1, end(vet) - 1);
    print(vet);
    cout << "Embaralhando do segundo ao antepenultimo" << endl;
    random_shuffle(begin(vet) + 1, end(vet) - 1);
    print(vet);

}

void exemplo_busca(){
    vector<int> vet {1, 2, 3, 7, 9};
    auto it = find(begin(vet), end(vet), 9); //salva posicao do 9
    *it = 8;
    print(vet);

    for(int i = 0; i < 10; i++){
        if(find(begin(vet), end(vet), i) == end(vet)){ //não encontar é chegar no fim
            cout << "Nao achei o elemento " << i << endl;
        }
    }
}

void exemplo_menor_maior(){
    vector<int> vet {1, 3, 2, 9, 4, 0, 7};
    auto it_menor = min_element(begin(vet), end(vet));
    auto it_maior = max_element(begin(vet), end(vet));
    cout << "Menor " << *it_menor << ", maior " << *it_maior << endl;
}

int main(){
    exemplo_ordenando_embaralhando_invertendo();
    exemplo_busca();
    exemplo_menor_maior();
    return 0;
}

void print(vector<int> vet){
    cout << "[ ";
    for(auto elem : vet)
        cout << elem << " ";
    cout << "]\n\n";
}


