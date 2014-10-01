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
 * Vamos fazer uma cifra de substituição genérica.
 * Voce recebe um texto claro e duas palavras de cifragem.
 * Se o caractere do texto claro estiver na palavra de cifragem 1,
 * voce deve substitui-lo pelo caractere correspondente
 * da palavra de cifragem 2.
 *
 * Exemplo.
 * word1 = "abcdefghijlm"
 * word2 = "nopqrtuvwxyz"
 *
 * Ou seja, todo 'a' do texto deve ser trocado por 'n', e todo 'n' por 'a'
 * Todo 'h' deve ser trocado por 'v', todo 'z' por 'm', etc.
 *
 * texto  "minha chinela"
 * output "zwavn pvwaryn"
 *
 * Observe que em word1 podem aparecer pontuação, numeros, etc.
 * Se word1 = "123!*ov"
 * e  word2 = "456?-ai"
 * todo '!' vira '?' e vice versa.
 */

string cifra_poli_generica(string texto, string word1, string word2)
{
    return "";
}


//@end

void tests(){
    string palavra= "minha* chinela?!";
    string word1 = "abcdefghijlm";
    string word2 = "nopqrtuvwxyz";

    cerr << ("#open cifra_poli_generica");
    cerr << (cifra_poli_generica(palavra, word1, word2) == "zwavn* pvwaryn?!");
    cerr << (cifra_poli_generica("aquoso estrela", "aeios", "43102") == "4qu020 32tr3l4");
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}