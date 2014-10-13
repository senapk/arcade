#include "questoes.cpp"

namespace _1_bingo{
    void tests()
    {
        cerr << "#open bingo BRONZE";
        {
            vector<int> V ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
            matriz<int> M = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
            cerr << (bingo(V,M) == 16);
        }
    }

}

namespace _1_det22{
    //@tests
    bool feq(float a, float b){
        return (max(a, b) - min(a, b) < 0.1);
    }

    void tests(){
        cerr << "#open det22 ";
        {
            int mat[2][2] = {{1, 1}, {1, 1}};
            cerr << (feq(det22(mat), 0.0));
        }
        {
            int mat[2][2] = {{1, 2}, {1, 1}};
            cerr << (feq(det22(mat), -1.0));
        }
        {
            int mat[2][2] = {{2, 2},
                             {1, 3}};
            cerr << (feq(det22(mat), 4.0));
        }
    }

}

namespace _1_localizacao{
    void tests ()
    {
        matriz<int> mat(3, {0, 0, 0, 0});
        cerr << " #open achar_lugar ";
        cerr << (acharLocalizacao(mat, 0, 0) == Borda);
        cerr << (acharLocalizacao(mat, 1, 1) == Centro);
        cerr << (acharLocalizacao(mat, 0, 4) == Fora);
        cerr << (acharLocalizacao(mat, -1, 3) == Fora);
    }

}

namespace _1_menor_valor{
    //@tests
    void tests(){
        cerr << "#open encontrar_menor_valor BRONZE MATRIZ FOR STRUCT" << endl;
        {
            matriz<int> mat = {{4,2},{1,4}};
            Result r = encontrar_menor_valor(mat);
            cerr << (r.value == 1 && r.x == 0 && r.y == 1);
        }
        {
            matriz<int> mat = {{4,2,1},{1,4,0},{11,2,5}};
            Result r = encontrar_menor_valor(mat);
            cerr << (r.value == 0 && r.x == 2 && r.y == 1);
        }
        {
            matriz<int> mat = {{4,2,1},{-1,4,0},{1,2,0}};
            Result r = encontrar_menor_valor(mat);
            cerr << (r.value == -1 && r.x == 0 && r.y == 1);
        }
        {
            matriz<int> mat = {{4,2,1},{-100,4,2}};
            Result r = encontrar_menor_valor(mat);
            cerr << (r.value == -100 && r.x == 0 && r.y == 1);
        }
    }

}

namespace _1_simetrica{
    //@tests
    void tests(){

        cerr << "#open matriz_simetrica BRONZE FOR MATRIZ" << endl;
        {
            int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
            cerr << (matriz_simetrica<3>(mat) == false);
        }
        {
            int mat[3][3] = {{6,2,3},{4,5,6},{7,8,9}};
            cerr << (matriz_simetrica<3>(mat) == false);
        }
        {
            int mat[3][3] = {{3,7,9},{7,4,6},{9,6,2}};
            cerr << (matriz_simetrica<3>(mat) == true);
        }
    }

}

namespace _1_soma_diag{
    //@tests
    void tests(){
        cerr << "#open somar_diagonal_principal BRONZE FOR MATRIZ" << endl;
        {
            int mat[2][2] = {{1, 2}, {3, 4}};
            cerr << (somar_diagonal_principal<2,2>(mat) == 5);
        }
        {
            int mat[3][3] = {{1, 2, 4},{3, 4, 8},{5, 4, 7}};
            cerr << (somar_diagonal_principal<3,3>(mat) == 12);
        }
        {
            int mat[1][3] = {{1, 2, 4}};
            cerr << (somar_diagonal_principal<1,3>(mat) == 0);
        }
    }

}

namespace _1_soma{
    void tests(){

        cerr << "#open somar";
        int mat[3][2] = {{1, 2}, {3, 4}, {5, 6}};
        cerr << (somar<3, 2>(mat) == 21);
    }

}

namespace _1_sub_diag{
    void tests(){
        cerr << "#open somar" << endl;
        {
            int mat[3][3] = {{1,1,1}, {1,1,1}, {1,1,1}};
            cerr << (somar(mat) == 0) << endl;
        }

        {
            int mat[4][4] = {{1,2,3,4}, {4,5,6,7}, {7,8,9,10}, {10,11,12,13}};
            cerr << (somar(mat) == 0) << endl;
        }

        {
            int mat[2][2] = {{5,9}, {3,4}};
            cerr << (somar(mat) == -3) << endl;
        }

    }

}

namespace _1_zerar{
    //@tests
    #include <algorithm>
    void tests(){

        cerr << "#open zerar";
        {
            int mat[3][2] = {{1, 2}, {3, 4}, {5, 6}};
            int res[3][2] = {{0, 0}, {0, 0}, {0, 0}};
            zerar<3,2>(mat);
            cerr << (equal((int*)mat, (int*)mat + 6, (int*)res));
        }
    }

}

