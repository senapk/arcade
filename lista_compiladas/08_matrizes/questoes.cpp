#include <motor.h>
#include <iostream>
#include <vector>
using namespace std;
//#include <motor.h>
#include <string>

namespace _1_bingo{

    //Bingo
    //Dado um vetor verifique quantos numeros voce acertou
    //na matriz
    //

    template<class T>
    using matriz = vector<vector<int>>;

    int bingo(vector<int> vet, matriz<int> mat)
    {
        return 0;
    }

}

namespace _1_det22{

    //Calcule o determinande de uma matriz 2x2
    float det22(int mat[2][2]){
        return 0.0;
    }

}

namespace _1_localizacao{

    //@autor David Sena
    /*
    Faça uma função que retorne a localização de um determinada coordenada na matriz.
    Voce deve informar se ele está na borda, no centro, ou fora da matriz.
    */
    template<class T>
    using matriz = vector<vector<int>>;

    enum Localizacao{Borda, Centro, Fora};

    Localizacao acharLocalizacao(matriz<int> mat, int y, int x){
        return Borda;
    }

}

namespace _1_menor_valor{

    //@autor Daniel
    //Jarisvaldo gosta de brincar com feijões, um dia ele resolveu espalhar
    //caroços de feijões por um tabuleiro.
    //Ele pediu sua ajuda para saber qual posição no tabuleiro que tem a menor
    //quantidade de caroços de feijão.
    //Faça uma função que percorre o tabuleiro (matriz) e retorna a menor quantidade
    //de caroços e sua posicao no tabuleiro (x e y).

    //@return: struct Result

    struct Result{
        int x;
        int y;
        int value;
    };

    template <class T>
    using matriz = vector<vector<int>>;

    Result encontrar_menor_valor(matriz<int> mat){
        return Result{0,0,0};
    }


}

namespace _1_simetrica{

    //Verifique se uma matriz e simetrica.
    //OBS:Lembre que uma matriz é simétrica é aquela onde mat[linha, coluna] = mat[coluna, linha].
    //
    //@return: bool
    template<int dim>
    bool matriz_simetrica(int mat[dim][dim]){
        return false;
    }

}

namespace _1_soma_diag{

    //Faça uma função que soma todos os elementos da diagonal principal,
    //de uma matriz passada por parâmetro.
    //Se a matriz recebida não for quadrada retorne 0.

    //@return: int

    template<int lin, int col>
    int somar_diagonal_principal(int mat[lin][col]){
        return 0;
    }

}

namespace _1_soma{

    //Mamãe me perguntou
    //-Se somar essas notas todas do teu boletim num
    //dá um 10 né menino.
    //
    //Eu disse:
    //-Dá sim mamãe e eu ainda faço um programa pra isso.
    //
    //Some e retorne todas as notas da matriz
    template<int lin, int col>
    int somar(int mat[lin][col]){
        return 0;
    }

}

namespace _1_sub_diag{

    //@autor: Bruno Barreto;

    /*
       some todos os elementos da diagonal principal,
       e subtraia da soma dos elementos da diagonal
       secundária.
       */


    template <int dim>
    int somar(int mat[dim][dim]){
        return 0;
    }


}

namespace _1_zerar{

    //O professor surtou e quer colocar zero em todas
    //as notas do quadro de alunos, ajude-o a fazer isso
    //colocando zero em todas as posicoes da matriz
    template<int lin, int col>
    void zerar(int mat[lin][col]){
        return;
    }

}

namespace _2_aziagos{

    /*
    Um aziago é uma pessoa que trás má sorte pra todos
    que estão ao seu redor.

    Vamos brincar de azarar.

    Dado um grupo de pessoas em uma matriz e uma posição de
    um aziago, você vai inverter a sorte de todos que estivem
    ao lado do aziago, mas deixar o aziago quieto.

    Inverter a sorte significa mudar de positivo pra negativo
    e vice versa. Retorne a nova matriz.

    [ 1  2 -3  4
      5  6  7 -8
      4  2 -1  9
      6  5  3  2]

      Suponha que o aziago é o [1,1] a matriz fica assim
    [-1 -2  3  4
     -5  6 -7 -8
     -4 -2  1  9
      6  5  3  2]

      Na mesma matriz chamando o [3,3] pra ser o aziago
    [-1 -2  3  4
     -5  6 -7 -8
     -4 -2 -1 -9
      6  5 -3  2]

    Para obter o numero de linhas e colunas use
    int lin = mat.size();
    int col = mat[0].size();

    Para acessar o elemento y, x use mat[y][x]

    Retorne uma nova matriz com as inversões.
    Para inicializar uma nova matriz apartir da
    matriz mat recebida é só fazer:

    matriz<int> nova(mat);
    */
    template<class T>
    using matriz = vector<vector<T>>;

