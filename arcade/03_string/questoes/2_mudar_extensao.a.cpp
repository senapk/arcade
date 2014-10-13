/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <string>
#include <iostream>
using namespace std;
//@begin

//Questão: Jaspion é um calouro de computação. Depois de ter problemas em salvar
//seus arquivos com determinadas extenções (.pdf, .exe, .odt,...),
//ele resolveu pedir para você fazer uma função onde ele passa o nome do arquivo
//e a função retorna o nome do arquivo com a extenção.
//Se o nome do arquivo já estiver com a extenção correta, apenas retorne a string.
//
//Exemplos:
//    - Entrada: ("arquivo", ".ppt")
//    - Saída: "arquivo.ppt"
//
//    - Entrada: (arquivo.ppt, ".ppt")
//    - Saída: "arquivo.ppt"
//
//    - Entrada: ("arquivo.ols", ".ppt")
//    - Saída: "arquivo.ols.ppt"
//
//@return: string com o arquivo e sua extensão.

string modificar_extencao(string nome_arq, string extencao){
    return "";
}

//@end

//@tests
void tests(){
    cerr << "#open modificar_extencao BRONZE IF FOR STRING" << endl;
    cerr << (modificar_extencao("arquivo",".odt") == "arquivo.odt");
    cerr << (modificar_extencao("arquivo",".xls") == "arquivo.xls");
    cerr << (modificar_extencao("arquivo.ppt",".odt") == "arquivo.ppt.odt");
    cerr << (modificar_extencao("arquivo.exe",".exe") == "arquivo.exe");
    cerr << (modificar_extencao("a",".out") == "a.out");
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Dicas: --
