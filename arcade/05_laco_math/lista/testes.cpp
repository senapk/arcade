#include "questoes.cpp"

namespace _1_soma_condicional{
    //@tests
    auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};

    void tests() {
    	cerr << ("#open soma_condicional") << endl;
    	cerr << ("#set PRATA FOR IF") << endl;
    	cerr << (impares_3_500() == 83);
        cerr << endl;

        cerr << ("#open contar_div3") << endl;
        cerr << ("#set PRATA FOR IF") << endl;
        cerr << (contar_div3(10,20) == 3);
        cerr << (contar_div3(100,103) == 1);
        cerr << endl;

        cerr << ("#open contar_div23x") << endl;
        cerr << ("#set PRATA FOR IF") << endl;
        cerr << (contar_div23x(1,20,30) == 2);
        cerr << (contar_div23x(4,10,12) == 1);

    }

}

namespace _1_soma_criterio{
    //@tests
    void tests() {
        cerr << "#open soma_divisiveis" << endl;
        cerr << (soma_divisiveis(3) == 3);
        cerr << (soma_divisiveis(10) == 18);
        cerr << (soma_divisiveis(20) == 63);
    }

}

namespace _1_somas{
    //@tests
    auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};

    void tests() {
    	cerr << ("#open somatorio_0_a_num") << endl;
    	cerr << ("#set BRONZE FOR") << endl;
    	cerr << (somatorio_0_a_num(10) == 55);
        cerr << (somatorio_0_a_num(1) == 1);
        cerr << (somatorio_0_a_num(3) == 6);
        cerr << (somatorio_0_a_num(5) == 15);
        cerr << endl;

        cerr << "#open somatorio_x_y BRONZE FOR" << endl;
        cerr << (somatorio_x_y(9, 10) == 19);
        cerr << (somatorio_x_y(1, 3) == 6);
        cerr << (somatorio_x_y(4, 7) == 22);

    }

}

namespace _2_conta_digitos{
    void tests()
    {
        cerr << "#open conta_digito" << endl;
        cerr << (conta_digito(2,99102030) == 1);
        cerr << (conta_digito(1,99123321) == 2);
        cerr << (conta_digito(9,95398900) == 3);
    }

}

namespace _2_conta{
    //@tests
    void tests(){
        cerr << "#open conta BRONZE IF FOR" << endl;
        cerr << (conta(101) == 172);
        cerr << (conta(50) == 67);
        cerr << (conta(0) == 7);
        cerr << (conta(20) == 17);
    }

}

namespace _2_eh_primo{
    //@tests
    void tests() {
    	cerr << ("#open eh_primo") << endl;
    	cerr << ("#set PRATA IF FOR") << endl;
    	cerr << (eh_primo(5) == true);
    	cerr << (eh_primo(3) == true);
    	cerr << (eh_primo(0) == false);
    	cerr << (eh_primo(2) == true);
    }

}

namespace _2_fatorial{
    void tests() {
    	cerr << ("#open fatorial") << endl;
    	cerr << ("#set PRATA FOR") << endl;
    	cerr << (fatorial(1) == 1);
    	cerr << (fatorial(2) == 2);
    	cerr << (fatorial(3) == 6);
    }

}

namespace _2_multiplos_3_5{
    //@tests
    void tests(){

        cerr << "#open mult_3_5 BRONZE IF FOR" << endl;
        cerr << (mult_3_5(10) == 23);
        cerr << (mult_3_5(11) == 33);
        cerr << (mult_3_5(12) == 33);

    }

}

namespace _2_numeracao_porta{
    //@tests
    void tests(){
    	cerr << "#open numeracao_porta BRONZE" << endl;
       	cerr << (numeracao_porta(1) == 1);
    	cerr << (numeracao_porta(2) == 1);
    	cerr << (numeracao_porta(3) == 2);
    	cerr << (numeracao_porta(4) == 3);
    	cerr << (numeracao_porta(5) == 5);
    	cerr << (numeracao_porta(6) == 8);
    }

}

namespace _2_soma_fib{
    void tests()
    {
        cerr << ("#open fibonatti PRATA IF  FOR") << endl;
        cerr << (fibo(3) == 6);
        cerr << (fibo(4) == 11);
    }

}

