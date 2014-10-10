#include "questoes.cpp"

namespace _1_maior_menor{
    void tests ()
    {
        cerr << "#open maior_menor ";
        cerr << (soma_maior_menor({1, 2, 3, 4, 5}) == 6);
        cerr << (soma_maior_menor({1, 2, 0, 4, 5}) == 5);
        cerr << (soma_maior_menor({1, 2, 0, 4, 9}) == 9);
    }

}

namespace _2_big_div_11{
    void tests() {
    	cerr << "#open eh_div_11 PRATA IF FOR STRING" << endl;
    	cerr << (eh_divisivel_por_11("11") == true);
    	cerr << (eh_divisivel_por_11("1") == false);
    	cerr << (eh_divisivel_por_11("110") == true);
    	cerr << (eh_divisivel_por_11("121") == true);
    }

}

namespace _2_blackjack{
    void tests(){
        cerr << "#open blackjack ";
        cerr << (blackjack({1, 13}) == 21);
        cerr << (blackjack({11, 13}) == 20);
        cerr << (blackjack({1, 1, 1}) == 13);
        cerr << (blackjack({1, 1, 2, 3, 12}) == 17);
        cerr << (blackjack({1, 1, 2, 10, 12}) == 24);
    }

}

namespace _2_decompor{
    void tests(){
        cerr << ("#open decompor_int OURO IF FOR VETOR ");
        cerr << (decompor_int(0) == vector<int>({0}));
        cerr << (decompor_int(4) == vector<int>({4}));
        cerr << (decompor_int(41234) == vector<int>({4, 1, 2, 3, 4}));
        cerr << (decompor_int(41934) == vector<int>({4, 1, 9, 3, 4}));
    }

}

namespace _2_esta_contido{
    void tests() {
        cerr << "#open esta_contido BRONZE IF FOR" << endl;
        cerr << (esta_contido({1, 2, 3, 4, 5}, {1, 3, 5}) == true);
        cerr << (esta_contido({1, 2, 3, 4, 5}, {1, 3, 6}) == false);
        cerr << (esta_contido({1, 2, 3, 4, 5}, {1, 3, 5, 4, 2, 0}) == false);
    }

}

namespace _2_inverter{
    void tests(){
        cerr << ("#open reverse PRATA IF FOR VETOR ");
        cerr << (reverse({1, 2, 3, 4, 5, 6, 7, 8, 9}) == vector<int>({9, 8, 7, 6, 5, 4, 3, 2, 1}));
        cerr << (reverse({1, 0, 3}) == vector<int>({3, 0, 1}));
        cerr << (reverse({0, 3}) == vector<int>({3, 0}));
        cerr << (reverse({1, 3}) == vector<int>({3, 1}));
    }

}

namespace _2_mediana{
    void tests() {
        auto feq = [](float a, float b){return (max(a,b)-min(a,b)<0.1);};
        cerr << "#open mediana OURO IF FOR" << endl;
        cerr << (feq(mediana({0, 1, 2}), 1.0));
        cerr << (feq(mediana({0, 9, 3.2, 1}), 2.1));
    }

}

namespace _2_media{
    //@tests
    auto feq = [](float a, float b){return (max(a,b) - min(a, b) < 0.1);};
    void tests(){

        cerr << "#open media BRONZE ";
        vector<float> v1 = {1.0};
        vector<float> v2 = {1.0, 2.0, 3.0};
        vector<float> v3 = {2.0, 2.0, 2.0, 2.0};

        cerr << (feq(media(v1), 1.0));
        cerr << (feq(media(v2), 2.0));
        cerr << (feq(media(v3), 2.0));
    }

}

namespace _2_pegar_sem_par{
    void tests(){
        cerr << "#open pegar_sem_par" << endl;

        {
            vector<int> pares = {1,2,3,2,4,6,1,8,1,3,2,7,6,7};
            cerr << (pegar_sem_par(pares) == vector<int>({1,2,4,8}));
        }

        {
            vector<int> pares = {1,3,4,2,1,1,4,5,6,9,9,0,3};
            cerr << (pegar_sem_par(pares) == vector<int>({1,2,5,6,0}));
        }

    }

}