namespace _2_aziagos{
    void tests(){
        cerr << "#open aziago ";
        matriz<int> mat = {{ 1, 2,-3, 4},
                           { 5, 6, 7,-8},
                           { 4, 2,-1, 9},
                           { 6, 5, 3, 2}};
        {
            matriz<int> nova= {{ 1,-2,-3, 4},
                               {-5,-6, 7,-8},
                               { 4, 2,-1, 9},
                               { 6, 5, 3, 2}};
            cerr << (mudar_sorte(mat, 0, 0) == nova);
        }
        {
            matriz<int> nova= {{ 1, 2,-3, 4},
                               { 5, 6, 7,-8},
                               {-4,-2, 1, 9},
                               {-6, 5,-3, 2}};
            cerr << (mudar_sorte(mat, 1, 3) == nova);
        }
        {
            matriz<int> nova= {{ 1, 2,-3, 4},
                               { 5, 6, 7,-8},
                               { 4, 2, 1,-9},
                               { 6, 5,-3, 2}};
            cerr << (mudar_sorte(mat, 3, 3) == nova);
        }
        {
            matriz<int> nova= {{ 1, 2, 3,-4},
                               { 5, 6,-7,-8},
                               { 4, 2, 1,-9},
                               { 6, 5, 3, 2}};
            cerr << (mudar_sorte(mat, 3, 1) == nova);
        }
    }

}

namespace _2_maior_frente_menor{
    //@tests
    void tests(){
        cerr << "#open contar_maior_menor BRONZE FOR MATRIZ" << endl;
        {
            matriz<int> mat = {{2,4,6},{3,8,9},{1,0,5}};
            cerr << (contar_fardamento_menor(mat) == 3);
        }
        {
            matriz<int> mat = {{2,4},{3,8}};
            cerr << (contar_fardamento_menor(mat) == 0);
        }
        {
            matriz<int> mat = {{2,4,3},{3,8,0}};
            cerr << (contar_fardamento_menor(mat) == 1);
        }
    }

}

namespace _2_olhar_bordas{
    void tests(){
        cerr << "#open contar_bordas ";
        vector<string> quartel;

        quartel= {
            "* *",
            "** "};
        cerr << (contar_bordas(quartel) == 4);

        quartel= {
            "***",
            "***"};
        cerr << (contar_bordas(quartel) == 6);

        quartel = {
            "* * ",
            " * *",
            "**  "};
        cerr << (contar_bordas(quartel) == 5);
    }

}

namespace _2_puxar_altoes{
    void tests(){
        cerr << "#open aziago ";
        {
            matriz<int> mat = {{ 1, 2, 3, 4},
                               { 5, 6, 7, 8},
                               { 4, 2, 1, 9},
                               { 6, 5, 3, 2}};

            matriz<int> nova= {{ 1, 2, 3, 4},
                               { 5, 5, 3, 8},
                               { 4, 2, 1, 2},
                               { 6, 6, 7, 9}};
            cerr << (puxar_altoes(mat) == nova);
        }
    }

}

namespace _2_soma_linha_coluna{
    void tests(){
    	cerr << "#open somar_colunas" << endl;
    	{
    		matriz<int> teste = {{5,2,3}, {5,2,3}, {5,2,3}};
    		cerr << (somar_linhas(teste) == vector<int>({10,10,10}));
    		cerr << (somar_colunas(teste) == vector<int>({15, 6, 9}));
    	}

    	{
    		matriz<int> teste = {{10,9,12}, {3,2,3}, {1,5,0}};
    		cerr << (somar_linhas(teste) == vector<int>({31,8,6}));
    		cerr << (somar_colunas(teste) == vector<int>({14,16,15}));
    	}

    }

}

namespace _3_desconcentrados{
    void tests()
    {

        cerr << "#open desconcentrados";
        {
            vector<string> mat = {"...",
                                  "...",
                                  ".**"};
            cerr << (contar_desconcentrados(mat) == 4);
        }
        {
            vector<string> mat = {".*.",
                                  "...",
                                  ".*."};
            cerr << (contar_desconcentrados(mat) == 7);
        }
        {
            vector<string> mat = {"..*........",
                                  "...........",
                                  "....*.....*",
                                  ".*........*"};
            cerr << (contar_desconcentrados(mat) == 14);
        }

    }

}

namespace _3_ebola{
    void tests(){
        cerr << "#open ebola PRATA";
        {
            matriz<int> mat = {
                { 1, 2,-3, 4},
                { 5, 6, 7,-8},
                { 4, 2,-1, 9},
                { 6, 5, 3, 2}};
            matriz<int> nova= {
                { 1,-2,-3,-4},
                { 5,-6,-7,-8},
                { 4,-2,-1,-9},
                { 6,-5,-3,-2}};
            cerr << (ebola(mat) == nova);
        }
        {
            matriz<int> mat = {
                {-1, 2,-3, 4},
                { 5, 6, 7,-8},
                { 4, 2,-1, 9},
                { 6, 5, 3, 2}};
            matriz<int> nova= {
                {-1,-2,-3,-4},
                {-5,-6,-7,-8},
                { 4,-2,-1,-9},
                { 6,-5,-3,-2}};
            cerr << (ebola(mat) == nova);
        }
    }

}

