#include <motor.h>
#include <math.h>
using namespace std;
#include <iostream>

namespace _conversao_temperatura{

    //Faça um código que converta entre Celsius, Farenheit e Kelvin.
    //Ele deve receber um valor e duas escalas. A primeira escala
    //eh a do valor atual e a segunda a do valor desejado.
    //Exemplo:  converter(0, CELSIUS, KELVIN) deve dar 273.
    //Pois 0 CELSIUS equivale a 273 KELVIN
    //@return: A função retorna um double.

    enum Escala {CELSIUS, FARENHEIT, KELVIN};

    //essas são as sugestões de protótipo, mas só o metodo converter serah testado

    double celsius_faren(float valor) {
        return 0.0;
    }
    double faren_celsius(float valor) {
        return 0.0;
    }
    double celsius_kelvin(float valor) {
        return 0.0;
    }
    double kelvin_celsius(float valor) {
        return 0.0;
    }
    double converter(float valor, Escala escala_entrada, Escala escala_saida){
        return 0.0;
    }

}

namespace _dia_semana_ninja{

    //## Desafio ninja ##
    //Faca um código que receba dia mes e ano e retorne o dia da semana.
    //A continha é bem legal porém trabalhosa.
    // Você pode descobrir como fazer acessando esse site:
    // http://goo.gl/yJj5iG
    //@return: retorna um enum

    enum DiaDaSemana{ SEG = 0, TER, QUA, QUI, SEX, SAB, DOM};

    DiaDaSemana calcular_dia_da_semana(int dia, int mes, int ano) {
        return SEG;
    }

}

namespace _esta_trabalhando{

    //Um funcionário trabalha de segunda a sexta, de 8 até 12 e de 14 até 18.
    //No sabado ele trabalho de 8 até 12.
    //Faça uma função que retorna true se o funcionário está trabalhando.

    enum Dia{SEG, TER, QUA, QUI, SEX, SAB, DOM};

    bool esta_trabalhando(Dia dia, int hora){
        return false;
    }

}

namespace _imc{

    //Faça um programa que calcula o IMC (índice da massa corpórea) de uma
    //pessoa e use esse IMC para informar o nível de obesidade.
    //
    //O IMC é calculado com o peso em kg, dividido pelo quadrado da altura,
    //em metros, IMC = Peso/Altura².
    //De acordo com o IMC calculado, o nível de obesidade é obtido de acordo com
    //a tabela abaixo:
    //
    //Abaixo de 17        Muito abaixo do peso
    //Entre 17 e 18,49    Abaixo do peso
    //Entre 18,5 e 24,99  Peso normal
    //Entre 25 e 29,99    Acima do peso
    //Entre 30 e 34,99    Obesidade I
    //Entre 35 e 39,99    Obesidade II (severa)
    //Acima de 40         Obesidade III (mórbida)
    //@return: retorna uma enum.

    enum NivelObesidade {MuitoAbaixo, Abaixo, Normal, Acima, Obeso, Severo, Morbido};

    NivelObesidade verificarPeso(float peso, float altura){
        return MuitoAbaixo;
    }

}

namespace _jokenpo{

    //Faça uma função que retorne o resultado do jogo pedra, papel e tesoura.
    //@return: EMPATE caso empate, JOGADOR1 caso o jogador 1 ganhe, JOGADOR2 caso o jogador 2 ganhe.

    enum Opcao {PEDRA, PAPEL, TESOURA};
    enum Resultado {EMPATE, JOGADOR1, JOGADOR2};
    //@return: retorna uma enum.

    Resultado quem_ganhou( Opcao jog1, Opcao jog2){
        return EMPATE;
    }

}

namespace _localizar_pais{

    //Faça um código que receba um dos países abaixo e retorne o continente
    //em que ele se encontra. Use o comando switch.
    //@return: retorna um enum.

    enum Pais { Brasil, Italia, EUA, Japao, Australia};
    enum Continente { AmericaSul, AmericaNorte, Europa, Asia, Oceania };

    Continente acharLocalizacao( Pais pais){
    	return AmericaSul;
    }

}

namespace _maior_menor_ou_meio{

    //Anakin Skywalker possui 3 irmãs, ele pediu pra você fazer um programa que verificasse
    //qual posição a idade da sua irmã Nikana está em relação as suas outras 2 irmãs.

    //@return: enum Posicao.

    enum Posicao {MAIOR, MEIO, MENOR};

    Posicao verificar_idade(int idadeNikana, int irma2, int irma3){
        return MAIOR;
    }

}

namespace _nota_prova{

    //Faça um programa que receba um valor float de uma nota entre 0 e 10
    //e retorne o resultado da disciplina.
    //Menor que 4 - Reprovado
    //Entre 4 e 7 - Final
    //Maior que 7 - Aprovado
    //Valor inválido - Erro
    //@return: retorna uma Categoria

    enum Categoria { Reprovado, Final, Aprovado, Erro};

    Categoria categoria (float nota){
    	return Erro;
    }

}

namespace _ordenacao{

    //Faça um código que receba 3 valores e retorne se eles possuem alguma
    //ordenação.
    //@return: Retorna uma enum.

    enum Ordenacao {Crescente, Decrescente, SemOrdem};

    Ordenacao ver_ordem(int A, int B, int C){
        return Crescente;
    }

}

namespace _par_impar{

    //Faça uma função que decida quem ganhou no par ou impar.
    enum Opcao {PAR, IMPAR};
    enum Resultado {JOGADOR1, JOGADOR2};

    Resultado quem_ganhou( Opcao jog1, int valor_jog1, int valor_jog2){
        return JOGADOR1;
    }

}

namespace _triangulo{

    //Faça um programa que dados 3 lados de um triângulo. O programa deverá
    //informar se os valores podem ser um triângulo. Indique, caso os lados
    //formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
    //@return: retorne um enum

    enum Triangulos {EQUILATERO, ISOSCELES, ESCALENO, NAO_TRIANGULO};

    Triangulos triangulo(int l1, int l2, int l3){
    	return NAO_TRIANGULO;
    }

}
