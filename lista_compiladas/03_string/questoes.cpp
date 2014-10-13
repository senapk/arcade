#include <iostream>
#include <motor.h>
using namespace std;
#include <string.h>
#include <string>
#include <vector>

namespace _1_char_conversao{

    //@autor David Sena

    //Essas questões de conversão de caracteres vão prepará-lo
    //para códigos mais interessantes como criptografia.

    //Dado o caracter c, que corresponde a um hexadecimal, retorne o
    //valor em inteiro.
    //ex: '1' vale 1, '9' vale 9, 'a' vale 10, 'b' 11, 'f' vale 15
    int char2hex(char c) {
        return 0;
    }

    //Retornar o valor do char usando logica do baralho, se nao
    //existir no baralho deve retornar 0
    //ex: '1' vale 1, '9' vale 9, 'j' vale 11, 'q' 12, 'k' vale 13
    int char2baralho(char c) {
        return 0;
    }

}

namespace _1_char_tipos{

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

}

namespace _1_eh_anagrama{

    //#Anagrama#
    //Faça uma função que receba duas strings e retorne true se uma for anagrama
    //da outra, ou retorne false se não for anagrama.
    //Lembre-se, uma palavra é anagrama de outra se é formada pelas mesmas letras
    //nas mesmas quantidades, mas em qualquer ordem. A entrada será composta
    //apenas de caracteres minusculos.
    //
    //EXEMPLO: alma aaml | true
    //amor roam | true
    //rio  ori | true
    //bola dama | false
    //@return: retorna um bool.

    bool eh_anagrama(string A, string B)
    {
    	return false;
    }

}

namespace _1_substring{

    //Questão:
    // Faça uma função que retorna uma substring dada a string passada
    // e a posição inicial e final.
    //
    // Ex: "Pterodactilo", 2, 5 -> "erod"
    // Ex: "Power Ranger", 4, 11 -> "r Ranger"
    //

    //@return: Substring.

    string sub_string(string palavra, int inicio, int fim){
        return "";
    }

}

namespace _2_criptografar{

    //Faça um programa para criptografar uma frase, trocando as consoantes por # e
    //invertendo a frase.
    //@return: retorna uma string;
    string criptografar (string nome){
    	return "abc";
    }

}

namespace _2_duplicar_palavras{

    //Faça um programa que receba uma frase e imprima a
    //mesma frase com as palavras repetidas.
    //Entrada: "OLA PLANETA TERRA"
    //Saida: "OLA OLA PLANETA PLANETA TERRA TERRA"
    //@return: retorna uma string.
    string duplicar_palavras(string a){
    	return "abc";
    }

}

namespace _2_inverter_string{

    //#Inverter String#
    // Faça um código que receba uma string e retorne essa
    // string ao contrário.
    // Ex: "batata frita" -> "atirf atatab"
    // Ex: "Pterodactilo" -> "olitcadoretP"
    //@return: retorna uma string.

    string inverteString(string texto){
    	return "";
    }

}

namespace _2_mudar_extensao{

    //Questão: Jaspion é um calouro de computação. Depois de ter problemas em salvar
    //seus arquivos com determinadas extenções (.pdf, .exe, .odt,...),
    //ele resolveu pedir para você fazer uma função onde ele passa o nome do arquivo
    //e a função retorna o nome do arquivo com a extenção.
    //Se o nome do arquivo já estiver com a extenção correta, apenas retorne a string.
    //
    //Exemplos:
    //	- Entrada: ("arquivo", ".ppt")
    //	- Saída: "arquivo.ppt"
    //
    //	- Entrada: (arquivo.ppt, ".ppt")
    //	- Saída: "arquivo.ppt"
    //
    //	- Entrada: ("arquivo.ols", ".ppt")
    //	- Saída: "arquivo.ols.ppt"
    //
    //@return: string com o arquivo e sua extensão.

