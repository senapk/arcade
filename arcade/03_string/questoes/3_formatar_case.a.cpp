/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin
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
    return "";
}

//@end

void tests(){
    cerr << "#open formatar OURO IF FOR STRING ";
    cerr << (formatar("ufa, cheguei!", TodaMaiuscula) == "UFA, CHEGUEI!");
    cerr << (formatar("Ufa, chEgUEI!", TodaMinuscula) == "ufa, cheguei!");
    cerr << (formatar("Ufa,chEgUEI! amigo", PrimeiraMaiuscula) == "Ufa,Cheguei! Amigo");
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//@tips
//As linhas estão invertidas para você não ler sem querer :)

//em minúsculo.
//você coloca em maiusculo. Caso contrário, coloque
//da string ou se o anterior for espaço ou pontuação,
//Se for a primeiro alpha, ou seja, se for o primeiro
//algumas coisas.
//Para fazer o primeiro maiusculo, você precisa analisar
//
//tranformando os caracteres o que for alpha
//Para fazer todo maiusculo e todo minúsculo é só varrer
//
//pontuação ,digito numérico ou alfabetico.
//respectivamente se o char passado é maiusculo, minusculo,
//isupper(), islower(), ispunct(), isdigit(), isalpha() informam
//tolower funciona da mesma forma.
//c = toupper(c); transforma o char c em maiusculo
//
//#import <ctype.h>
//Pra usar essas funções você talvez precise dar o
//Sugiro aprender algumas operações sobre caracteres.


