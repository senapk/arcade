#include "questoes.cpp"

namespace _1_char_conversao{
    //@tests
    void test_char2hex(){
        cerr << ("#open char2hex" );
        cerr << ( char2hex('a') == 10 );
        cerr << ( char2hex('f') == 15 );
        cerr << ( char2hex('4') == 4 );
        cerr << ( char2hex('0') == 0 );
    }

    void test_char2baralho(){
        cerr << ("#open char2baralho");
        cerr << ( char2baralho('k') == 13 );
        cerr << ( char2baralho('j') == 11 );
        cerr << ( char2baralho('4') == 4 );
        cerr << ( char2baralho('g') == 0 );
    }

    void tests(){
        test_char2hex();
        test_char2baralho();
    }

}

namespace _1_char_tipos{
    //@tests
    void test_pegar_categoria(){
        cerr << "#open pegar_categoria ";
        cerr <<(pegar_categoria('1') == NUMERO);
        cerr <<(pegar_categoria('9') == NUMERO);
        cerr <<(pegar_categoria('a') == MINUSCULA);
        cerr <<(pegar_categoria('b') == MINUSCULA);
        cerr <<(pegar_categoria('A') == MAIUSCULA);
        cerr <<(pegar_categoria('Z') == MAIUSCULA);
        cerr <<(pegar_categoria('.') == PONTUACAO);
        cerr <<(pegar_categoria(')') == PONTUACAO);
    }

    void test_eh_vogal(){
        cerr << "#open eh_consoante ";
        cerr << (eh_vogal('a') == true);
        cerr << (eh_vogal('g') == false);
        cerr << (eh_vogal('T') == false);
        cerr << (eh_vogal('U') == true);
        cerr << (eh_vogal('A') == true);
    }
    void test_min_maius()
    {
        cerr << ("#open min_maius");
        cerr << ( min_maius('z', 'Z') == true );
        cerr << ( min_maius('A', 'a') == false );
        cerr << ( min_maius('a', 'A') == true );
        cerr << ( min_maius('r', 'm') == false );
    }

    void tests(){
        test_pegar_categoria();
        test_eh_vogal();
        test_min_maius();
        cerr << endl;
    }

}

namespace _1_eh_anagrama{
    void tests()
    {
        cerr << "#open eh_anagrama" << endl;
        cerr << "#set OURO IF STRING  FOR";
    	cerr << (eh_anagrama("aaabtt", "batata") == true);
        cerr << (eh_anagrama("espinafre", "espinafri") == false);
        cerr << (eh_anagrama("pegasus", "peg") == false);
    }

}

namespace _1_substring{
    //@tests
    void tests(){
        cerr << "#open sub_string BRONZE IF FOR STRING" << endl;
        cerr << (sub_string("Pterodactilo", 2, 5)  == "erod");
        cerr << (sub_string("Power Ranger", 4, 11) == "r Ranger");
        cerr << (sub_string("Jaspion", 2, 6) == "spion");
    }

}

namespace _2_criptografar{
    void tests() {
    	cerr << ("#open criptografar") << endl;
    	cerr << ("#set PRATA IF FOR STRING") << endl;
    	string a1 = "sua casa";
    	cerr << (criptografar(a1) == "a#a# au#\0");
    	string a2 = "casa nova";
        cerr << (criptografar(a2) == "a#o# a#a#\0");
    }

}

namespace _2_duplicar_palavras{
    void tests() {
    	cerr << ("#open duplicar_palavras") << endl;
    	cerr << ("#set PRATA FOR IF STRING") << endl;
    	cerr << (duplicar_palavras("OLA PESSOAS DA TERRA\0") == "OLA OLA PESSOAS PESSOAS DA DA TERRA TERRA\0");
    	cerr << (duplicar_palavras("EU SOU A LENDA\0") == "EU EU SOU SOU A A LENDA LENDA\0");
    	cerr << (duplicar_palavras("BATATAS VOADORAS DE MARTE\0") == "BATATAS BATATAS VOADORAS VOADORAS DE DE MARTE MARTE");
    }

}

