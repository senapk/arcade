#include "questoes.cpp"

namespace _area_triangulo{
    //@tests
    auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};
    void tests(){
        cerr << "#open area_triangulo" << endl;
        cerr << (feq(area_triangulo(3.4, 4.5, 5.1), 7.51));
        cerr << (feq(area_triangulo(6.4, 4.5, 5.1), 11.39)) << endl;
    }

}

namespace _arredondamento{
    //@tests
    auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};
    void tests() {
        cerr << ("#open arredondamento") << endl;
        cerr << ("#set PRATA IF") << endl;
        cerr << (feq(arredondamento(2.30), 2.50));
        cerr << (feq(arredondamento(1.00), 1.00));
        cerr << (feq(arredondamento(7.24), 7.00));
    }

}

namespace _boliche{
    void tests(){
        cerr << "#open boliche" << endl;
        cerr << (diametro_caixa(3,3,2,5) == false);
        cerr << (diametro_caixa(5,5,5,5) == true);
    }

}

namespace _calcular_desempenho{
    void tests() {
        auto feq = [](float A, float B)->bool{
            return ((max(A,B)-min(A,B)) < 0.01);
        };
        cerr << ("#open  calcular_desempenho");
        cerr << (feq(calcular_desempenho(100, 60, 10), 10.0));
        cerr << (feq(calcular_desempenho(100, 30, 10), 5.0));
    }

}

namespace _distancia_pontos{
    //@tests
    auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};

    void tests() {
    	cerr << ("#open distancia_pontos") << endl;
    	cerr << ("#set BRONZE") << endl;
        cerr << (feq(distancia_pontos(-2,3,-5,-9), 12.36));
    }

}

namespace _divisiveis{
    //@tests
    void tests() {
        cerr << "#open ambos_3_ou_ambos_5 BRONZE" << endl;
        cerr << (ambos_3_ou_ambos_5(9,27) == true);
        cerr << (ambos_3_ou_ambos_5(100,20) == true);
        cerr << (ambos_3_ou_ambos_5(35,10) == true);

        cerr << endl << "#open restos_iguais BRONZE" << endl;
        cerr <<(restos_iguais(10,3,8,7) == true);
        cerr <<(restos_iguais(3,3,5,5) == true);
        cerr <<(restos_iguais(18,5,19,4) == true);

    }

}

namespace _maior_menor_meio{
    //@tests
    bool igual(Result a, Result b){
        if(a.maior == b.maior )
            if(a.menor == b.menor)
                if(a.meio == b.meio)
                    return true;
        return false;
    }
    void tests(){
        cerr << "#open maior_menor_meio BRONZE IF STRUCT" << endl;

        {
            Result res{3,2,1};
            cerr << (igual(res, maior_menor_meio(2,1,3))) << endl;
        }
        {
            Result res{2,1,0};
            cerr << igual(res, maior_menor_meio(0,1,2)) << endl;
        }
        {
            Result res{10,9,2};
            cerr << igual(res, maior_menor_meio(10,9,2)) << endl;
        }
    }

}

namespace _media3{
    //@tests
    auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};
    void tests() {
        cerr << "#open media BRONZE "<< endl;
        cerr << (feq(media(1,2,3), 2.0));
        cerr << (feq(media(2,4,3), 3));
        cerr << (feq(media(1.5,2.5,3.5), 2.5));

    }

}

namespace _media_ponderada3{
    //@tests
    auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};
    void tests() {
    	cerr << ("#open media_ponderada_3") << endl;
    	cerr << ("#set BRONZE") << endl;
    	cerr << (feq(media_ponderada(7, 6, 8, 1, 2, 3), 7.16));
        cerr << (feq(media_ponderada(8.9, 6.7, 8.1, 1.2, 2.4, 3.5), 7.76));
    }

}

namespace _modulo_condicionais{
    //@tests
    void tests() {
        cerr << "#open eh_sobra31_div5 BRONZE IF" << endl;
        cerr << (eh_sobra31_div5(10) == true);
        cerr << (eh_sobra31_div5(15) ==  false);
        cerr << (eh_sobra31_div5(19) == false);

        cerr << endl << "eh_par_n46 BRONZE IF" << endl;
        cerr << (eh_par_n46(10) == true);
        cerr << (eh_par_n46(14) == true);
        cerr << (eh_par_n46(22) == true);

    }

}

namespace _modulo{
    //@tests
    void tests() {
        cerr << "#open modulo BRONZE" << endl;
        cerr << (modulo(-5) == 5);
    	cerr << (modulo(3) == 3);
    }

}