    matriz<int> mudar_sorte(matriz<int> mat, int x, int y){
        return mat;
    }

}

namespace _2_maior_frente_menor{

    //Os soldados se colocaram em formação no quartel.
    //Na formação eles formaram uma matriz.
    //
    //Cada soldado Stormtrooper tem uma numeração na sua farda, logo
    //o Comandante Dart Vader querendo tripudiar de você, mandou
    //você contar quantas vezes um soltado com numeração de fardamento menor está
    //atrás de um maior.
    //Você que não é besta, fez um código pra isso.
    //
    //Obs: Você tem que conferir as numerações verticalmente.
    //
    //Entrada:
    //	      2 4 6
    //   	  3 8 9
    //	      1 0 5
    //
    //Saída: 3
    //
    //Para saber a quantidade de linhas e colunas use
    //int lin = matriz.size();
    //int col = matriz[0].size();
    //Para acessar o elemento y, x use matriz[y][x]

    template<class T>
    using matriz = vector<vector<int>>;

    //@return: int
    int contar_fardamento_menor(matriz<int> mat){
        return 0;
    }

}

namespace _2_olhar_bordas{

    //@autor David Sena
    /*
    No quartel general os soldados formaram um retangulo.
    O chefe quer quer você conte quantas mulheres ficaram
    nas bordas do retangulo.

    Sejam os soldados representados por um vetor de strings.
    Os char '*' representam as mulheres e os '.' os homens.

    Conte quantas mulheres estão nas bordas do quadrado
    Voce pode usar para saber as linhas e colunas.

    int lin = quartel.size();
    int col = quartel[0].size();

    Um vetor de strings é a mesma coisa que uma matriz
    de caracteres. Voce pode acessar um elemento da linha
    y coluna x usando quartel[y][x]
    */

    int contar_bordas(vector<string> quartel){
        return 0;
    }


}

namespace _2_puxar_altoes{

    //@autor David Sena
    /*
    Os soldados se colocaram em formação no quartel.
    Juntos eles formam uma matriz.

    Hoje vai ter uma inspeção do Capitão. O Comandante
    quer enganar o capitão colocando os maiores de cada
    fila na frente, pra dar a impressão de que todos
    são altos.

    Você já sabe a quem ele atribuiu essa tarefa.

    Sua missão é descobrir quem é o mais alto de cada
    coluna e trocá-lo de prosição com o primeiro da coluna.

    É apenas uma troca por coluna. Não é pra ordenar a coluna.

    Assuma que os mais altos devem estar na última linha
    da matriz.

    Você que não é besta, fez um código pra isso.

    [ 1  2  3  4
      5  6  7  8
      4  2  1  9
      6  5  3  2]

    Após puxar os mais altos pra frente, o resultado fica assim:

    [ 1  2  3  4
      5  5  3  2
      4  2  1  9
      6  6  7  8]

    Para obter o numero de linhas e colunas use
    int lin = mat.size();
    int col = mat[0].size();

    Para acessar o elemento y, x use mat[y][x]

    Retorne a matriz com as alterações.
    Para inicializar uma nova matriz apartir da
    matriz mat recebida é só fazer:

    matriz<int> nova(mat);
    */

    template<class T>
    using matriz = vector<vector<T>>;

    matriz<int> puxar_altoes(matriz<int> mat){
        return mat;
    }


}

namespace _2_soma_linha_coluna{

    /*
    	Crie uma função que retorna a soma das linhas em um vetor.
    	e outra que retorna a soma das colunas em um vetor.
    */
    template<class T>
    using matriz = vector<vector<T>>;

    vector<int> somar_linhas(matriz<int> mat){
    	return vector<int>();
    }

    vector<int> somar_colunas(matriz<int> mat){
    	return vector<int>();
    }

}

namespace _3_desconcentrados{

