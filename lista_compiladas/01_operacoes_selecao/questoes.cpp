#include <motor.h>
#include <cmath>
#include <iostream>
using namespace std;

namespace _area_triangulo{

    //Pesquise na internet sobre a fórmula de Heron, utilizada para calcular
    //a área de um triângulo a partir do tamanho de seus lados.
    // @return : o valor da área
    float area_triangulo(float a, float b, float c){
        return 0.0;
    }

}

namespace _arredondamento{

    //Receba um valor em float, e arredonde-o seguindo os critérios:
    //De x.0 até x.24, arredondar para x.0, de x.25 até x.74 arredondar para x.5
    //Maior ou igual a x.75, arredondar para cima.
    //@return: retorna um float.

    float arredondamento(float nota){
        return 0.0;
    }

}

namespace _boliche{

    //Bolas de Boliche
    //
    //Bolas de futebol são muito fáceis de transportar, já que elas saem das fábricas vazias e
    //só são enchidas somente pelas lojas ou pelos consumidores finais. Infelizmente o mesmo
    //não pode ser dito das bolas de boliche. Como elas são completamente sólidas, elas só podem
    //ser transportadas embaladas uma a uma, em caixas separadas. Escreva um programa que, dado
    //o diâmetro de uma bola e as 3 dimensões de uma caixa (altura, largura e profundidade), diz
    //se a bola de boliche cabe dentro da caixa ou não.
    //
    //Você deve retornar true caso a bola de boliche caiba dentro da caixa, se não couber retorne false.
    //@return: A funcao deve retornar um boolean.
    bool diametro_caixa(int diametro, int altura, int largura, int profundidade){
    	return false;
    }

}

namespace _calcular_desempenho{

    //Fernando lhe deu a velocidade média do carro dele em km/h,
    //o tempo da viagem em minutos e o consumo de um carro em litros
    //e pediu que você faça um programa que calcule o desempenho do
    //motor em km por litro.
    float calcular_desempenho(float vel, float tempo, float consumo){
        return 0.0;
    }

}

namespace _distancia_pontos{

    //Crie uma função que calcule a distância entre dois pontos (x1,y1) e (x2, y2)
    //em um plano cartesiano.
    //@return: Distância dos dois pontos.
    float distancia_pontos(int x1, int y1, int x2, int y2){
    	return 0.0;
    }

}

namespace _divisiveis{

    //@question
    //Faça uma função que confere se dois números, num1 e num2 são divisíveis por 3 ou por 5.
    //Se num1 e num2 forem ambos divisiveis por 3 ou forem ambos divisiveis
    //por 5 retorne true.
    //
    //Logo depois faça outra função que retorna true se o resto da divisão de num1 por num2 é
    //igual ao resto da divisão de num3 por num4 ou false caso contrário.
    //
    //@return: false ou true.
    //

    bool ambos_3_ou_ambos_5(int num1, int num2)
    {
    	return false;
    }

    bool restos_iguais( int num1, int num2, int num3, int num4)
    {
    	return false;
    }

}

namespace _maior_menor_meio{

    //Questão: Faça uma função que recebe 3 valores e retorna os valores do maior menor e do meio.
    //return: struct Result.

    struct Result{
        int maior;
        int meio;
        int menor;
    };

    Result maior_menor_meio(int one, int two, int three){
        return Result{0,0,0};
    }

}

namespace _media3{

    //Faça um programa que calcule a média de três notas.
    //@return : float

    float media( float nota1, float nota2, float nota3 ){
    	return 0;
    }

}

namespace _media_ponderada3{

    //Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a
    //média ponderada dessas notas.
    //@return: retorna um float.
    float media_ponderada( float nota1, float nota2, float nota3, float peso1, float peso2, float peso3 ){
    	return 0.0;
    }

}

namespace _modulo_condicionais{

    //Faça uma função que retorne verdadeiro se o resto da divisao do número num por 3
    //for igual a 1 e tambem num for divisivel por 5.
    //
    //
    //Logo depois faça uma função que retorne verdadeiro se o num por par, mas nao for divisivel
    //por 4 nem por 6.
    //
    //@return: true ou false;

    bool eh_sobra31_div5(int num)
    {
    	return false;
    }

    bool eh_par_n46(int num)
    {
    	return false;
    }

}

namespace _modulo{

    // Faça uma função que retorne o módulo de um número.
    // Se o numero for negativo, inverter deixando positivo e retornar.
    // Se for positivo, retornar o valor positivo.
    //
    //@return: bool

    int modulo(int num){
    	return 0;
    }

}

namespace _modulos_basicos{

    //Faça uma função que retorne true se o número passado por parâmetro
    //for par ou false caso contrário.
    //
    //Logo depois faça uma função que recebe dois números num1 e num2
    //e retorne true se o num1 for múltiplo de num2 ou false caso contrário.

    bool eh_par(int num)
    {
    	return false;
    }

    bool eh_mult(int num1, int num2)
    {
    	return false;
    }

}

namespace _multa{

    // Dada a velocidade máxima permitida em uma avenida e a velocidade com que o motorista
    // estava dirigindo nela e calcule a multa que uma pessoa vai receber, sabendo que:

    // Até 10 % acima ele não paga nada.
    // Entre 10 e 20 % ele paga 100;
    // Entre 20 e 30 % ele paga 200;
    // Acima de 30 % ele paga 300;

    //@return: int referente a multa.

    int calcular_multa(float vel_max, float vel_carro){
        return 0;
    }

}

namespace _piso_teto_meio{

    //Faça as funções piso, teto, meio que arredonda valores float para int.
    //Em piso, o valor eh sempre arredondado para baixo.
    //Em teto, o valor eh arredondado para cima.
    //Em meio, o valor arredonda para baixo se menor que 0.5 e para cima caso maior.
    //
    //@return: int

    float piso(float num){
    	return 0;
    }

    float teto(float num){
    	return 0;
    }

    float meio(float num){
    	return 0;
    }

}

namespace _resto_maior_menor{

    //Faça uma função que recebea dois numeros naturais como entrada e determine o resto da
    //divisao do maior pelo menor.

    int resto_maior_menor(int n1, int n2){
    	return 0;
    }

}
