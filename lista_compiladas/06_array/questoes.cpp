#include <motor.h>
#include <iostream>
#include <math.h>
using namespace std;
#include <cmath>

namespace _1_concurso_modelo{

    //Um concurso de modelo, é passado a altura de várias modelos,
    //indique qual a maior altura existente nesse concurso.
    //@return: retorna um float de dentro do vetor.
    float maior_modelo (float candidata[], int tam){
        return 0.0;
    }

}

namespace _1_menor_preco{

    //Faça um programa que olha o preço de vários produtos e informe qual o
    //produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.
    //Retorne o valor do menor produto.

    float menor(float preco[], int tam){
        return 0.0;
    }

}

namespace _1_repeticoes{

    /*
    Faça uma função que retorne quantas vezes um elemento
    passado como parâmetro se repete no vetor.
    */

    int num_de_repet(int vet[], int tam, int elem){
        return 0;
    }

}

namespace _2_copiar_inverter{


    //Faça uma função que copie os elementos de um vetor dentro de outro.
    //Considere que eles já estão alocados com o mesmo tamanho.
    void copiar(int v1[], int v2[], int tam) {
        return;
    }

    //Faça uma função que copie os elementos na ordem invertida.
    void inverter(int v1[], int v2[], int tam) {
        return;
    }


}

namespace _2_media{

    /*
    O seu professor de FUP está curioso para saber a média das notas da sua turma.
    Para isso, ele armazenou as notas em um vetor e agora pede sua ajuda para
    implementar uma função que retorna a media aritimética dos valores contidos em
    um vetor.
    */

    float media(float v[], int tam) {
        return 0.0;
    }

}

namespace _2_tacografo{

    //Tacógrafos
    //
    //Tacógrafos são dispositivos instalados em determinados
    //tipos de veículos, que registram a velocidade, tempo e
    //distância percorrida por tal veículo. É utilizada
    //principalmente em veículos de transporte coletivo e
    //de transporte de cargas, assim ajudando a evitar abusos
    //de velocidade por parte dos motoristas.
    //
    //A empresa SBC (Sociedade Brasileira dos Caminhoneiros) decidiu
    //encomendar uma versão um pouco mais básica (e barata) para
    //seus associados não precisarem gastar tanto na instalação
    //desses aparelhos. Essas versões modificadas registram apenas
    //os intervalos de tempo e as velocidades médias do caminhão
    //naqueles intervalos.
    //
    //Tarefa
    //
    //Apesar das restrições dos aparelhos novos, a SBC quer poder
    //saber qual foi a distância percorrida pelos caminhões. Você
    //deverá escrever um programa que recebe uma série de intervalos
    //de tempo com suas respectivas velocidades médias e calcula qual
    //foi a distância total percorrida pelo caminhão de acordo com o
    //tacógrafo
    //
    //Obs: Você receberá um N que representa a quantidade de intervalos
    //de tempo registrados no tacógrafo.
    //
    //Você deve retornar um número inteiro representando a distância total
    //percorrida, em quilômetros.

    int tacografo(int n, int tempo[], int velocidade[]){
        return 0;
    }

}

namespace _3_remover_swap{

    /*
    Remover com swap

    Implemente uma função que localiza o elemento passado como parâmetro
    e remove-o do vetor. Para isso, faça um swap (troca) entre o elemento
    a ser removido e a última posição do vetor, lembrando de decrementar o
    tamanho. A função deve retornar false se o elemento não existir no vetor.
    Ex.: v = {1, 2, 3, 4, 5}. Após removermos e elemento "1", o vetor ficará assim:
    v = {5, 2, 3, 4}. Note que o elemento "5" foi colocado no lugar do elemento "1"
    e o tamanho do vetor foi decrementado.

    */

    bool remover_com_swap(int v[], int &tam, int elem) {
        return false;
    }

}

namespace _3_vetor2int{

    /*
    Esta função deve transformar um vetor em um número inteiro e retornar
    esse valor. Todos os elementos do vetor possuem apenas um dígito.
    Ex.: o vetor v = {1, 2, 3, 4}, torna-se o inteiro 1234.
    */

    int vetor_para_int(int v[], int tam) {
        return 0;
    }

}
