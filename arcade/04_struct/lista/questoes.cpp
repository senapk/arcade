#include <motor.h>
#include <iostream>
#include <cmath>
using namespace std;
#include <vector>

namespace _calculadora{

    //A calculadora do Darth Vader quebrou e ele está usando a força para convencer
    //você a fazer uma pra ele.
    //Na calculadora você recebe dois floats e uma operação
    //As possibilidades de operação são:
    // + soma
    // - subtracao
    // * multiplicacao
    // / divisao
    //
    //Retorne uma struct Sucesso com o resultado da operação e se deu certo.
    //Por exemplo, divisao por 0, ou op invalido deve retornar false em sucesso e 0.0 em value.
    //
    //@return: struct Result.

    struct Param{
        float value1;
        float value2;
        char op;
    };
    struct Result{
        float value;
        bool sucesso;
    };

    Result calcular(Param param){
        return Result {0.0, false};
    }

}

namespace _cartas_nome{

    //Escreva uma função que retorne o nome da carta passada por parâmetro.
    //O nome deve ser da forma:
    //"7 de Paus" para valores entre 2 e 10.
    //"As de Copas" para As, Valetes, Damas e Reis.
    //Verifique os testes para mais informações.
    //
    enum Valor {AS = 1, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, OITO, NOVE, DEZ,
                VALETES, DAMAS, REIS};
    enum Naipe {OUROS, ESPADAS, COPAS, PAUS};

    struct Carta{
        Valor valor;
        Naipe naipe;
    };

    string gerar_nome(Carta carta){
        return "";
    }

}

namespace _cartas_trinca{

    //Escreva uma função que verifica se o trio de cartas passadas por parametro forma
    //uma sequencia que vence o jogo. O jogo é vencido de duas formas:
    //1- As tres cartas possuem o mesmo valor.
    //2- As tres cartas possuem o mesmo naipe e valores em sequencia.
    //
    //OBS: As cartas passadas já estão ordenadas.
    //
    enum Valor {AS = 1, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, OITO, NOVE, DEZ,
                VALETES, DAMAS, REIS};
    enum Naipe {OUROS, ESPADAS, COPAS, PAUS};

    struct Carta{
        Valor valor;
        Naipe naipe;
    };

    bool bateu_ordenado(Carta um, Carta dois, Carta tres){
        return false;
    }

}

namespace _dimensoes_caixa{

    //Faça duas funções, que determinem a partir da largura, altura e comprimento de uma caixa d'água,
    //(a) O volume de água que a caixa pode armazenar.
    //(b) A área de material utilizada para construir a caixa com tampa.
    //return: a resposta na struct resposta.

    struct Dimensoes{
        int largura;
        int altura;
        int comprimento;
    };

    struct Resposta {
        float volume;
        float area;
    };

    Resposta calcula_area_volume( Dimensoes dim ){
        return Resposta{0,0};
    }

}

namespace _hora_diferenca{

    //Joaozinho olhou o relógio e quis saber quanto tempo se passou desde a hora que ele almoçou.
    //Faça uma função que mostre quanto tempo se passou entre dois tempos.
    //Considere que o segundo tempo sempre será maior que o primeiro

    struct Tempo{
        int hora;
        int minuto;
        int segundo;
    };

    Tempo diferenca(Tempo inicio, Tempo fim){
        return Tempo{0, 0, 0};
    }

}

namespace _media_ponderada{

    // A struct definida abaixo contém dois atributos, “nota” e “peso”, utilizaremos essa struct
    // para calcular uma média ponderada, onde “peso” representa o peso que uma nota específica
    // tem na média geral, a fórmula é a seguinte:

    // media =  somatória de (nota*peso)/ somatória de (peso)

    // ou seja, a somatória de todas as notas multiplicadas por seu respectivo peso, tudo isso
    // dividido pela somatória dos pesos das notas.

    // Com isso, crie uma função que recebe um vetor de provas, e retorna a média ponderada de
    // seus elementos.

    //@return: float referente a média ponderada.

    struct Prova
    {
        float nota;
        int peso;
    };

    float mediaPonderada(vector<Prova> p){
        return 0.0;
    }

}

namespace _valor_imovel{

    //Questão:
    // A empresa em que você trabalha foi contratada para criar um software de gestão dos imoveis (Edifícios) de uma imobiliária,
    // você exímio programador, foi designado para desenvolver uma aplicação que calcula o preço do imóvel.
    //
    // Cada imóvel terá:
    // - Uma quantidade de cômodos e de banheiros.
    // - Àrea em metros².
    // - Quantidade de espaços na garagem.
    //
    // O dono da imibiliária lhe passou os seguintes preços base:
    // - Cada cômodo custa 1000,00 R$.
    // - Cada banheiro custa 600,00 R$.
    // - O preço do metro quadrado é 4300,00 R$.
    // - Cada espaço da garagem custa 500,00 R$.
    //
    // Porém os valores acima podem variar dependendo da localização do imóvel:
    // - CENTRO: 70% a mais no preço total do imóvel.
    // - ZONA_LESTE: 50% a mais no preço total do imóvel.
    // - ZONA_SUL: 60% a mais no preço total do imóvel.
    //
    // Crie uma função que retorne o preço de um imóvel com base na sua localização.

    //@return: int referente ao preço do imóvel.

    enum Localizacao {CENTRO, ZONA_LESTE, ZONA_SUL};

    struct Imovel
    {
    	int comodos;
    	int banheiros;
    	int metros_quadrados;
    	int esp_garagem;
    	Localizacao local;
    };

    float valor_imovel(Imovel imovel){
    	return 0.0;
    }

}