namespace _3_binario_decimal{
    void tests()
    {
    	cerr << ("#open binario-decimal PRATA FOR") << endl;
    	cerr << (binario_decimal(0) == 0);
    	cerr << (binario_decimal(1) == 1);
    	cerr << (binario_decimal(11) == 3);
    	cerr << (decimal_binario(0) == 0);
    	cerr << (decimal_binario(1) == 1);
    	cerr << (decimal_binario(2) == 10);
    	cerr << (decimal_binario(3) == 11);
    }

}

namespace _3_bissexto{
    void tests() {

        cerr << "#open eh_bissexto BRONZE IF FOR" << endl;
        cerr << (eh_bissexto("2000") == true);
        cerr << (eh_bissexto("1188") == true);
        cerr << (eh_bissexto("2004") == true);
    }

}

namespace _3_eh_quadrado{
    //@tests
    void tests() {
    	cerr << ("#open distancia_pontos") << endl;
    	cerr << ("#set BRONZE IF FOR") << endl;
    	cerr << (eh_quadrado_perfeito(0) == false);
        cerr << (eh_quadrado_perfeito(1) == true);
        cerr << (eh_quadrado_perfeito(2) == false);
        cerr << (eh_quadrado_perfeito(3) == false);
        cerr << (eh_quadrado_perfeito(140) == false);
        cerr << (eh_quadrado_perfeito(6084) == true);
    }

}

namespace _3_fetuccine{
    void tests()
    {
    	cerr << ("#open fetuccine PRATA FOR IF ");
    	cerr << (fetuccine(1,1,10) == 5);
    	cerr << (fetuccine(1,2,10) == 7);
    	cerr << (fetuccine(3,5,10) == 19);
    }

}

namespace _3_inversao_numeros{
    void tests()
    {
        cerr << ("#open inversao PRATA IF FOR") << endl;
        cerr << (espelho_de_numeros(1234) == 4321);
        cerr << (espelho_de_numeros(43254) == 45234);
    }

}

namespace _3_mdc{
    //@tests
    void tests(){
        cerr << "#open mdc BRONZE IF FOR" << endl;
        cerr << (mdc(1,1) == 1);
        cerr << (mdc(1,2) == 1);
        cerr << (mdc(2,4) == 2);
        cerr << (mdc(20,40) == 20);
    }

}

namespace _3_naoprimo_primo{
    //@tests
    void tests() {
    	cerr << "#open nao_primo_menos_primo PRATA IF FOR" << endl;
        cerr << (nao_primo_menos_primo(0) == 0);
        cerr << (nao_primo_menos_primo(1) == 1);
        cerr << (nao_primo_menos_primo(4) == 0);
        cerr << (nao_primo_menos_primo(3) == -4);

    }

}

namespace _3_palindrome{
    //@tests
    void tests(){
        cerr << "#open id_palindrome BRONZE IF FOR" << endl;
        cerr << (id_palindrome(121) == true);
        cerr << (id_palindrome(122) == false);
        cerr << (id_palindrome(1) == true);
        cerr << (id_palindrome(11) == true);
        cerr << (id_palindrome(1235321) == true);
    }

}

namespace _3_permutacao{
    void tests()
    {
        cerr << ("#open permutacao BRONZE IF FOR ") << endl;
        cerr << (permutacao(1,1) == true);
        cerr << (permutacao(1,2) == false);
        cerr << (permutacao(34,2) == false);
        cerr << (permutacao(1,0) == false);
        cerr << (permutacao(1234,2314) == true);
    }

}

namespace _3_rotaciona_crip{
    //@tests
    void tests(){
        cerr << "#open rotaciona_crip BRONZE IF FOR" << endl;
        cerr << (rotaciona_crip(1,2) == 3);
        cerr << (rotaciona_crip(13,2) == 35);
        cerr << (rotaciona_crip(9,2) == 1);
        cerr << (rotaciona_crip(9,1) == 0);
    }

}

namespace _3_rotacoes{
    void tests()
    {
    	cerr <<("#open rotacoes PRATA FOR IF") << endl;
    	cerr << (RE(1234) == 4123);
    	cerr << (RE(4234) == 4423);
    	cerr << (RD(1234) == 2341);
    	cerr << (RD(2345) == 3452);
    	cerr << (RD(1112) == 1121);
    }

}

