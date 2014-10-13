#include <iostream>
#include <vector>
#include <motor.h>
using namespace std;
#include <algorithm>
//@autor Bruno Barreto;
//@autor Bruno Barreto, David Sena
#include <cmath>
#include <string>
#include <cctype>

namespace _1_maior_menor{

    //Faca uma funcao que retorne a soma do maior com o menor elemento
    int soma_maior_menor(vector<int> vet){
        return 0;
    }

}

namespace _2_big_div_11{

    //#BigNumber#
    //A linguegem C++ não suporta números muito grandes. O tipo inteiro (int),
    //por exemplo, suporta 4294967295 números diferentes. Pensando nisso, uma alternativa
    //à representação de números grandes (Big numbers) é o uso de Strings. Mas como realizar
    //operações com estes números? Começe com uma operação simples, faça uma função que
    //receba um número gigante com até 1000 casas e retorne true se ele é divisível
    //por 11. Existem formas para se determinar essa divisibilidade. Pesquise um pouco.
    //Dica: Um número é divisível por 11 se a soma dos algarísmos de posição par
    //subtraída da soma dos algarísmos de posição ímpar resultar 0 ou um número
    //divisível por 11.

    bool eh_divisivel_por_11(string num){
        return false;
    }

}

namespace _2_blackjack{

    //Faca uma funcao que conte o valor de uma mão de blackjack.
    //Ela recebe um vetor de cartas e calcula usando as seguntes
    //regras. K, Q e J valem 10 pontos. AS vale 11 pontos. As
    //outras cartas valem seu proprio valor.
    //Se a soma de pontos for maior que 21, o As passa a valer
    //1 ponto, diminuindo a soma total para o valor tentar
    //baixar para menos de 21.
    //
    //No vetor de inteiros mao, o valor 1, 11, 12 e 13
    //sao o A, J, Q, K

    int blackjack(vector<int> mao){
        return 0;
    }

}

namespace _2_decompor{

    // Marquinhos está para ficar louco. Hermeneutico desafiou ele a fazer um código
    // que quebra inteiros em um vetor. Mas essa tarefa aparentemente simples está
    // acabando com os miolos de Marquinhos. Por favor, ajudar Marquinhos a recuperar
    // sua paz de espirito fazendo esse código pra ele.
    // Ex: 1235 -> {1, 2, 3, 5};
    vector<int> decompor_int(int num){
        return vector<int>();
    }

}

namespace _2_esta_contido{

    //#Está Contido#
    //Descubra se o vetor v1 está contido em v2 e retorne true se isso ocorrer.

    bool esta_contido(vector<int> maior, vector<int> menor){
        return false;
    }

}

namespace _2_inverter{

    // Faça uma função que inverta um vetor passado por parametro. Voce receberá um vetor
    // e deve retornar uma novo vetor invertido.
    // \param vet : o vetor recebido
    // \return um novo vetor invertido
    //
    // Nao use o std::reverse, faça primeiramente na forma manual
    //
    vector<int> reverse(const vector<int> vet)
    {
        return vector<int>();
    }

}

namespace _2_mediana{

    //O cálculo da mediana consiste em descobrir qual o valor intermediário
    //do vetor. No vetor v = {1, 2, 3}, por exemplo, a mediana é 2, pois este
    //é o elemento de valor intermediário. Se houver mais de um valor
    //intermediário, a mediana será a média aritimética entre eles.
    //
    //Você pode usar a função erase do vetor.
    //Depois que conseguir, tente usando a função sort da std

    float mediana(vector<float> vet){
        return 0.0;
    }

}

namespace _2_media{

    /*
       O seu professor de FUP está curioso para saber a média das notas da sua turma.
       Para isso, ele armazenou as notas em um vetor e agora pede sua ajuda para
       implementar uma função que retorna a media aritimética dos valores contidos em
       um vetor.
       */

    float media(vector<float> vet) {
        return 0.0;
    }

}

namespace _2_pegar_sem_par{

    //@autor: Bruno Barreto Freitas;