namespace _2_pegar_sozinhos{
    void tests ()
    {
        cerr << "#open sozinho PRATA IF FOR VECTOR ";
        vector<int> in, out;
        in = {1, 1};
        out = {};
        cerr << (pegar_sozinhos(in) == out) << endl;

        in = {2, 1, 1};
        out = {2};
        cerr << (pegar_sozinhos(in) == out) << endl;

        in = {2, 3, 1, 2, 5, 7, 2};
        out = {1, 3, 5, 7};
        cerr << (pegar_sozinhos(in) == out) << endl;
    }

}

namespace _3_busca_binaria{
    //@tests
    void tests() {
        cerr << "#open existe_busca_bin PRATA IF FOR" << endl;
        vector<int> v1 ({1});
        vector<int> v2 ({1,2,3});
        vector<int> v3 ({1,2,3,4,5,6,7,8,9});
        vector<int> v4 (1024);

        for(int i = 0; i <= 1023; i++)
            v4.at(i) = i+1;

        cerr << (existe_busca_bin(v1, 1) == true);
        cerr << (existe_busca_bin(v1, 2) == false);
        cerr << (existe_busca_bin(v1, 0) == false);
        cerr << (existe_busca_bin(v2, 3) == true);
        cerr << (existe_busca_bin(v3, 1) == true);
        cerr << (existe_busca_bin(v4, 1) == true);
    }

}

namespace _3_duplas_multiplicadas{
    void tests(){
        cerr << "#open buscar_duplas" << endl;
        int n1 = 12, n2 = 24, n3 = 1, n4 = 7;

        cerr << (buscar_duplas(n1) == vector<Pair>({{1,12}, {2,6}, {3,4}}));
        cerr << (buscar_duplas(n2) == vector<Pair>({{1,24}, {2,12}, {3,8}, {4,6}}));
        cerr << (buscar_duplas(n3) == vector<Pair>({{1,1}}));
        cerr << (buscar_duplas(n4) == vector<Pair>({{1,7}}));
    }

}

namespace _3_fatorar_primos{
    void tests(){
        cerr << ("#open fatorar_primos ");
        cerr << (fatorar_primos(2) == vector<int>({2}));
        cerr << (fatorar_primos(8) == vector<int>({2, 2, 2}));
        cerr << (fatorar_primos(60) == vector<int>({2, 2, 3, 5}));
        cerr << (fatorar_primos(420) == vector<int>({2, 2, 3, 5, 7}));
    }

}

namespace _3_fatores_comuns{
    void tests() {
        cerr << "#open fatores_comuns OURO IF FOR VECTOR ";
        cerr << (fatores_comuns( 5, 3)  == vector<int>({}));
        cerr << (fatores_comuns( 8, 4)  == vector<int>({2}));
        cerr << (fatores_comuns(15, 6) == vector<int>({3}));
        cerr << (fatores_comuns(18, 6) == vector<int>({2, 3}));
        cerr << (fatores_comuns(30, 36) == vector<int>({2, 3}));
    }

}

namespace _3_inserir_ordenado{
    void tests(){
        cerr << "#open inserir_ordenado ";
        {
            vector<int> vet {1, 2, 3};
            vector<int> out {0, 1, 2, 3};
            inserir_ordenado(vet, 0);
            cerr << (vet == out);
        }
        {
            vector<int> vet {1, 2, 3, 4, 6, 7, 8};
            vector<int> out {1, 2, 3, 4, 5, 6, 7, 8};
            inserir_ordenado(vet, 5);
            cerr << (vet == out);
        }
    }

}