namespace _3_quadrado_magico{
    //@tests
    void tests()
    {
        cerr << "#open quadrado_magico BRONZE MATRIZ FOR IF" << endl;
        {
            int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
            cerr << (quadrado_magico<3>(mat) == false);
        }
        {
            int mat[3][3]={{6,2,3},{4,5,6},{7,8,9}};
            cerr << (quadrado_magico<3>(mat) == false);
        }
        {
            int mat[3][3]={{2,7,6},{9,5,1},{4,3,8}};
            cerr << (quadrado_magico<3>(mat) == true);
        }
        {
            int mat[3][3]={{8,1,6},{3,5,7},{4,9,2}};
            cerr << (quadrado_magico<3>(mat) == true);
        }
    }

}

namespace _4_caca_palavras{
    //@tests
    #include <tuple>
    bool igual(Lugar a, Lugar b){
        if(a.existe == b.existe && a.existe == false)
            return true;
        return (tie(a.x, a.y, a.direcao) == tie(b.x, b.y, b.direcao));
    }

    void tests()
    {
        cerr << "#open caca_palavras DIAMANTE";
        vector<string> mat= {  "alimpartendanrw",
                               "mjuqpeewhhdsfgf",
                               "djdfkqgerjzrjru",
                               "pdovcixayhnqbeg",
                               "pv?uzhxnsewqrfa",
                               "pqpouqewrufisau",
                               "pnpfqewnjrsdfwr"};

        cerr << (igual(procurar(mat, "ali"), Lugar{true, 0, 0, Horizontal}));
        cerr << (igual(procurar(mat, "nrw"), Lugar{true, 12, 0, Horizontal}));
        cerr << (igual(procurar(mat, "pegasus"), Lugar{true, 4, 0, Diagonal}));
        cerr << (igual(procurar(mat, "impar"), Lugar{true, 2, 0, Horizontal}));
        cerr << (igual(procurar(mat, "fuga"), Lugar{true, 14, 1, Vertical}));
        cerr << (igual(procurar(mat, "pq?"), Lugar{true, 0, 6, AntiDiagonal}));
        cerr << (igual(procurar(mat, "ninja"), Lugar{false, 0, 0, Horizontal}));
    }

}

//@question 1_soma_diag

//Dicas: Você está em uma diagonal principal de uma matriz quando o número da linha é igual ao número
//da coluna.

//@question 2_olhar_bordas

//Uma abordagem simples é somar as mulheres que estão
//na primeira linha e na ultima linha.

//Se você somasse isso às mulheres da primeira e segunda
//coluna estaria correndo os riscos de contar as quinas
//duas vezes.

//Ou você soma as culunas integralmente e subtrai as
//mulheres duplicadas, ou faz um laço que começe da linha
//2 até a penultima linha.

//@question 3_desconcentrados

//int contar_desconcentrados(vector<string> mat){
//    para todas as pessoas
//        se eh homem
//            para todos os proximos
//                se o proximo existe
//                    se o proximo eh mulher
//                        cont++;
//}


//@question 4_caca_palavras


 //Algumas sugestões para te ajudar.

 //Faça uma função que arranca strings da matriz passando o tamanho, a posição inicial e
 //a direção.
 //Se você conseguir retirar strings da matriz, compará-las vai ser fácil.

 //Você também pode pensar nas direções em relação ao incremento de x e y
 //Horizontal é sempre +1, +0
 //Vertical é sempre   +0, +1
 //Diagonal é          +1, +1
 //Antidiagonal é      +1, -1

 //Se você passar o incremento para a função que extrai as strings não precisa
 //se preocupar com a direção.

 //Verifique os limites da matriz, se não conseguir extrair uma string do tamanho da palavra
 //então a palavra não está naquela posição naquela direção.

 //Quando tiver conseguido solucionar esse problema, que tal fazer um gerador de caça palavras.

int main(){
    _1_bingo::tests();
    _1_det22::tests();
    _1_localizacao::tests();
    _1_menor_valor::tests();
    _1_simetrica::tests();
    _1_soma_diag::tests();
    _1_soma::tests();
    _1_sub_diag::tests();
    _1_zerar::tests();
    _2_aziagos::tests();
    _2_maior_frente_menor::tests();
    _2_olhar_bordas::tests();
    _2_puxar_altoes::tests();
    _2_soma_linha_coluna::tests();
    _3_desconcentrados::tests();
    _3_ebola::tests();
    _3_quadrado_magico::tests();
    _4_caca_palavras::tests();
    cerr << "#end" << endl;
    return 0;
}
