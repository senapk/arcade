#include <motor.h>
#include <iostream>
using namespace std;
#include <string.h>
#include <cmath>

namespace _1_soma_condicional{

    //Questão 01 - Faça uma função que retorne quantos números ímpares e divisíveis por 3 existem entre 0 e 500.
    //Questão 02 - Faça uma função que retorna quantos número divisíveis por 3 existem entre x e y (incluindo y).
    //Questão 03 - Faça uma função que conte quantos números divisíveis por 2, 3 e x, existem entre y e z.
    //@return: retorna um int
    //Questão 01
    int impares_3_500(){
        return 1;
    }

    //Questão 02
    int contar_div3(int x, int y){
        return 1;
    }

    //Questão 03
    int contar_div23x(int x, int y, int z){
        return 1;
    }

}

namespace _1_soma_criterio{

    //#Soma Critério#
    //Faça uma função que retorne a soma dos primeiros x
    //números naturais que sejam divisíveis
    //por 3 mas que não sejam divisíveis por 7.
    //

    int soma_divisiveis(int x){
    	return 0;
    }

}

namespace _1_somas{

    //Questão 01 - Faça uma função que soma de todos os números de ZERO até o numero inteiro positivo passado.
    //@return: Soma de todos os números de 0 a N.
    //
    //Questão 02 - Faça uma função que soma todos os números de x até y, incluindo os números x e y.
    //@return: Soma de todos os números de x a y.
    //Questão 01
    int somatorio_0_a_num(int num){
        return 0;
    }

    //Questão 02
    int somatorio_x_y(int x, int y){
        return 0;
    }

}

namespace _2_conta_digitos{

    //@completado e convertido por: Daniel Filho.

    //Joãozinho passou o dia visualizando os seus contatos no celular.
    //Logo ele decidiu fazer um programa que calcula a quantidade de vezes que um
    //determinado dígito aperece em um número de contato.
    //Apos passar uma semana tentanto ele repassou esse problema para você.

    //Exemplo:
    //Dígito buscado : 1
    //Número do contato: 99176810
    //Saída: O dígito 1 se repete 2 vezes!

    //@return: retornar um int

    int conta_digito(int busco, int numero){
    	return 0;
    }

}

namespace _2_conta{

    //Conta de água
    //
    //A empresa local de abastecimento de água, a Saneamento Básico da Cidade (SBC),
    //está promovendo uma campanha de conservação de água, distribuindo cartilhas e
    //promovendo ações demonstrando a importância da água para a vida e para o meio ambiente.
    //
    //Para incentivar mais ainda a economia de água, a SBC alterou os preços de seu
    //fornecimento de forma que, proporcionalmente, aqueles clientes que consumirem
    //menos água paguem menos pelo metro cúbico. Todo cliente paga mensalmente uma
    //assinatura de R$ 7, que inclui uma franquia de 10 m³ de água. Isto é, para qualquer
    //consumo entre 0 e 10 m³ , o consumidor paga a mesma quantia de R$ 7 reais
    //(note que o valor da assinatura deve ser pago mesmo que o consumidor não tenha consumido água).
    //Acima de 10 m³ cada metro cúbico subsequente tem um valor diferente, dependendo
    //da faixa de consumo. A SBC cobra apenas por quantidades inteiras de metros cúbicos
    //consumidos. A tabela abaixo especifica o preço por metro cúbico para cada faixa de consumo:

    //Faixa de consumo (m³)   Preço (m³)
    //até 10                  incluído na franquia
    //11 a 30                 R$ 1
    //31 a 100                R$ 2
    //101 em diante           R$ 5

    //Assim, por exemplo, se o consumo foi de 120 m³ , o valor da conta é:
    //
    //7 reais da assinatura básica;
    //20 reais pelo consumo no intervalo 11 - 30 m³;
    //140 reais pelo consumo no intervalo 31 - 100 m³;
    //100 reais pelo consumo no intervalo 101 - 120 m³.
    //Logo o valor total da conta de água é R$ 267.

    //@return:
    int conta(int n){
        return 0;
    }


}

namespace _2_eh_primo{

    //Diga se um numero e primo ou não.
    //@return: retorna um bool.
    bool eh_primo(int numero) {
    	return true;
    }

}

namespace _2_fatorial{

    //Faca um programa que calcule o fatorial de um numero
    //@return: retorna um valor inteiro.
    int fatorial(int numero) {
        return 0;
    }

}

namespace _2_multiplos_3_5{

    //@convertido por: Daniel Filho