    /*
        Crie uma função que, ao receber um vetor de animais, em que
        cada espécie é representada por um número inteiro, retorne
        um vetor com os animais que não pussem par.
        Exemplo:
        vetor = [1 2 3 2 4 6 1 8 1 3 2 7 6 7]
        resultado = [1 2 4 8]
        Note que um animal não pode fazer par com mais de um animal.
        @return: vector<int>
    */

    vector<int> pegar_sem_par(vector<int> vet){
        return vector<int>();
    }


}

namespace _2_pegar_sozinhos{

    //O dono do zoologico quer a lista de todos os animais do zoologico
    //que possuiem apenas um exemplar de cada especie.
    //Para isso ele te deu uma lista de todos os animais.
    //Ele quer que você faça um programa que retorne uma
    //nova lista contendo apenas as especies que contem apenas um exemplar.
    //Considere que um número representa uma especie.
    //Devolva um novo vetor ordenado das especies que só tem um exemplar.
    //Voce pode usar o sort da std para ordenar.

    vector<int> pegar_sozinhos(vector<int> vet){
        return vector<int>();
    }

}

namespace _3_busca_binaria{

    /*Busca binária
    Até agora você fez as implementações sem se preocupar com a rapidez e aficiência
    de suas funções, pontos escenciais de um bom programa. Na sua função "existe()", por exemplo,
    você teve que percorrer todo o vetor em busca do elemento procurado. em um vetor muito grande
    isso pode levar muito tempo. Uma alternativa é a busca binária, que reduz bastante o tempo de busca
    de um elemento em um vetor.
    Para entender esse algorítmo de busca, imagine um livro de 1024
    páginas, onde você busca a página 100. Você abriu o livro exatamente no meio dividindo-o em dois
    e encontrou a página 512. Você irá se preocupar agora, apenas com a primeira metade do livro,
    já que 100 é menor que 512. Com essa metade do livro em mãos, você a dividiu novamente
    em duas partes e encontrou a página 256. Continuando com este algorítmo
    dividindo as páginas em duas metades e escolhendo sempre
    a metade correta, você logo encontrará a página 100. Isso só é possivel,
    é claro, porque as páginas estão em ordem.
    Implemente uma função que faça a busca de um elemento utilizando o
    algorítmo citado acima e retorne true se o elemento existir.
     */

    bool existe_busca_bin(vector<int> v, int elem) {
        return false;
    }

}

namespace _3_cjto_diferenca{

    /*
    Implemente uma função que descubra e retorne quantos elementos fazem
    parte do vetor v1 e não fazem parte do vetor v2. Elementos repetidos
    contam como apenas um elemento.
    */
    vector<int> diferenca(vector<int> maior, vector<int> menor){
        return vector<int>();
    }

}

namespace _3_duplas_multiplicadas{

    /*Duplas Multiplicadas.
      Dado um número n, apresente todas as duplas que multiplicadas
      dão n. Não repita duplas
    ex:  num 6: {1, 6}, {2, 3}
    num 45: {1, 45}, {3, 15}, {5, 9}
    */

    struct Pair{
        int x;
        int y;
    };

    vector<Pair> buscar_duplas(int n){
        return vector<Pair>();
    }

    bool operator==(vector<Pair> a, vector<Pair> b)
    {
        if(a.size() != b.size())
            return false;
        for(int i = 0; i < (int)a.size(); i++)
            if(a[i].x != b[i].x or a[i].y != b[i].y)
                return false;
        return true;
    }

}

namespace _3_fatorar_primos{