namespace _2_inverter_string{
    void tests() {
        cerr << "#open inverteString" << endl;
        cerr <<(inverteString("batata") == "atatab");
        cerr <<(inverteString("batata Frita") == "atirF atatab");
    }

}

namespace _2_mudar_extensao{
    //@tests
    void tests(){
        cerr << "#open modificar_extencao BRONZE IF FOR STRING" << endl;
        cerr << (modificar_extencao("arquivo",".odt") == "arquivo.odt");
        cerr << (modificar_extencao("arquivo",".xls") == "arquivo.xls");
        cerr << (modificar_extencao("arquivo.ppt",".odt") == "arquivo.ppt.odt");
        cerr << (modificar_extencao("arquivo.exe",".exe") == "arquivo.exe");
        cerr << (modificar_extencao("a",".out") == "a.out");
    }

}

namespace _2_num_ocorrencias{
    void tests(){
        cerr << "#open n_substring PRATA ";
        string in = "amo o amor que me amou, oh amora amortecida";
        cerr << (n_substring("amor", in) == 3);
        cerr << (n_substring("amo", in) == 5);
    }

}

namespace _2_retira_espaco{
    //@tests

    void tests() {
    	cerr << ("#open retira_espaco") << endl;
    	cerr << ("#set PRATA STRING IF FOR") << endl;
    	string a1 = "HELLO       WORLD\0";
    	cerr << (retira_espaco(a1) == "HELLO WORLD\0");
    	string a2 = "LABORATORIO     DE      PROGRAMACAO      I\0";
        cerr << (retira_espaco(a2) == "LABORATORIO DE PROGRAMACAO I\0");
        string a3 = "BOLA     DE      FUTEBOL\0";
        cerr << (retira_espaco(a3) == "BOLA DE FUTEBOL\0");
    }

}

namespace _3_colisao_strings{
    void tests()
    {
        cerr << "#open colisaoString" << endl;
        cerr <<(colisaoString("olho", "mel") == "olhomel");
        cerr <<(colisaoString("minhoca", "arvore") == "minhocrvore");
        cerr <<(colisaoString("mel", "lemax") == "ax");
    }

}

namespace _3_forca_montar_palavra{
    void tests()
    {
        cerr << "#open forca_montar_palavra PRATA FOR IF STRING VETOR" << endl;
        cerr << (forca_montar_palavra("Abacaxi"       , "axnpqe"     , '-') == "A-a-ax-");
        cerr << (forca_montar_palavra("extraordinario", "aeioubcdfgh", '*') == "e***ao*di*a*io");
        cerr << (forca_montar_palavra("Teco-Teco!"    , "tbxyan"     , '_') == "T___-T___!");
    }

}

namespace _3_maior_mult{
    void tests()
    {
        cerr << "#open encontrar_mult DIAMANTE IF FOR STREAM STRING " << endl;
        cerr << (procurar_maior(2) == 99);
        cerr << (procurar_maior(3) == 998);
        cerr << (procurar_maior(4) == 9989);
        cerr << (procurar_maior(5) == 99879);
    }

}

namespace _3_separa_silaba{
    //@tests
    auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};

    void tests() {
    	cerr << ("#open separa_silaba") << endl;
    	cerr << ("#set PRATA STRING FOR IF") << endl;
    	cerr << (separa_silaba("Paralelepipedo") == "Pa-ra-le-le-pi-pe-do");
    	cerr << (separa_silaba("Paraguai") == "Pa-ra-guai");
    	cerr << (separa_silaba("Havaiana de Palmeira") == "Ha-vaia-na de Pa-lmei-ra");
    }

}