    // Faça uma função capaz de somar todos os números naturais abaixo de 10 que são múltiplos de 3 ou 5,
    // temos 3, 5, 6 e 9. A soma desses múltiplos é 23.
    // Determine a soma de todos os múltiplos de 3 ou 5, inferior ao número X.
    //
    //@return: int referente a soma dos múltiplos.

    int mult_3_5(int x){
        return 0;
    }

}

namespace _2_numeracao_porta{

    //@completada por: Daniel Filho.

    //Zordon foi contratado para trabalhar em um hotel em Quixadá.
    //Nesse hotel os quartos são numerados seguindo a sequência de Fibonacci, sendo que as 2 primeiras portas
    //são de um mesmo quarto, logo elas possuem a mesma numeração.
    //Logo para saber qual o número da 10º porta, por exemplo, é necessário saber qual o
    //número na 10º posição na sequência de fibonacci...
    //Ex: Porta: 1 possui a numeração 1.
    //    Porta: 2 possui a numeração 1.
    //    Porta: 3 possui a numeração 2.
    //    Porta: 4 possui a numeração 3.
    //    Porta: 5 possui a numeração 5.
    //    Porta: 6 possui a numeração 8.
    //    Porta: 7 possui a numeração 13.
    //Assim por diante...
    //Zordon, por estar muito ocupado, pediu para você fazer uma função que recebe a posição de uma porta
    //e retorna qual o numeração dela.
    //
    //@return: int

    int numeracao_porta(int posicao){
    	return 0;
    }

}

namespace _2_soma_fib{

    //@completado e convertido por: Mikael Lemos

    // A série de fibonatti é 1 2 3 5 8 ...
    // A soma dos 3 primeiros termos é 6
    // retorne o valor da soma de todos os termos até n

    //@return: returna um inteiro
    int fibo(int n){
        return 0;
    }

}

namespace _3_binario_decimal{

    //@completado e convertido por: Mikael Lemos

    //Faça uma função que receba um número de base 2 e o converta
    //para a base decimal e vice-versa.

    //Exemplo :
    //Entrada: 10  >>   2
    //Saida:   2   >>   10

    //@return: retorna um inteiro
    int binario_decimal(int numero)
    {
    	return 0;
    }

    int decimal_binario(int numero)
    {
        return 0;
    }

}

namespace _3_bissexto{

    //@completado e convertido por: Mikael Lemos

    //Um ano é dito bisexto quando se acrescenta um dia ao mês de fevereiro. Isso
    //acontece porque um ano tem 365 dias e 6 horas aproximadamente. Com isso, ao
    //final de 4 anos, ficamos com um dia de adiantamento. Para compensar esse dia,
    //acrescentamos o dia 29 de fevereiro e assim "gastamos" o dia extra. Além disso,
    //Como seria chato fazer uma função que diz se um ano comum é bisexto ou não,
    //implemente uma que recebe um número gigante de até 1000 dígitos
    //em formato de String e diz se ele é bisexto ou não;

    //Exemplo:
    //Ano testado: 2004
    //Saida: True

    //@return: retornar um bool;

    bool eh_bissexto(string num) {
        return false;
    }

}

namespace _3_eh_quadrado{

    //Um quadrado perfeito é um número natural cuja raiz quadrada também
    //pertence aos naturais. O conjunto dos quadrados perfeitos são {1, 4, 9, 16, 25, 36,49,...}.
    //Dado um inteiro de entrada determinar, sem uso de operadores reais
    //(como raiz quadrada, por exemplo), se ele é retorne verdadeiro senão retorne falso.
    //@return: return true ou false.
    bool eh_quadrado_perfeito(int num){
    	return true;
    }

}

namespace _3_fetuccine{

    //@completado e convertido por: Mikael Lemos

    //A serie FETUCCINE é gerada apartir da seguinte forma: os dois primeiros
    //termos são passados como parametros e a partir dai, os termos são gerados
    //com a soma ou subtração dos dois termos anteriores, ou seja,
    //A de N = A de (N-1) + A de (N-2) se Impar e A de N= A de (N-1) - A de (N-2) se Par...

    int fetuccine(int a1, int a2, int enesimo)
    {
        return 0;
    }

}

namespace _3_inversao_numeros{

    //@completado e convertido por: Mikael Lemos

    //inverto o numero inteiro passado

    //Exemplo:
    //Entrada: 1234
    //Saida: 4321

    //@return: retorna um inteiro

    int espelho_de_numeros(int numero)
    {
        return 0;
    }

}

namespace _3_mdc{

    // Faça uma função que calcula o MDC de dois numeros qualquer.
    // O MDC é o Maior numero que divide os dois numeros,
    // ele é menor ou igual ao menor dos dois numeros.