namespace _3_soma_achados{
    //@tests
    void tests(){

    	//Questão 01
        cerr << "#open soma4 BRONZE IF FOR" << endl;
        cerr << (soma4(1) == 20);
        cerr << (soma4(8) == 52);
        cerr << endl;

    	//Questão 02
        cerr << "#open soma10 BRONZE IF FOR" << endl;
        cerr << (soma10(0) == 165);
        cerr << (soma10(3) == 195);
        cerr << endl;

    	//Questão 03
        cerr << "#open somaxyz BRONZE IF FOR" << endl;
        cerr << (somaxyz(20,3,2) == 72);
        cerr << (somaxyz(0,1,2) == 2);
    	cerr << endl;

    }

}

namespace _3_soma_primos{
    //@tests
    auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};

    void tests() {
    	cerr << ("#open soma_primos") << endl;
    	cerr << ("#set BRONZE IF FOR") << endl;
        cerr << (primeiros_primos(1, 5) == 3);
        cerr << (primeiros_primos(6, 12) == 2);
        cerr << (primeiros_primos(11, 18) == 2);
    }

}

namespace _4_numero_harmonico{
    void tests()
    {
        cerr << ("#open numero_harmonico PRATA FOR");
        cerr << (numero_harmonico(3) > 1.83 && numero_harmonico(3) < 1.84);
        cerr << (numero_harmonico(6) > 2.45 && numero_harmonico(6) < 2.46);
    }

}

//@question 1_soma_condicional

//Use uma variável que será usada como contador e incremente ela quando o numero for divisível pelos
//parâmetros passados.
//Depois retorne essa variável.

//@question 1_soma_criterio

//Use o operador de módulo (%) para saber se um
//numéro é divisível por outro. Use uma variável
//auxiliar para guardar a soma.

//@question 1_somas

//Use uma variável auxiliar que guarda a soma de cada número interado em um laço.

//@question 2_conta_digitos

//Dica: Para pegar o primeiro numero da direita pra esquerda no valor,
//você pode usar o operador MOD, depois é só pegar todos
//e verificar a ocorrencia de um outro numero

//@question 2_conta

//Dica: Compare os valores em um laço com n > 10, pois o 10 já é o padrão da franquia.

//@question 2_eh_primo

//Um número só é primo quando é divisível por 1 e por ele msm,
//então se as demais divisões forem exatas, ele não será primo.

//@question 2_fatorial

//O fatorial de um número é sua multiplicação pelos demais números
//em ordem decrescente até o 1.
//Exemplo: 5! = 5 * 4 * 3 * 2 * 1 OU 1 * 2 * 3 * 4 * 5 = 120
//Lembrando que a ordem não altera o resultado.

//@question 2_numeracao_porta

// Para obter a serie de fibonnaci, você precisa de 3 variaveis, a primeira referente ao valor que voce vai "aumentar",
// a segunda referente ao seu anterior e a ultima referente a anterior da anterior, para "aumentar" a primeira você
// precisa das outras duas, depois que aumenta-la, você precisa atualizar o valor das outras duas corretamente, para lembra-lo
// a serie de fibonnaci é a seguinte:
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, … (podendo ser omitido o zero inicial).

//@question 2_soma_fib

// A sequencia de fibonatti leva em conta a soma dos dois termos anteriores
// a partir da terceira posição, se forem a posicao 1 e 2, estes tem valor
// diferenciado, respectivamente 1 e 2.

//@question 3_binario_decimal

//Dica Binario-decimal: Existe uma tecnica para se converter de binario pra decimal que consiste em:
//você coloca todos os 0s e 1s numa fila, depois acima deles é só colocar todas as potencias de 2 comerçando pelo 1
//acima deles da direita pra esquerda, depois é só somar aquelas potencias que estiverem com um 1 abaixo e você terá
//seu resultado:
//Multiplos>>>   64  32  16  8 4 2 1
//Binario>>>>>   0   1   0   1 1 0 1
//ou seja, o numero 0101101 em decimal é 32 + 8 + 4 + 1 = 45