namespace _cifra_1_operacoes_basicas{
    //@tests
    void test_soma_min()
    {
        cerr << endl;
        cerr << ("#open soma_min ");
        cerr << ( soma_min('a', 0) == 'a');
        cerr << ( soma_min('a', 1 ) == 'b');
        cerr << ( soma_min('d', 1) == 'e');
    }

    void test_sub_min()
    {
        cerr << endl;
        cerr << ("#open sub_min ");
        cerr << ( sub_min('a', 0) == 'a');
        cerr << ( sub_min('a', 1) == 'z');
        cerr << ( sub_min('d', 1) == 'c');
        cerr << ( sub_min('b', 3) == 'y');
    }

    void test_soma_2char()
    {
        cerr << endl;
        cerr << ("#open soma_2char ");
        cerr << ( soma_2char('a', 'a') == 'a');
        cerr << ( soma_2char('a', 'b') == 'b');
        cerr << ( soma_2char('d', 'b') == 'e');
        cerr << ( soma_2char('z', 'c') == 'b');
    }

    void test_sub_2char()
    {
        cerr << endl;
        cerr << ("#open sub_2char ");
        cerr << ( sub_2char('a', 'a') == 'a');
        cerr << ( sub_2char('a', 'b') == 'z');
        cerr << ( sub_2char('d', 'b') == 'c');
        cerr << ( sub_2char('b', 'd') == 'y');
    }

    void tests(){
        test_soma_min();
        test_sub_min();
        test_soma_2char();
        test_sub_2char();
        cerr << endl;
    }

}

namespace _cifra_2_cesar_basica{
    //@tests

    void test_cifra_cesar()
    {
        cerr << ("#open cifra_cesar");
        cerr << (cifra_cesar("aba pai") == "ded sdl");
        cerr << (cifra_cesar("cem quilos de queijo") == "fhp txlorv gh txhlmr") ;
        cerr << (cifra_cesar("pterodactilo voador") == "swhurgdfwlor yrdgru") ;
    }

    void test_decifra_cesar()
    {
        cerr << ("#open decifra_cesar");
        cerr << ("aba pai" == decifra_cesar("ded sdl"));
        cerr << ("cem quilos de queijo" == decifra_cesar("fhp txlorv gh txhlmr")) ;
        cerr << ("pterodactilo voador" == decifra_cesar("swhurgdfwlor yrdgru")) ;
    }

    void tests(){
        test_cifra_cesar();
        test_decifra_cesar();
        cerr << endl;
    }

}

namespace _cifra_3_cesar_extendido{
    void tests() {
    	string in1  = "So digo uma coisa, digo e Nada.";
        string out1 = "Xt inlt zrf htnxf, inlt j Sfif.";
    	string in2  = "Paz, o Mundo precisa de paz!";
        string out2 = "Xih, w Ucvlw xzmkqai lm xih!";

        cerr << "#open cifra_mono_boa";
        cerr << (cifra_mono_boa(in1 , 5, true ) == out1);
        cerr << (cifra_mono_boa(out1, 5, false) == in1);
        cerr << (cifra_mono_boa( in2, 8, true ) == out2);
        cerr << (cifra_mono_boa(out2, 8, false) == in2);
    }

}

namespace _cifra_4_poligenerica{
    void tests(){
    	string palavra= "minha* chinela?!";
    	string word1 = "abcdefghijlm";
    	string word2 = "nopqrtuvwxyz";

        cerr << ("#open cifra_poli_generica");
        cerr << (cifra_poli_generica(palavra, word1, word2) == "zwavn* pvwaryn?!");
        cerr << (cifra_poli_generica("aquoso estrela", "aeios", "43102") == "4qu020 32tr3l4");
    }

}