    //@return: int

    int mdc(int a, int b){
        return 0;
    }

}

namespace _3_naoprimo_primo{

    //Faça uma função que dado um inteiro N como entrada, determinar no conjunto {1 · · · N} a soma
    //de todos os não-primos subtraída da soma dos primos.
    //@return: retorna um inteiro

    bool isPrimo(int n){
    	return true;
    }

    int nao_primo_menos_primo(int num)
    {
        return 0;
    }

}

namespace _3_palindrome{

    //@autor: Daniel Filho.

    //A bordo da Enterprise Spok recebeu a missão de explorar novos planetas.
    //Cada planeta é tem um indentificador(ID) único.
    //Como o combustível da nave está pouco, Spok dicidiu explorar
    //apenas planetas que possuem ID palindrome.
    //Então ele pediu pra você fazer uma função que recebe um inteiro referente ao ID
    //de um planeta e retorne true se o ID é palindrome e false caso contrário.
    //
    //Obs.: Um número é palindrome quando o seu inverso é igual a ele.
    //Ex.: 121 é palindrome pois seu inverso é 121.
    //
    //@return: bool
    bool id_palindrome(int id){
        return false;
    }

}

namespace _3_permutacao{

    //@completado e convertido por: Mikael Lemos

    //Verifique se um numero é permutação de outro, um numero é permutação de outro caso todos seus
    //algarismos sejam os mesmos do outro indenpendente da ordem.
    //A função conta_digito(), lhe ajudará nessa questão.

    //Exemplo:
    //1234 é de 4321, 1234, 3241, ...

    int conta_digito(int busco,int numero)
    {
        return 0;
    }

    bool permutacao(int a, int b)
    {
        return true;
    }

}

namespace _3_rotaciona_crip{

    //@convertido por: Daniel Filho.

    //Faça uma função que Rotacione todos os algarismos de um número N.
    //Uma rotação de algarismo funciona da seguinte forma:
    //Caso o algarismo seja 2 e seja feita 2 rotações sobre ele então
    //a saída sérá 4 pois 2 + 2( número de rotações ) é igual a 4.
    //
    //Obs: Caso o algarismo depois da rotação ultrapasse 9 então a rotação continua apartir de 0.
    //Ex.: 9 com 2 rotações == 1
    //     9 com 1 rotação == 0
    //     1234 com 2 rotações  == 3456
    //     12 com 1 rotações  == 23
    //     15 com 3 rotações == 48
    //     92 com 1 rotações == 03
    //     57 com 4 rotações == 91

    //@return: int

    int rotaciona_crip(int numero, int rotacao){
        return 0;
    }


}

namespace _3_rotacoes{

    //@completado e convertido por: Mikael Lemos

    // Rotação-Direita
    //A rotação de um número inteiro consiste na transferência de um dígito de
    //uma extremidade deste número para a outra. A rotação à direita, ou RD, retira o
    //dígito mais a esquerda e o coloca mais a direita. Por exemplo, RD(1234) = 2341.

    // Rotação-Esquerda
    //A rotação à esquerda, ou RE, retira o dígito mais a direita e o coloca mais à
    //esquerda. Por exemplo, RE(1234) = 4123.

    int RD(int numero)
    {
    	return 0;
    }

    int RE(int numero)
    {
    	return 0;
    }

}

namespace _3_soma_achados{

    //Questão 01: Faça uma função que retorna a soma dos 4 primeiros números pares após o número x.
    //Questão 02: Faça uma função que retorna a soma dos 10 primeiros números divisíveis por 3 depois do número x
    //Questão 03: Faça uma função que retorna a soma dos y primeiros números divisíveis por z depois do número x

    int soma4(int x){
    	return 0;
    }

    //Questão 02
    int soma10(int x){
    	return 0;
    }

    //Questão 03
    int somaxyz(int x, int y, int z){
    	return 0;
    }


}

namespace _3_soma_primos{

    //Faça uma função que retorne quantos primos existem entre x e y incluindo y.
    //@return: retorna um valor inteiro.
    //Função isPrimo serve como uma função auxiliar...
    bool isPrimo(int x){
    	return true;
    }

    int primeiros_primos(int x, int y){
    	return 0;
    }

}

namespace _4_numero_harmonico{

    //@completado e convertido por: Mikael Lemos

    //Escreva uma função que leia um número N, inteiro maior que zero, e retorne o
    //valor de H(número harmônico) segundo a série ao lado com N termos. H=(1)+(1/2)+(1/3)+(1/4)+...+(1/N).

    //@return: retorna um float

    float numero_harmonico(int n)
    {
        return 0.0;
    }

}