    // Meriosvaldo quer quebrar a senha do computador do seu irmão. Descobriu que o
    // arquivo de senhas foi cifrado com um algoritmo muito famoso chamada RSA.
    //
    // Lá na wikipedia ele leu que pra quebrar a senha ele precisa ser capaz de fatorar
    // numeros. Como Mariosvaldo não estudou pra ir pra faculdade, quer que você,
    // estudante de programação resolva isso pra ele.
    //
    // Faça uma função que recebe um número num maior que 1 e retorna um vetor
    // ordenado com os números que compõe a fatoração de num exceto o 1.
    // Se um fator se repetir na fatoração, repita-o no vetor.
    // Ex: num = 2 -> res {2}
    // Ex: num = 6 -> res {2, 3}
    // Ex: num = 12 -> res {2, 2, 3}
    // Ex: num = 11 -> res {11}
    // Ex: num = 60 -> res {2, 2, 3, 5}
    // \param num : o número a ser fatorado
    //
    // \return    : o vetor com o resultado da fatoração

    vector<int> fatorar_primos(int num){
        return vector<int>();
    }

}

namespace _3_fatores_comuns{

    // Papai Papudo me fez uma pergunta: dados dois números quaisquer, quais
    // os fatores em comum entre os dois.
    //
    // Apostou 10 contos de reis que eu não conseguia fazer a conta em menos
    // de 10 segundos.
    //
    // E era verdade. Mas como eu tenho um amigo programador, que é você.
    // Você vai fazer o código pra eu colocar no meu celular e a cada 10
    // contos que eu ganhar eu te dou 3. Mais do que justo naõ acha!!!
    //
    //
    // Faça uma função que determine se dois números são co primos e retorne
    // os fatores que ambos tem em comum.
    //
    // A e B são co-primos se a fatoração de ambos não tem fatores em comum.
    // Ex: A = 10, B = 21
    // A fatoração de A é {2, 5}
    // A fatoração de B é {3, 7}
    // Como A e B não tem fatores em comum então eles são co-primos.
    //
    // Ex2: A = 15, B = 21
    // A = {3, 5}, B = {3, 7}
    // Como ambos tem o fator 3, então eles não são co-primos.
    //
    // A = 8 e B = 4, deve gerar como saida apenas uma vez o número
    // {2}. Mesmo que a fatoração de 8 seja {2, 2, 2} e 4 seja {2, 2}.
    //
    // \param A e B : os dois números a serem avaliados
    //
    // \return      : o vetor de primos em comum. Se o vetor tiver tamanho
    //              : 0 então eles são co-primos

    vector<int> fatores_comuns(int A, int B)
    {
        return vector<int>();
    }


}

namespace _3_inserir_ordenado{

    //Sua estante tem todos os livros organizados em ordem alfabetica.
    //Para inserir um livro é necessário achar a posicao exata do livro
    //e deslocar todos os livros após essa posição para que o novo livro
    //possa entrar em seu lugar.
    //
    //Faça um código que recebe um vetor de inteiros que já está ordenado,
    //procure a posição exata do novo elemento e o adicione empurrando
    //os elementos uma posição adiante.
    //
    //Não use a função insert do vector. Faça manualmente
    //Altere o vetor recebido, não precisa retornar nenhum parametro

    void inserir_ordenado(vector<int>& vet, int elem){
        return;
    }

}

namespace _3_mdc_vetor{

    //Chiquinho estava simplificando umas equações.
    //x/a + x/b + x/c
    //
    //O professor disse que Chiquinho precisaria calcular o máximo divisor comum
    //entre a, b e c.
    //
    //Como você é amigo de Chiquinho, ele pediu logo pra você fazer um programa
    //que calcular o MDC de qualquer número de elementos.
    //
    //Faça uma função que recebe um vetor de inteiros e retorna o mdc deles.
    int mdc(vector<int> vet){
        return 0;
    }

}

namespace _3_minado_2d{

    //O objetivo desse jogo é determinar, para cada célula do tabuleiro,
    //o número de minas explosivas nos arredores da mesma (que são a própria
    //célula e as células imediatamente vizinhas à direita e à esquerda, caso
    //essas existam). Por exemplo, a figura abaixo ilustra uma possível
    //configuração de um tabuleiro com 6 células. E o vetor de proximidade que
    //eh gerado pela soma da celula atual com as vizinhas
    //
    // [0 1 0 0 0 1 1 1 0] -> minas
    // [1 1 1 0 1 2 3 2 1] -> proximidade
    //
    //Escrever um programa, dado um tabuleiro, informe o número de minas na
    //vizinhança de cada posição. Retorne esse vetor de proximidade

