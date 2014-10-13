#include <iostream>
using namespace std;

void exemplos_criacao(){
	string nome0; //string vazia
	string nome1 = "ovomaltine"; //atribuição
	string nome2("onitorrinco"); //construtor
	string nome3(10, 'X'); //XXXXXXXXXX 10 char X
	string nome4(nome3); //copia a partir do 3

	//o numero de elementos
	cout << nome4.size(); //10
}

void exemplos_acesso(){
	string remedio("OmePrazol");

	//todas essas formas de acesso também funcionam em vector
	cout << remedio[4] << endl; //r
	cout << remedio.at(3) << endl; //P
	cout << remedio.front() << endl; //O
	cout << remedio.back() << endl; //l

    cout << remedio.c_str(); //o dado no formato const char *
}

void exemplos_adicao(){
	string remedio; //criando string vazia
	remedio += "Omeprazol ";
	remedio += "eh "; //adicionando de string
	remedio += "um remedio pro estomago";
	remedio += '!'; //adicionando um char
	cout << remedio << endl;

	//números para string
	string salario;
	salario += "Voce recebeu " + to_string(640.34);
	salario += " no dia " + to_string(30) + "!\n";
    cout << salario << endl;
}

void exemplos_funcoes(){
    string frase = "Hoje merendei tapioca. O erro era o mercenario";

    //pegar uma substring
    cout << frase.substr(0, 4) << endl;//Hoje
    //começando do indice 0, pegue 4 caracteres
    cout << frase.substr(5, 8) << endl;//merendei
    //começando do 5, pegue 8 caracteres

    //tamanho
    cout << frase.size() << endl; //29

    //busca
    int pos1 = frase.find("merendei"); //retorna 5
    int pos2 = frase.find("tap"); //retorna 14
    cout << "pos merendei " << pos1 << ", pos tap " << pos2 << endl;
    int pos3 = frase.find("er"); //retorna 6
    int pos4 = frase.find("er", pos3 + 1);
    //retorna o próximo er depois do 6, que é o 25
    cout << "primeiro er " << pos3 << ", segundo er " << pos4 << endl;

    int pos5 = frase.find("Jean Cloud");
    cout << "Quando não achamos a string retorna " << pos5 << endl;

    //procurando todos os e na frase
    int pos = frase.find("e");
    while(pos != -1){
        cout << "achei um e em " << pos << endl;
        pos = frase.find("e", pos + 1);
    }
}


int main(){
    exemplos_criacao();
    exemplos_acesso();
    exemplos_adicao();
    exemplos_funcoes();
    return 0;
}