    string modificar_extencao(string nome_arq, string extencao){
        return "";
    }

}

namespace _2_num_ocorrencias{

    //@autor David Sena
    /*
    Amora está apaixonada e quer descobrir quantas vezes em sua cartinha de amor
    aparecem palavras amorosas.

    Escreva uma função em que recebe como parâmetro uma substring e uma string e
    retorna como resultado o número de ocorrências da substring na string.
    */

    int n_substring(string menor, string maior)
    {
        return 0;
    }

}

namespace _2_retira_espaco{

    //Faça um programa que receba palavras separadas por vários espaços em
    //branco e apresente essas palavras separadas por somente um espaço.
    //@return: retorne uma string.
    string retira_espaco(string A){
    	return "abc";
    }

}

namespace _3_colisao_strings{

    //#Colisao de Strings#
    // Faça uma função que anule o final de uma string com o começo de outra como se fosse
    // uma colisão. Como se você juntasse as duas palavras, mas excluisse as letras até
    // que não sejam iguais as letras de contato
    // Ex: olho, mel -> olhomel
    // Ex: minhoca, arvore -> minhocrvore
    // Ex: pegasus, suspiro -> pegapiro
    // ex: mel, lema -> a
    //
    // \param one : a palavra da esquerda
    // \param two: a palavra da direita
    // \return     : a palavra colidida
    //@return: retorna uma string.

    string colisaoString(string one, string two)
    {
    	return "";
    }

}

namespace _3_forca_montar_palavra{

    //#Jogo da forca simulation#
    // Faça um código que simule o comportamento do jogo da forca.
    // Voce recebe como parâmetro a palavra real e todos as letras que
    // já foram chutadas pelo participante e deve retornar a palavra cifrada
    // a ser apresentada pelo programa. Nas letras não acertadas ainda, voce
    // deve colocar o caractere hided passado por parametro. Se nas palavras
    // ouver pontuação ou espaço, voce deve imprimi-los corretametente. Se
    // a letra for maiuscula, voce deve imprimir maiuscula.
    // Ex:  palavra        ,   chutes         , hided  -> saida
    // Ex: "Abacaxi"       ,  "axnpqe"        , '-'    -> "A-a-ax-"
    // Ex: "extraordinario",  "aeioubcdfgh"   , '*'    -> "e***ao*di*a*io"
    // Ex: "Teco-Teco!"    ,  "tbxyan"        , '_'    -> "T___-T___!"
    // Ex: "Seu Pilantra!" ,  "yzxa"          , '*'    -> "*** ***a***a!"
    //@return: retorna uma string.

    string forca_montar_palavra(const string palavra, const string chutes, char hided)
    {
    	return "";
    }

}

namespace _3_maior_mult{

    //@autor David Sena. Fonte: projeto Oiler

    // Na string numero existe um número de 1000 dígitos. Os quatro números
    // adjacentes que possuem o maior produto é 9x9x8x9 = 5832.
    // Encontre o número de X dígitos adjacentes que possui o maior produto.
    // Se dois números tiverem o mesmo produto, retorne o maior.
    //
    // \param digitos : o número de digitos
    // \return  : o maior número encontrado
    //
    // Obs: A string está quebrada em linhas para facilitar visualização,
    // mas ela não possui quebras de linha.

    string numero =
    "73167176531330624919225119674426574742355349194934"
    "96983520312774506326239578318016984801869478851843"
    "85861560789112949495459501737958331952853208805511"
    "12540698747158523863050715693290963295227443043557"
    "66896648950445244523161731856403098711121722383113"
    "62229893423380308135336276614282806444486645238749"
    "30358907296290491560440772390713810515859307960866"
    "70172427121883998797908792274921901699720888093776"
    "65727333001053367881220235421809751254540594752243"
    "52584907711670556013604839586446706324415722155397"
    "53697817977846174064955149290862569321978468622482"
    "83972241375657056057490261407972968652414535100474"
    "82166370484403199890008895243450658541227588666881"
    "16427171479924442928230863465674813919123162824586"
    "17866458359124566529476545682848912883142607690042"
    "24219022671055626321111109370544217506941658960408"
    "07198403850962455444362981230987879927244284909188"
    "84580156166097919133875499200524063689912560717606"
    "05886116467109405077541002256983155200055935729725"
    "71636269561882670428252483600823257530420752963450";