namespace _cifra_5_vigenere{
    void tests() {
        cerr << ("#open cifra_vigenere OURO IF FOR STRING");
    	string n1 = "a";
    	string str1 = "batata? sim! Frita!!";
    	string out1 = "batata? sim! Frita!!";

        string n2 = "baad";
        string str2 = "cafe? sim, porfavor!!";
        string out2 = "dafh? tim, sprfdwor!!";

        cerr << (cifra_vigenere(str1, n1, true) == out1);
        cerr << (cifra_vigenere(str2, n2, true) == out2);
        cerr << (cifra_vigenere(out1, n1, false) == str1);
        cerr << (cifra_vigenere(out2, n2, false) == str2);
    }

}

//@question 1_char_tipos

//Todo caractere minusculo está entre 'a' e 'z'.
//A mesma regra vale para os maiúsculos e números.
//Voce tambem pode usar isupper, islower, isalpha,
//ispunct, itdigit para testar se um char é
//maiusculo, minusculo, alfabetico, pontuacao e digito.
//
//Para testar se é a maiúscula é simples.
//A distancia entre maiúsculas e minúsculas é sempre a mesma
//na tabela ASC. Isso significa que a e A estão na mesma distancia
//que v e V. A distancia entre eles é 'a' - 'A'.
//Como a maiuscula vem primeiro na tabela asc, é só checar
//se a maiúscula + a distancia = minuscula.
//
//Para saber se é vogal crie uma string com todas as vogais
//maiúsculas e minúsculas e faça uma busca usando um laço.
//Se você encontrar então é vogal.

//@question 1_substring

//Dicas: Nenhuma

//@question 2_duplicar_palavras

//tips
//você pode criar uma string auxiliar e armazendo nela cada palavra ate encontrar um espaço
//quando vc o encontrar, vc acrescenta essa string, no caso uma palavra a uma nova string,
//e vai concatenando uma palavra a outra, lembre-se de tratar a ultima palavra, pois ela termina em '\0'
//nao em espaço.


//@question 2_mudar_extensao

//Dicas: --

//@question 2_retira_espaco

//Para ver o tamanho de uma string, utilize o nome_string.length();
//Você pode verificar cada elemento da string usando nome_string[posicao_elemento]
//como a questão so quer que você retire os espaços, então você pode copiar se não for espaço
//e caso seja espaço, so pode haver um.


//@question 3_maior_mult

//Aprenda a usar o método substr da classe string.
//Dada uma string nome;
//Para pegar a partir do quarto elemento 10 elementos
//você usa nome.substr(4, 10).
//
//Faça uma função que receba essa string e calcule a multiplicação.
//Pra isso pegue os char um a um e multiplique.
//Para transformar um char numérico em número, subtraia de '0'.
//
//Por fim, faça uma busca pela maior multiplicação.
//Lembre de guardar o valor da maior multiplicação e do maior número.
//
//Você deve atualizar o maior número se o resultado da multiplicação
//for maior ou se for igual, mas o número for maior.

//@question 3_separa_silaba

//tips


//@question cifra_2_cesar_basica

//Sugiro que você faça uma função que cifra e decifra um char.
//Teste se ela funciona bem.
//Faça algo como
//char cifrar_char(char c);
//
//Aproveite e faça uma função que decifra um char
//Use isso no código que cifra o texto.
//Se não for espaço, cifre o char.

int main(){
    _1_char_conversao::tests();
    _1_char_tipos::tests();
    _1_eh_anagrama::tests();
    _1_substring::tests();
    _2_criptografar::tests();
    _2_duplicar_palavras::tests();
    _2_inverter_string::tests();
    _2_mudar_extensao::tests();
    _2_num_ocorrencias::tests();
    _2_retira_espaco::tests();
    _3_colisao_strings::tests();
    _3_forca_montar_palavra::tests();
    _3_maior_mult::tests();
    _3_separa_silaba::tests();
    _cifra_1_operacoes_basicas::tests();
    _cifra_2_cesar_basica::tests();
    _cifra_3_cesar_extendido::tests();
    _cifra_4_poligenerica::tests();
    _cifra_5_vigenere::tests();
    cerr << "#end" << endl;
    return 0;
}