    vector<int> minado(vector<int> vet){
        return vector<int>();
    }

}

namespace _3_pa_ou_pg{

    /*Q Próximo termo Q*/
    /*T
      Atanagildetina é uma estudante de programação. Seu professor deu-lhe uma
      sequência de números inteiros e pediu uma função que retornasse o próximo elemento
      desta seqência. Mas o professor troll "esqueceu" de dizer a ela qual a razão entre os
      termos e se a sequência é uma progressão aritimética ou geométrica.
      Por exemplo, a sequência {1, 3, 5, 7}, é uma progressão ARITIMÉTICA de razão
      2, já a sequência {1, 2, 4, 8} é uma progresão GEOMÉTRICA de razão 2.
      Ajude Atanagildetina a fazer esta função que recebe uma sequência de inteiros
      e deduz a razão e a operação a ser feita e retorna o próximo termo. Considere
      que o vetor terá pelomenos 3 termos.
    Dica: teste a diferença entre o primeiro termo e o segundo e veja se é
    a mesa entre o segundo e o terceiro. Caso seja, esta será a razão
    de uma sequência aritimética. Se não, teste o quociente entre os termos
    visinhos.
    T*/

    int proximo_termo(vector<int> v) {
        return 0;
    }

}

namespace _3_pegar_exemplares{

    //O dono do zoologico quer a lista de todas as especies de animais
    //que existem no zoologico. Para isso ele te deu uma lista de todos
    //os animais. Ele quer que você faça um programa que retorne uma
    //nova lista contendo apenas um animal de cada especie.
    //Considere que um número representa uma especie.
    //Devolva um novo vetor, sem números repetidos e ordenado.
    //Voce pode usar o sort da std para ordenar.

    vector<int> pegar_exemplares(vector<int> vet){
        return vector<int>();
    }

}

namespace _3_remover_puxando{

    /*
        Numa biblioteca, quando tiramos um livro do meio da prateleira todos os livros caem.
        Para deixar organizado é importante reorganizar os livros puxando pra onde ficou
        o buraco.

        Nesse código você receberá um vetor de inteiros e terá que se livrar do elemento
        que for pedido.

        Faça isso levando o elemento pro fim do vetor fazendo swaps com todos que estiverem
        após ele e por fim de um pop_back para se livrar do vetor.

        O vector tem uma função erase pra fazer isso, mas não a utilize

        Se o elemento não existir no vetor retorne false.
    */
    bool remover_puxando(vector<int>& vet, int elem) {
        return false;
    }

}

namespace _3_selection_sort{

    /*Q Ordenação Q*/

    /*T
      Mesmo com a sua função de inserir ordenado, alguns professores não
      utilizaram essa função e foram adicionando mais notas sem se preocupar
      com a ordem. Pensando nisso, implemente uma função que reordena o vetor
      de notas passado como parametro e retorne o vetor ordenado.

      Uma opção de algoritmo de ordenação e o selection sort, onde percore-se
      o vetor e encontra-se o menor elemento, que é colocado na primeira posição
      do vetor. Uma nova busca é realizada nos elementos restantes em busca do menor
      entre eles, quando encontrado é colocado na segunda posição do vetor. Seguindo
      esse algoritmo até o final do vetor, é garantida a ordenação.
      T*/

    vector<int> ordenar(vector<int> v) {
        return vector<int>();
    }

}

namespace _3_swap_onibus_topic{

    /*
    Na hora de irem pra festa um grupo de amigos encheu um onibus e uma topic.
    Acontece que alguns dos amigos que estavam no onibus queriam ir pra topic.
    Resolva esse problema trocando os amigos entre a topic e o onibus.

    No onibus ficam preferencialmente os números positivo e na topic os impares.
    Toda vez que você encontrar um número negativo no onibus, tente achar um número positivo na
    topic e troque os dois.
    Você não pode apenas transferir elementos de um pro outro porque ambos estão lotados,
    você só pode trocar.
    */

