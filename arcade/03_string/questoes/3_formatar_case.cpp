#include <iostream>
#include <motor.h>
using namespace std;
/*
    O seu editor de texto deu problema. Seu orientador pediu que você
    formatasse toda uma seção do seu trabalho em caixa alta.
    Como você é um fantástico programador resolveu logo fazer algo
    mais completo.

    Dado um texto, formate como for pedido através da enum Formato.
    Ignore pontuação, espaço e números.

    A entrada é composta de minusculas, maiusculas, números, pontuação
    e espaços simples.
*/

enum Formato {TodaMaiuscula, TodaMinuscula, PrimeiraMaiuscula};

string formatar(string texto, Formato formato){
    //@@return "";
    string saida(texto);
    if(formato == TodaMaiuscula){
        for(auto & c : saida){
            if(isalpha(c)){
                c = toupper(c);
            }
        }
        return saida;
    }
    if(formato == TodaMinuscula){
        for(auto & c : saida){
            if(isalpha(c)){
                c = tolower(c);
            }
        }
        return saida;
    }
    if(formato == PrimeiraMaiuscula){
        for(int i = 0; i < (int) saida.size(); i++){
            char *c = &saida[i];
            if(isalpha(*c)){
                if(i == 0){ //primeira da string
                    *c = toupper(*c);
                    continue;
                }
                char b = saida[i - 1];

                if(isspace(b) || ispunct(b)){
                    *c = toupper(*c);
                    continue;
                } else {
                    *c = tolower(*c);
                }
            }
        }
        return saida;
    }
    return "";
}

int main(){
    cerr << "#open formatar OURO IF FOR STRING ";
    cerr << (formatar("ufa, cheguei!", TodaMaiuscula) == "UFA, CHEGUEI!");
    cerr << (formatar("Ufa, chEgUEI!", TodaMinuscula) == "ufa, cheguei!");
    cerr << (formatar("Ufa,chEgUEI! amigo", PrimeiraMaiuscula) == "Ufa,Cheguei! Amigo");
    //@--
    cerr << (formatar("fa, cheguei!", TodaMaiuscula) == "FA, CHEGUEI!");
    cerr << (formatar("fa, chEgUEI!", TodaMinuscula) == "fa, cheguei!");
    cerr << (formatar("Ufa, chEgUEI!", PrimeiraMaiuscula) == "Ufa, Cheguei!");
    cerr << endl;
    cerr << "#end";
    return 0;
}

//Sugiro aprender algumas operações sobre caracteres.
//Pra usar essas funções você talvez precise dar o
//#import <ctype.h>
//
//c = toupper(c); transforma o char c em maiusculo
//tolower funciona da mesma forma.
//isupper(), islower(), ispunct(), isdigit(), isalpha() informam
//respectivamente se o char passado é maiusculo, minusculo,
//pontuação ,digito numérico ou alfabetico.
//
//Para fazer todo maiusculo e todo minúsculo é só varrer
//tranformando os caracteres o que for alpha
//
//Para fazer o primeiro maiusculo, você precisa analisar
//algumas coisas.
//Se for a primeiro alpha, ou seja, se for o primeiro
//da string ou se o anterior for espaço ou pontuação,
//você coloca em maiusculo. Caso contrário, coloque
//em minúsculo.