    //@autor: Ronildo, Ítalo, David
    //Os soldados se colocaram em formação no quartel.
    //Na formação eles formaram uma matriz. Na formação
    //encontram-se homens e mulheres. O comandante percebeu
    //que homens que ficaram perto de mulheres, não estão
    //se concentrando nas ordens dadas.
    //
    //O Comandante sabendo que pode contar com você,
    //quer que você conte quantos homens estão pertos
    //de pelo menos uma mulher
    //
    //Você que não é besta, fez um código pra isso.
    //
    //uma mulher é um * e o homem um .
    //pro homem ser contado como desconcentrado deve
    //estar adjacente a uma mulher, também valendo diagonais.
    //@return: int
    int contar_desconcentrados(vector<string> mat){
        return 0;
    }

}

namespace _3_ebola{

    /*
       Na contaminação por virus, o contato é essencial.
       Dada uma população inicial, todos os que estiverem
       em contato com alguem negativo(doente) ficam negativos
       também.

       [ 1  2  3  4
       5  6  7  8
       4  2 -1  9
       6  5  3  2]

       No próxima rodada todos que estão próximos ao -1 ficam
       doentes
       [ 1  2  3  4
       5 -6 -7 -8
       4 -2 -1 -9
       6 -5 -3 -2]

       Para obter o numero de linhas e colunas use
       int lin = mat.size();
       int col = mat[0].size();

       Para acessar o elemento y, x use mat[y][x]

       Retorne uma nova matriz com as inversões.
       Para inicializar uma nova matriz apartir da
       matriz mat recebida é só fazer:

       matriz<int> nova(mat);
       */
    template<class T>
    using matriz = vector<vector<T>>;

    bool tem_amigo_doente(const matriz<int> & mat, int x, int y){
        int lin = mat.size();
        int col = mat[0].size();
        for (int c = x - 1; c <= x + 1; c++){
            for( int l = y - 1; l <= y + 1; l++){
                if(c >= 0 and c < col and  l >= 0 and l < lin){
                    if(mat[l][c] < 0)
                        return true;
                }
            }
        }
        return false;
    }

    matriz<int> ebola(const matriz<int> & mat){
        matriz<int> nova(mat);
        int lin = mat.size();
        int col = mat[0].size();
        for(int x = 0; x < col; ++x){
            for(int y = 0; y < lin; ++y){
                if(mat[y][x] > 0){
                    if(tem_amigo_doente(mat, x, y))
                        nova[y][x] = -nova[y][x];
                }
            }
        }
        return nova;
    }


}

namespace _3_quadrado_magico{

    //@autor Italo

    //Dizemos que uma matriz quadrada inteira é um quadrado magico se a soma dos
    //elementos de cada linha, a soma dos elementos de cada coluna e a soma dos
    //elementos das diagonais principal e secundária são todas iguais.
    //Retorne verdadeiro(true) se a matriz é uma quadrado mágico ou falso(false) caso contrário
    //
    //@return: bool

    template<int dim>
    bool quadrado_magico(int matriz[dim][dim])
    {
    	return false;
    }

}

namespace _4_caca_palavras{

    //@autor David Sena

    // Dama uma matriz de entrada que representa um caça palavras de Y linhas por
    // X colunas e uma palavra procurada, retornar se a palavra existe na matriz
    // e a posição em que a palavra se encontra.
    //
    // A palavra pode estar horizontal, vertical, diagonal crescente ou decrescente.
    // A palavra sempre vai estar na sua escrita normal, nunca invertida da direita
    // esquerda ou de baixo pra cima.
    //
    // Se a palavra existir, preecha a struct palavra com existe = true, a posição
    // x e y de onde a palavra começa e a direção.
    //
    // Se não existir, coloque existe = false;
    //
    // Ex:
    // alsdpsayuansnrw
    // mjuqpeewhhdsfgn
    // djdfkqgerjzrjrr
    // pdovcixayhnqbew
    // pvyuzhxnsewqrfg
    // pqpouqewrufisau
    // pnpfqewnjrsdfwr
    //
    // procurada = pegasus
    //
    // saida = existe, xini = 4, yini = 0, direcao = Diagonal
    //
    // A entrada é um vector<string> mat
    // o número de linhas é dado por mat.size()
    // o número de colunas por mat[0].size();
    // um elemento qualquer por mat[y][x]
    //

    enum Direcao{Horizontal, Vertical, Diagonal, AntiDiagonal, Nenhuma};

    struct Lugar{
        bool existe;
        int x;
        int y;
        Direcao direcao;
    };

    Lugar procurar(vector<string> matriz, string str)
    {
        return Lugar{false, 0, 0, Nenhuma};
    }

}
