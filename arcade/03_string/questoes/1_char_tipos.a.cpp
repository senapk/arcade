/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

//@autor David Sena

//Dado um char que pode ser maiúsculo, minúsculo, número ou pontuação,
//retorne a categoria do char.
//Considere que ele é pontuação, se não for nenhuma das outras categorias.

enum Categoria{PONTUACAO, MAIUSCULA, MINUSCULA, NUMERO};
Categoria pegar_categoria(char c){
    return NUMERO;
}

//Retorne true se o char passado for uma vogal.
bool eh_vogal(char c){
    return false;
}

//Retorne verdade se ambos são letras e o segundo char
//eh o maiusculo do primeiro,
//ex u,U    k, K     i, I
bool min_maius(char low, char up) {
    return false;
}

//@end

//@tests
void test_pegar_categoria(){
    cerr << "#open pegar_categoria ";
    cerr <<(pegar_categoria('1') == NUMERO);
    cerr <<(pegar_categoria('9') == NUMERO);
    cerr <<(pegar_categoria('a') == MINUSCULA);
    cerr <<(pegar_categoria('b') == MINUSCULA);
    cerr <<(pegar_categoria('A') == MAIUSCULA);
    cerr <<(pegar_categoria('Z') == MAIUSCULA);
    cerr <<(pegar_categoria('.') == PONTUACAO);
    cerr <<(pegar_categoria(')') == PONTUACAO);
}

void test_eh_vogal(){
    cerr << "#open eh_consoante ";
    cerr << (eh_vogal('a') == true);
    cerr << (eh_vogal('g') == false);
    cerr << (eh_vogal('T') == false);
    cerr << (eh_vogal('U') == true);
    cerr << (eh_vogal('A') == true);
}
void test_min_maius()
{
    cerr << ("#open min_maius");
    cerr << ( min_maius('z', 'Z') == true );
    cerr << ( min_maius('A', 'a') == false );
    cerr << ( min_maius('a', 'A') == true );
    cerr << ( min_maius('r', 'm') == false );
}

void tests(){
    test_pegar_categoria();
    test_eh_vogal();
    test_min_maius();
    cerr << endl;
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Todo caractere minusculo está entre 'a' e 'z'.
//A mesma regra vale para os maiúsculos e números.
//Voce tambem pode usar isupper, islower, isalpha,
//ispunct, itdigit para testar se um char é
//maiusculo, minusculo, alfabetico, pontuacao e digito.
//
//Para testar se é a maiúscula é simples.
//A distancia entre maiúsculas e minúsculas é sempre a mesma
//na tabela ASC. Isso significa que a e A estão na mesma distancia
//que v e V. A distancia entre eles é 'a' - 'A'.
//Como a maiuscula vem primeiro na tabela asc, é só checar
//se a maiúscula + a distancia = minuscula.
//
//Para saber se é vogal crie uma string com todas as vogais
//maiúsculas e minúsculas e faça uma busca usando um laço.
//Se você encontrar então é vogal.