    void trocar(vector<int>& onibus, vector<int>& topic){
        return;
    }

}

namespace _4_emendar_frase{

    // Quando uma palavra começa com a mesma vogal que a palavra
    // de trás terminou é comum emendarmos a leitura.
    //
    // Exemplo: A amiga da andreia odeia alfaces.
    //
    // Quando lemos essa frase sai algo como:
    //          A miga da ndreia odeia lfaces.
    //
    // Em frances isso se chama liaison :D
    // Exemplo : Ela ama a amora.
    // Saida   : Ela ma mora
    //
    // Voce deve escrever um codigo que quando a palavra da
    // frente começa com a letra que teminou a ultima palavra
    // essa letra deve ser omitida.
    //
    // A entrada sempre sera em letra minuscula e sem pontuacao
    //
    string upper(string input){
        return "";
    }

    string remover_caractere(string frase, int indice){
        return "";
    }

    string emendar(string input){
       return "";
    }

}

namespace _4_juntar_amigos{

    // Fernando é pessimista, acha que a união nem sempre faz a força.
    // Otávio é otimista, acha que a união faz a força.
    //
    // Fernando desafiou Otávio a fazer um código simples que una inteiros.
    // Se Otávio conseguir, Fernando vai virar otimista.
    //
    // Agora Otávio está desesperado porque ele não sabe programar e quer
    // sua ajudar pra resolver o problema.
    //
    // Crie uma função que concatena elementos de um vetor para formar
    // um único número.
    // Ex: vet {1, 0, 0} deve dar como saída 100.
    // Ex: vet {1, 10, 100} deve dar como saída 110100.
    //
    // \param vet : Um vetor contendo os elementos
    //
    // \return    : O número que é resultado da concatenação entre os elementos

    long juntar_varios(vector<int> vet)
    {
        return 0;
    }


}

namespace _4_pares_sapatos{

    //38E, 41D, 39E, 39D, 40E, 41D, 42E, 41D, 38D

    //O dono de uma sapataria contratou você para resolver um grande
    //problema. Ele lhe mostrou um deposito de vários sapados do mesmo
    //modelo mais descasados os pés esquerdo e direito e os tamanhos.
    //Ele quer que você crie um programa que o diga quantos pares
    //corretos de sapatos ele tem no estoque.

    struct Sapato{
        int numero;
        char pe;
    };
    int procurar_pares(vector<Sapato> sapatos){
        return 0;
    }

}

namespace _4_remover_ninja{

    //@converti: Ítalo Bandeira
    //Faça uma função que remova TODOS elementos repetidos de um vector e
    //adicione a soma no fim, até que não haja elementos repetidos
    //{1 18 3 1 1 4 5 9 3}
    //remove os tres primeiros 1 e adiciona 3 no fim
    //{18 3 4 5 9 3 3}
    //remove os tres numeros 3 e adiciona 9 no fim
    //{18 4 5 9 9}
    //remove os dois noves
    //{18 4 5 18}
    //remove os dois dezoitos
    //{4 5 36}

    vector<int> compactar(vector<int> vet){
        return vector<int>();
    }


}

namespace _4_trios_de_bilas{

    /*
    Joaozinho olhou no seu saco de bilas procurando trios de bilas pra jogar.
    Tres bilas das mesma cor formam um trio. Quantos trios Joaozinho eh capaz
    de formar dado o saco de bilas.
    Cada valor inteiro no vetor representa uma cor de bila.
    Ex:
    [ 1, 2, 3, 1, 1, 1, 1, 2, 2, 2, 3, 1, 1]
    Temos 7 1s, que formam apenas dois trios
    Temos 4 2s, formando um trio
    Temos 2 3s, que não formam nenhum trio
    No total temos 4 trios de bilas
    Se quiser, voce pode usar as funcoes de algorithm como remove
    */

    int contar_trios(vector<int> sacola){
        return 0;
    }

}