namespace _3_mdc_vetor{
    void tests(){
    	cerr << "#open mdc_arrays BRONZE IF FOR" << endl;
        cerr << (mdc({2, 4}) == 2);
        cerr << (mdc({3, 5}) == 1);
        cerr << (mdc({15, 21}) == 3);
        cerr << (mdc({15, 45}) == 15);
        cerr << (mdc({15, 45, 10}) == 5);
        cerr << (mdc({15, 45, 150}) == 15);
    }

}

namespace _3_minado_2d{
    void tests(){
        cerr << "#open minado PRATA VECTOR FOR" << endl;
    // [0 1 0 0 0 1 1 1 0] -> minas
    // [1 1 1 0 1 2 3 2 1] -> proximidade
        cerr << (minado({0, 1, 0, 0, 0, 1, 1, 1, 0}) ==
            vector<int>({1, 1, 1, 0, 1, 2, 3, 2, 1}));
        cerr << (minado({0, 0, 1, 1, 0, 1}) ==
            vector<int>({0, 1, 2, 2, 2, 1}));
    	cerr << (minado({0, 0, 1, 1, 1, 0}) ==
                vector<int>({0, 1, 2, 3, 2, 1}));
    }

}

namespace _3_pegar_exemplares{
    void tests ()
    {
        cerr << "#open pegar_exemplares OURO IF FOR ";
        vector<int> in, out;
        cerr << (pegar_exemplares({1, 1}) == vector<int>({1}));
        cerr << (pegar_exemplares({1, 0, 1}) == vector<int>({0, 1}));
        cerr << (pegar_exemplares({1, 1, 2, 0}) == vector<int>({0, 1, 2}));
        in = {1, 3, 1, 2, 5, 7, 2};
        out = {1, 2, 3, 5, 7};
        cerr << (pegar_exemplares(in) == out);
    }

}

namespace _3_remover_puxando{
    //@tests
    void tests(){
        cerr <<("#open remover_puxando");

        {
            vector<int> vet {1, 2, 3};
            vector<int> out {1, 3};
            remover_puxando(vet, 2);
            cerr << (vet == out);
        }
        {
            vector<int> vet {1, 2, 3, 4, 5, 6, 7, 8};
            vector<int> out {1, 2, 3, 4, 6, 7, 8};
            remover_puxando(vet, 5);
            cerr << (vet == out);
        }
    }

}

namespace _3_swap_onibus_topic{
    void tests(){
        cerr << "#open trocas_onibus OURO";
        vector<int> onibus_in, onibus_out, topic_in, topic_out;

        {
            onibus_in = {2, -1, 4}; topic_in = { 3};
            onibus_out= {2,  3, 4}; topic_out= { -1};
            trocar(onibus_in, topic_in);
            cerr << (onibus_in == onibus_out);
            cerr << (topic_in == topic_out);
        }
        {
            onibus_in = {-2, -1, -4}; topic_in = { 3};
            onibus_out= { 3, -1, -4}; topic_out= { -2};
            trocar(onibus_in, topic_in);
            cerr << (onibus_in == onibus_out);
            cerr << (topic_in == topic_out);
        }
        {
            onibus_in = {-2, -1, -4}; topic_in = {1, 2, 3};
            onibus_out= { 1, 2, 3}; topic_out= {-2, -1, -4};
            trocar(onibus_in, topic_in);
            cerr << (onibus_in == onibus_out);
            cerr << (topic_in == topic_out);
        }
    }

}

namespace _4_emendar_frase{
    //@tests
    void tests(){
        cerr << "#open emendar OURO FOR IF STRING ";
        string in = "a amiga da andreia odeia alfaces";
        string out = "a miga da ndreia odeia lfaces";
        cerr << (emendar(in) == out) << endl;

        in = "ela ama a amora";
        out = "ela ma mora";
        cerr << (emendar(in) == out);

        in = "o gago disse a a a amo voce";
        out = "o gago disse a mo voce";
        cerr << (emendar(in) == out);
    }

}

