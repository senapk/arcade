#include <iostream>
#include <sstream>
using namespace std;

void exemplo_um(){
    //retirando tipos diferentes
    stringstream ss;
    ss << "8 batatas valem  14.98!";
    int qtd;
    string palavra1, palavra2;
    float valor;
    char pont;
    ss >> qtd >> palavra1 >> palavra2 >> valor >> pont;

    cout << qtd << " " << palavra1 <<  " " << palavra2
         <<  " " << valor << pont << endl; //8 batatas valem  14.98!"
}

void exemplo_dois(){
    //extraindo numeros em loop
    stringstream ss("1 2 3 4 5");
    int num = 0;
    int soma = 0;
    while(ss >> num){
        soma += num;
    }
    cout << "soma " << soma << endl; // 15
    cout << ss.str() << endl; //1 2 3 4 5
}

void exemplo_tres(){
    //criando objetos vazios
    float num1;
    char op;
    float num2;
    stringstream("4.3 + 5.2") >> num1 >> op >> num2;
    if(op == '+'){
        cout << (num1 + num2) << endl; //9.5
    }
}

void exemplo_quatro(){
    //adicionando e retirando
    stringstream ss;
    ss << 5 << 4 << 3 << 2 << 1;
    int num;
    ss >> num; //5
    ss >> num; //4
}

void exemplo_cinco(){
    //tentando até falhar
    stringstream ss("1 2 3 4 # 1 1 # 3 4 5 # 7 1 2");
    while(ss.peek() != EOF){ //olha se tem algo sem retirar
        int num = 0;
        int total = 0;
        while(ss >> num){ //enquanto conseguir retirar um numero
            total += num;
        }
        cout << total << endl;
        ss.clear(); //destrava ss da falha de leitura quando achou um #
        ss.ignore();//joga fora um char que no caso é o #
    }
}

void exemplo_seis(){
    string texto = "Hoje fui a praia.\n"
                   "O tempo estava nublado.\n"
                   "As ondas agitadas e o mar assustador!\n";
    cout << texto;
    stringstream ss(texto);
    string linha;
    getline(ss, linha);
    cout << "linha 1 : " << linha << endl;
    getline(ss, linha);
    cout << "linha 2 : " << linha << endl;
    getline(ss, linha);
    cout << "linha 3 : " << linha << endl;

    ss.str(texto);//resetando ss com texto novamente
    getline(ss, linha, '!'); //pegando tudo até encontrar um !
    cout << endl << "Texto completo sem o !" << endl << linha << endl;
}

int main(){
    exemplo_um();
    exemplo_dois();
    exemplo_tres();
    exemplo_quatro();
    exemplo_cinco();
    exemplo_seis();
    return 0;
}
