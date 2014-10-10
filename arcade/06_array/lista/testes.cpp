#include "questoes.cpp"

namespace _1_concurso_modelo{
    //@tests
    auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};

    void tests() {
        float v1[] = {1.50, 1.55, 1.89, 2.00, 2.01, 1.72};
        float v2[] = {1.56, 0.55, 2.00, 1.90, 1.91, 1.74};
        float v3[] = {1.80, 0.95, 1.89, 2.00, 2.01, 2.22};

        cerr << ("#open maior_modelo PRATA IF VETOR");
        cerr << (feq(maior_modelo(v1 ,6), 2.01));
        cerr << (feq(maior_modelo(v2 ,6), 2.00));
        cerr << (feq(maior_modelo(v3 ,6), 2.22));
    }

}

namespace _1_menor_preco{
    //@tests
    auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};
    void tests() {
        float v1[] = {1.50, 1.55, 1.89, 2.00, 2.01, 1.72};
        float v2[] = {1.56, 0.55, 2.00, 1.90, 1.91, 1.74};
        float v3[] = {1.80, 0.95, 1.89, 2.00, 2.01, 2.22};
        cerr << ("#open menor_preco BRONZE IF VETOR ");
        cerr << (feq(menor(v1 ,6), 1.50));
        cerr << (feq(menor(v2 ,6), 0.55));
        cerr << (feq(menor(v3 ,6), 0.95));
    }

}

namespace _1_repeticoes{
    void tests(){
    	cerr << "#open repeticoes";
    	int v[] = {1};
    	int v1[] = {1, 2, 3};
    	int v2[] = {0, 2, 0, 4, 5, 0};
    	int v3[] = {4, 2, 3, -1, 5, 0};

    	cerr << (num_de_repet(v, 1, 1) == 1);
    	cerr << (num_de_repet(v1, 3, 3) == 1);
    	cerr << (num_de_repet(v2, 6, 0) == 3);
    	cerr << (num_de_repet(v3, 6, 1) == 0);
    }

}

namespace _2_copiar_inverter{
    void tests(){
        cerr << "#open copiar_inverter ";
    	int a1[] = {1};
    	int b1[1];

    	int a2[] = {1, 2, 3};
    	int b2[3];

    	int a3[] = {0, -1, 0, 2};
    	int b3[4];

    	copiar(a1, b1, 1);
    	copiar(a2, b2, 3);
    	copiar(a3, b3, 4);

    	cerr << (b1[0] == 1);
    	cerr << (b2[0] == 1);
    	cerr << (b2[1] == 2);
    	cerr << (b2[2] == 3);
    	cerr << (b3[0] == 0);
    	cerr << (b3[1] == -1);
    	cerr << (b3[2] == 0);
    	cerr << (b3[3] == 2);
    }

}

namespace _2_media{
    //@tests
    void tests(){
        auto feq = [](float a, float b){return (max(a, b) - min(a, b) < 0.1);};

        cerr << "#open media ";
    	float v1[] = {1.0};
    	float v2[] = {1.0, 2.0, 3.0};
    	float v3[] = {2.0, 2.0, 2.0, 2.0};

    	cerr << (feq(media(v1, 1), 1.0));
    	cerr << (feq(media(v2, 3), 2.0));
    	cerr << (feq(media(v3, 4), 2.0));
    }

}

namespace _2_tacografo{
    void tests(){
        cerr << "#open tacografo PRATA VETOR FOR" << endl;
        int t1[5] = {10,55,75};
        int v1[5] = {0,12,120};
        int t2[11] = {45,46,7,95,12,78,10,52,13,1};
        int v2[11] = {46,101,2,104,107,29,26,86,79,107};
        cerr << (tacografo(3, t1, v1) == 9660);
        cerr << (tacografo(10, t2, v2) == 26022);
    }

}

namespace _3_remover_swap{
    void tests() {
    	cerr << ("#open remover_swap PRATA FOR VETOR");

    	int v1[] = {1};
    	int tam1 = 1;

    	cerr << (remover_com_swap(v1, tam1, 1) == true);
    	cerr << (tam1 == 0);

    	int v2[] = {1, 2, 3};
    	int tam2 = 3;

    	cerr << (remover_com_swap(v2, tam2, 4) == false);
    	cerr << (remover_com_swap(v2, tam2, 3) == true);
    	cerr << (v2[0] == 1);
    	cerr << (v2[1] == 2);
    }

}

namespace _3_vetor2int{
    void tests(){
    	cerr << ("#open vet2int OURO");

    	int v1[] = {1};
    	int v2[] = {0, 0, 1};
    	int v3[] = {1, 0, 0};
    	int v4[] = {1, 0, 2};
    	int v5[] = {0, 0, 0};

    	cerr << (vetor_para_int(v1, 1) == 1);
    	cerr << (vetor_para_int(v2, 3) == 1);
    	cerr << (vetor_para_int(v3, 3) == 100);
    	cerr << (vetor_para_int(v4, 3) == 102);
    	cerr << (vetor_para_int(v5, 3) == 0);
    }

}

//@question 1_concurso_modelo

//Antes de ver qual o maior numero, armazene em uma variavel um valor
//para que vc possa testar com os do vetor, certifique-se de testar
//com uma variavel em float.

//@question 2_copiar_inverter

//#questao copiar
//Para copiar de um vetor para outro você vai precisar usar um
//laço com índice. A ideia é que pra cada indice dos vetores
//você copie esse elemento do primeiro vetor para o segundo.
//
//Para todos os indices
//    vetor2 [indice] recebe o valor do vetor1 [indice]
//
//#questao inverter
//Inverter é equivalente ao copiar.
//Se você já souber o algoritmo de inversão pode copiar usando o
//algoritmo de cópia e depois inverter.
//
//Também pode copiar já invertendo. Voce mantem o laco do algoritmo
//copiar, mas muda a atribuição. No caso o ultimo elemento recebe
//o primeiro, o penultimo o segundo e etc.
//
//No caso o ultimo = tam - 1;
//O algoritmo ficaria:
//
//Para todos os indices
//    vetor2 [indice] recebe o valor do vetor1 [ultimo - indice]

//@question 2_media

// A média é a soma de todos os elementos dividida pela quantidade de
// elementos.
// Para calcular a soma você precisa usar um acumulador para ir
// recolhendo todos os valores do vetor.
// Depois divida pela media

//@question 3_vetor2int

//Dica: para unir dois números em um só você pode multiplicar o primeiro
//por 10 e somar os dois.
int main(){
    _1_concurso_modelo::tests();
    _1_menor_preco::tests();
    _1_repeticoes::tests();
    _2_copiar_inverter::tests();
    _2_media::tests();
    _2_tacografo::tests();
    _3_remover_swap::tests();
    _3_vetor2int::tests();
    cerr << "#end" << endl;
    return 0;
}