namespace _4_juntar_amigos{
    void tests(){
        cerr << ("#open juntar_varios OURO IF FOR VECTOR");
        cerr << (juntar_varios({1, 0}) == 10);
        cerr << (juntar_varios({1, 10, 10}) == 11010);
        cerr << (juntar_varios({25, 37, 50, 9}) == 2537509);
        cerr << (juntar_varios({12345, 6789, 0}) == 1234567890);
    }

}

namespace _4_pares_sapatos{
    void tests ()
    {
        cerr << "#open pares_sapatos OURO IF FOR VECTOR STRUCT ";
        vector<Sapato> loja = {{38,'D'}, {39, 'E'}, {40, 'D'}, {39, 'E'}, {40, 'E'},
                               {38,'E'}, {39, 'D'}, {40, 'D'}, {39, 'E'}, {40, 'E'}};
        //saida esperada
        //38d 38e 39e 39d 40d 40e 40d 40e
        //4 pares
        cerr << (procurar_pares(loja) == 4);

        vector<Sapato> loja2 = {{38,'D'}, {39, 'E'}, {38, 'E'}};
        //saida esperada
        //38d 38e
        //1 pares
        cerr << (procurar_pares(loja2) == 1);

    }

}

namespace _4_remover_ninja{
    void tests ()
    {
        cerr << "#open remover_ninja";
        {
            vector<int> resp = compactar({1, 18, 3, 1, 1, 4, 5, 9, 3});
            vector<int> esperado {4, 5, 36};
            cerr << (esperado == resp);
        }
        {
            vector<int> resp = compactar({1, 20, 3, 1, 1, 4, 5, 9, 3});
            vector<int> esperado {20, 4, 5, 18};
            cerr << (esperado == resp);
        }
    }

}

namespace _4_trios_de_bilas{
    void tests ()
    {
        cerr << "#open trio_bilas DIAMANTE ";
        cerr << (contar_trios({1, 1, 1}) == 1);
        cerr << (contar_trios({1, 1}) == 0);
        cerr << (contar_trios({1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3}) == 4);
    }

}

//@question 2_esta_contido

//Dica: se todos os elementos de v1 existirem em v2, v1 só pode estar
//contido em v2.

//@question 2_mediana

//Ou você ordena o vetor na mão e pega os valores do meio.
//Ou vai a cada rodada removendo o menor e o maior
//ate sobrarem 2 ou menos.
//Se sobrarem dois você faz a media.

//@question 2_media

// A média é a soma de todos os elementos dividida pela quantidade de
// elementos.
// Para calcular a soma você precisa usar um acumulador para ir
// recolhendo todos os valores do vetor.
// Depois divida pela media

//@question 3_duplas_multiplicadas

//A funcao bool operator== tem como objetivo permitir a comparacao de dois vector<Pair>()
//através do operador ==.

//@question 3_inserir_ordenado

//De um push_back do elemento no fim
//e volte-o fazendo swaps até que ele chege na posicao devida.

//@question 4_juntar_amigos

//Aprenda a concatenar dois números e use um laço para concatenar todo o vetor.
//Observe que juntar {10, 4} é 104. E juntar {1, 10} é 110.
int main(){
    _1_maior_menor::tests();
    _2_big_div_11::tests();
    _2_blackjack::tests();
    _2_decompor::tests();
    _2_esta_contido::tests();
    _2_inverter::tests();
    _2_mediana::tests();
    _2_media::tests();
    _2_pegar_sem_par::tests();
    _2_pegar_sozinhos::tests();
    _3_busca_binaria::tests();
    _3_duplas_multiplicadas::tests();
    _3_fatorar_primos::tests();
    _3_fatores_comuns::tests();
    _3_inserir_ordenado::tests();
    _3_mdc_vetor::tests();
    _3_minado_2d::tests();
    _3_pegar_exemplares::tests();
    _3_remover_puxando::tests();
    _3_swap_onibus_topic::tests();
    _4_emendar_frase::tests();
    _4_juntar_amigos::tests();
    _4_pares_sapatos::tests();
    _4_remover_ninja::tests();
    _4_trios_de_bilas::tests();
    cerr << "#end" << endl;
    return 0;
}
