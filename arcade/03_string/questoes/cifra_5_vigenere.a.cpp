/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin

//@autor David Sena, Italo Bandeira

/*
 * Criaremos mais uma cifra que usa rotação, só que agora uma substituição
 * polialfabetica.
 * Ao inves de usarmos uma rotação única, cada letra tem sua
 * própria rotação. Vamos fazer algo parecido com a cifra de Vigenere.
 * A senha nos diz o quanto sera rotacionado. Voce deve repetir a senha,
 * ate completar a frase a ser cifrada.
 *
 * Suponha que a palavra cifrada eh "batata? sim! Frita!!"
 * e a senha eh "abac".
 *
 * A senha sempre serah minuscula e sem pontuacao ou espaco.
 *
 * Lembre-se, voce deve ignorar pontuação e numeros.
 *
 * input: batata? sim! Frita!!
 * senha: abacab  aca  bacab
 * saida: bbtctb? skm! Grktb!!
 */


string cifra_vigenere(string texto, string senha, bool cifrar)
{
    return "";
}



//@end

void tests() {
    cerr << ("#open cifra_vigenere OURO IF FOR STRING");
    string n1 = "a";
    string str1 = "batata? sim! Frita!!";
    string out1 = "batata? sim! Frita!!";

    string n2 = "baad";
    string str2 = "cafe? sim, porfavor!!";
    string out2 = "dafh? tim, sprfdwor!!";

    cerr << (cifra_vigenere(str1, n1, true) == out1);
    cerr << (cifra_vigenere(str2, n2, true) == out2);
    cerr << (cifra_vigenere(out1, n1, false) == str1);
    cerr << (cifra_vigenere(out2, n2, false) == str2);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}