//Dica Decimal-binario: voce pegara o modulo de 2 do numero e saira adicionando da
//esquerda para a direita, depois você dividirá por 2 até que o numero não seja mais divisivel.

//@question 3_bissexto

//Dica: Os anos bissexto são múltiplos de 4 e não múltiplos de 100,
//mas podem ser múltiplos de 400.

//@question 3_eh_quadrado

//Para saber mais sobre os quadrados perfeitos acesse:
//http://clubes.obmep.org.br/blog/quadrado-perfeito/

//@question 3_fetuccine

//Você vai criar uma condição
//que executará de uma forma caso o indice do numero for impar e de outra forma caso for par, para os dois primeiros
//valores iguais a 1 ou sejá, 1º igual a 1 e o 2º igul a 1 a seguência fica da seguinte forma:
//1 , 1 , 2 , 1 , 3 , 2 , 5 , 3 , 8 , 5...

//@question 3_inversao_numeros

//Dica: Você criar uma variavel auxiliar, depois adicionaria nessa variavel,
//o modulo de 10 do numero, onde ele daria o valor do ultimo algarismo,
//dividiria por 10, e continuaria o processo adicionando sempre o ultimo numero
//a variavel, lembrando de tratar as posições de cada um.

//@question 3_mdc

//Vai dividindo até encontrar um numero que sejá igual ou menor ao menor dos dois numeros que divide os dois,
//talvez sejá preciso vc ir armazenando o que dar pra dividir, caso nenhum que é igual ao menor dar pra dividir.
//Para saber mais acesse:
//http://www.somatematica.com.br/fundam/mdc.php

//@question 3_naoprimo_primo

//tips: Faça uma função auxiliar que recebe um número por parâmetro e retorna se ele é primo ou não.
//Use a função citada a cima em um laço e se o número for primo some ele em uma variável auxiliar, se não some
//com outra variável auxiliar depois retorne a diferença entre as duas.

//@question 3_palindrome

//Para saber mais sobre números palindromos acesse:
//http://matematicaenigmatica.blogspot.com.br/2009/11/numeros-palindromos-ou-capicua.html

//@question 3_permutacao

//Você tem apenas que saber quantas vezes um determinado numero aparece no primeiro valor e no segundo valor,
//caso essa quandidade sejam diferentes, você retorn false, faça isso para todos os numeros do primeiro ou segundo valor..

//@question 3_rotacoes

//Dica RE: Você só precisa retirar o primeira numero da direita para a esquerda,
//"transforma-lo" usando uma "grandeza" e soma-lo ao resto que sobrar

//Dica RD: Retire o primeiro numero da esquerda pra direita e some esse
//numero ao valor que restar depois da remorção.

//@question 3_soma_achados

//Dica: Se lembre do operador de módulo ( % ) que retorna do resto da divisão de um número por outro.

//@question 3_soma_primos

//Faça uma função auxiliar que retorne true ou false se o numero passado for primo ou não.
//Use essa função auxiliar para cada elemento i entre x+1 e y.
//Se o numero for primo incremente um contador e no final retorne o mesmo.
//Para saber mais sobre os números primos acesse:
//http://www.somatematica.com.br/fundam/primos.php

//@question 4_numero_harmonico

//Na fração, o numerador é constante e o denominador e variante.

int main(){
    _1_soma_condicional::tests();
    _1_soma_criterio::tests();
    _1_somas::tests();
    _2_conta_digitos::tests();
    _2_conta::tests();
    _2_eh_primo::tests();
    _2_fatorial::tests();
    _2_multiplos_3_5::tests();
    _2_numeracao_porta::tests();
    _2_soma_fib::tests();
    _3_binario_decimal::tests();
    _3_bissexto::tests();
    _3_eh_quadrado::tests();
    _3_fetuccine::tests();
    _3_inversao_numeros::tests();
    _3_mdc::tests();
    _3_naoprimo_primo::tests();
    _3_palindrome::tests();
    _3_permutacao::tests();
    _3_rotaciona_crip::tests();
    _3_rotacoes::tests();
    _3_soma_achados::tests();
    _3_soma_primos::tests();
    _4_numero_harmonico::tests();
    cerr << "#end" << endl;
    return 0;
}