namespace _modulos_basicos{
    //@tests
    void tests() {
        cerr << "#open eh_par BRONZE" << endl;

        cerr << (eh_par(2) == true);
       	cerr << (eh_par(3) == false);
       	cerr << (eh_par(-1) == false);

       	cerr << endl << "#open eh_mult BRONZE" << endl;

       	cerr << (eh_mult(4,2) == true);
        cerr << (eh_mult(4,9) == false);

    }

}

namespace _multa{
    //@tests
    void tests(){
        cerr << "#open calcular_multa BRONZE IF" << endl;
        cerr << (calcular_multa(100,120) == 200) << endl;
        cerr << (calcular_multa(100,110) == 0) << endl;
        cerr << (calcular_multa(100,111) == 100) << endl;
        cerr << (calcular_multa(150,90) == 0) << endl;
    }

}

namespace _piso_teto_meio{
    //@tests
    void tests(){

    	cerr << "#open piso BRONZE" << endl;
        cerr << (piso(9.0) == 9);
        cerr << (piso(5.6) == 5);
        cerr << (piso(4.025) == 4);
        cerr << (piso(11.75) == 11);

        cerr << "#open teto BRONZE" << endl;
        cerr << (teto(9.0) == 10);
        cerr << (teto(5.6) == 6);
        cerr << (teto(4.025) == 5);
        cerr << (teto(11.75) == 12);

        cerr << "#open meio BRONZE" << endl;
        cerr << (meio(9.0) == 9);
        cerr << (meio(5.6) == 6);
        cerr << (meio(4.025) == 4);
        cerr << (meio(11.75) == 12);

    }

}

namespace _resto_maior_menor{
    //@tests
    void tests() {
        cerr << "#open resto_maior_menor BRONZE IF" << endl;
        cerr << (resto_maior_menor(5,2) == 1);
        cerr << (resto_maior_menor(10,3) == 1);

    }

}

//@question area_triangulo

//Se você não foi capaz de achar no google, tente esse link
//http://www.mundoeducacao.com/matematica/formula-heron.htm
//Cuidado para colocar os parenteses certinhos.


//@question arredondamento

//Crie uma variavel que guarde o valor inteiro da nota, calculando a diferença
//entre a nota em float e a inteira você terá o valor decimal, a partir daí é
//só fazer as condições de arredondamento.

//@question boliche

//Note que você já tem o diâmetro da caixa, tente compara-la com as demais medidas!

//@question calcular_desempenho

//O tempo em hora eh tempo em minutos/60
//A distancia percorrida é velocidade vezes tempo em horas
//O desempenho é distancia / consumo.

//@question distancia_pontos

//Para saber mais visite o site:
//http://www.mundoeducacao.com/matematica/distancia-entre-dois-pontos.html


//@question divisiveis

//Para saber se um número é divisível por outro basta usar o operador % (Módulo ou Resto da divisão).
//Se o resto da divisão de um número n1 por outro numero n2 for 0 então n1 é divisível por n2.

//@question maior_menor_meio

//Essa questão não possui dicas.

//@question media3

//Para calcular a média basta somar as três notas e dividir por 3.
//Tenha cuidado na hora de colocar o parêntese na divisão.

//@question media_ponderada3

//A formula da media ponderada pode ser encontrada no seguinte site:
//http://www.brasilescola.com/matematica/media-ponderada.htm
//Cuidado no posicionamento dos parênteses.

//@question modulo_condicionais

//Para saber se um número é divisível por outro basta usar o operador % (Módulo ou Resto da divisão).
//Se o resto da divisão de um número n1 por outro numero n2 for 0 então n1 é divisível por n2.

//@question modulo

//Para deixar um número negativo em módulo basta multiplicar o mesmo por -1.

//@question modulos_basicos

//Para saber se um número é divisível por outro basta usar o operador % (Módulo ou Resto da divisão).
//Se o resto da divisão de um número n1 por outro numero n2 for 0 então n1 é divisível por n2.

//@question multa

//Dicas: --

//@question resto_maior_menor

//Se n1 for maior que n2 faca n1%n2, senao faca n2%n1.
int main(){
    _area_triangulo::tests();
    _arredondamento::tests();
    _boliche::tests();
    _calcular_desempenho::tests();
    _distancia_pontos::tests();
    _divisiveis::tests();
    _maior_menor_meio::tests();
    _media3::tests();
    _media_ponderada3::tests();
    _modulo_condicionais::tests();
    _modulo::tests();
    _modulos_basicos::tests();
    _multa::tests();
    _piso_teto_meio::tests();
    _resto_maior_menor::tests();
    cerr << "#end" << endl;
    return 0;
}