    long procurar_maior(int digitos){
        return 0;
    }

}

namespace _3_separa_silaba{

    //Faça um programa que receba palavras e separe suas silabas levando em
    //consideração o seguinte critério: se após uma vogal existir uma
    //não-vogal, deve-se separar a sílaba
    //@return: retorna uma string.

    string separa_silaba(string a){
    	return "abc";
    }

}

namespace _cifra_1_operacoes_basicas{

    //@autor David Sena

    //Essas questões são prerequisito para as listas de criptografia

    //Objetivo: Somar um numero a um char minusculo de forma modular
    //c+1 = d, f+3 = i,  z + 1 = a
    //Use o operador de módulo
    char soma_min( char letra, int num){
        return 0;
    }

    //Objetivo: Subtrair um numero a um char minusculo de forma modular
    //c-1 = b, f-3 = c,  a - 1 = z
    //Use o operador de módulo
    char sub_min( char letra, int num){
        return 0;
    }

    //Objetivo: Somar dois char minusculos de forma modular
    //e retornar o char resultante
    //ex : a vale 0, b vale 1 ...
    //a + a = a, b + c = d,
    char soma_2char(char letra, char codigo){
        return 0;
    }

    //Objetivo: subtrai dois char de forma modular
    //e retornar o char resultante
    char sub_2char(char letra, char codigo){
        return 0;
    }

}

namespace _cifra_2_cesar_basica{

    /*

       Essa é a primeira tarefa de criptografia. Nosso objetivo é fazer
       uma cifra clássica conhecida como cifra de César.
       Mais informações em:
       http://comp.ist.utl.pt/ec-csc/Acetatos/1-Cifra/12-CifraClassica.pdf
    */

    /*
       Dado a palavra de entrada apenas com caracteres minúsculos
       cifre utilizando a cifra de Cesar.
       Retorne o texto cifrado.

       A cifra de Cesar faz uma rotação simples de 3 posições.
       No caso, o z vira c, a vira d, etc.

       o texto possui apenas espacos e caracteres minusculos

       ex:
       "aba pai" -> "ded sdl"
     */

    string cifra_cesar(string texto){
        return "";
    }

    /*
     * Faça o código que decifra a cifra feita acima.
     */
    string decifra_cesar(string texto){
        return "";
    }

}

namespace _cifra_3_cesar_extendido{

    //@autor David Sena, Italo Bandeira

    /*
     *
     * Essa é uma ampliação da cifra de cesar.
     *
     * Agora a entrada podem ser caracteres minusculos, maiusculos, espaco e
     * pontuação. Mantenha a pontuação e os espacos e apenas altere
     * os caracteres. Minusculos permanecem minusculos e maiusculos
     * permanecem maiusculos.
     *
     * A rotação agora não é mais fixa de 3 posições. O segundo
     * parametro é um número entre 0 e 25 dizendo quantas posições
     * deve ser a rotação.
     *
     * O terceiro parametro se for true informa que deve
     * acontecer o processo de cifragem. Se for false, voce
     * deve fazer o processo de decifrar.
     *
     * Exemplo com rotação 5:
     * Entrada: So digo uma Coisa, digo e nada.
     * Saída:   Xt inlt zrf Htnxf, inlt j sfif.
     */

    string cifra_mono_boa(string texto, int rot, bool para_cifrar)
    {
        return "";
    }

}

namespace _cifra_4_poligenerica{

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


}

namespace _cifra_5_vigenere{

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



}
