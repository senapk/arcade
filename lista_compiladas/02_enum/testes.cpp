#include "questoes.cpp"

namespace _conversao_temperatura{
    //@tests
    auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};

    void tests(){
        cerr << ("#open conversao_temperatura BRONZE IF ENUM ");
        cerr << (feq(converter(39.0, CELSIUS, FARENHEIT), 102.20));
        cerr << (feq(converter(39.0, CELSIUS, KELVIN), 312.00));
        cerr << (feq(converter(373.0, KELVIN, FARENHEIT), 212.00));
    }

}

namespace _dia_semana_ninja{
    void tests() {
        cerr <<  ("#open calcular_dia_da_semana PRATA IF ENUM");
        cerr <<  (calcular_dia_da_semana(17, 06, 1996) == SEG);
        cerr <<  (calcular_dia_da_semana(17, 07, 1986) == QUI);
        cerr <<  (calcular_dia_da_semana(28, 02, 2004) == SAB);
    }

}

namespace _esta_trabalhando{
    //@tests
    void tests(){
        cerr << "#open esta_trabalhando BRONZE IF ENUM" << endl;
        cerr << (esta_trabalhando(DOM, 13) == false);
        cerr << (esta_trabalhando(SAB, 11) == true);
        cerr << (esta_trabalhando(SEG, 12) == false);
        cerr << (esta_trabalhando(TER, 5) == false);
        cerr << (esta_trabalhando(QUA, 15) == true);
    }

}

namespace _imc{
    //@tests
    void tests(){
        cerr << "#open verificarPeso BRONZE IF ENUM" << endl;
        cerr << (verificarPeso(70.0, 1.80) == Normal);
        cerr << (verificarPeso(85.0, 1.80) == Acima);
        cerr << (verificarPeso(100.0, 1.80) == Obeso);
    }

}

namespace _jokenpo{
    //@tests
    void tests(){
        cerr << "#open quem_ganhou BRONZE IF ENUM" << endl;
        cerr << (quem_ganhou(PEDRA, PEDRA) == EMPATE);
        cerr << (quem_ganhou(PEDRA, TESOURA) == JOGADOR1);
        cerr << (quem_ganhou(PAPEL, TESOURA) == JOGADOR2);
    }

}

namespace _localizar_pais{
    //@tests
    void tests(){
    	cerr << "#open acharLocalizacao BRONZE ENUM" << endl;
    	cerr << (acharLocalizacao(Brasil) == AmericaSul);
        cerr << (acharLocalizacao(Italia) == Europa);
        cerr << (acharLocalizacao(EUA) == AmericaNorte);
    }

}

namespace _maior_menor_ou_meio{
    //@tests
    void tests(){
        cerr << "#open verificar_idade BRONZE IF ENUM" << endl;

        cerr << (verificar_idade(2,5,6) == MENOR);
        cerr << (verificar_idade(2,1,6) == MEIO);
        cerr << (verificar_idade(10,6,8) == MAIOR);
    }

}

namespace _nota_prova{
    //@tests
    void tests(){
    	cerr << "#open nota_prova BRONZE IF ENUM ";
    	cerr << (categoria(3.0) == Reprovado);
        cerr << (categoria(7.0) == Aprovado);
        cerr << (categoria(6.9) == Final);
    }

}

namespace _ordenacao{
    void tests(){
        cerr << "#open ver_ordem BRONZE IF ENUM" << endl;
        cerr << (ver_ordem(1, 3, 5) == Crescente);
        cerr << (ver_ordem(1, 3, 2) == SemOrdem);
        cerr << (ver_ordem(4, 3, 2) == Decrescente);
    }

}

namespace _par_impar{
    void tests(){
        cerr << "#open par_impar BRONZE IF ENUM ";
        cerr << (quem_ganhou(PAR, 1, 1) == JOGADOR1);
        cerr << (quem_ganhou(IMPAR, 1, 1) == JOGADOR2);
    }

}

namespace _triangulo{
    //@tests
    void tests(){
    	cerr << "#open triangulo BRONZE IF ENUM" << endl;
    	cerr << (triangulo(5, 5, 2) == ISOSCELES);
        cerr << (triangulo(5, 8, 9) == ESCALENO);
        cerr << (triangulo(8, 8, 8) == EQUILATERO);

    }

}

//@question conversao_temperatura

//Faça primeiro as questões que convertem valores individuais
//e depois utilize-as na função converter.
//c2f -> converte de celsius para farenheit
//f2c -> converte de farenheit para celsius
//k2c -> de kelvin para celsius
//c2k -> de celsius para kelvin
//Exemplo:
//float c2k(float valor){
//	return valor + 273;
//}
//Para converter de farenheit para kelvin basta usar f2c e c2k.

//@question localizar_pais

//Caso seu conhecimento de geografia esteja um pouco enverrujado, acesse:
//http://www.gddc.pt/ligacoes-juridicas-auto/paises.html

//@question maior_menor_ou_meio

//Dicas: --

//@question ordenacao

//Essa questão não possui dicas.

//@question triangulo

//Dicas Caso você não saiba a diferença entre os triângulos, acesse:
//http://www.escolakids.com/classificacao-dos-triangulos.htm
int main(){
    _conversao_temperatura::tests();
    _dia_semana_ninja::tests();
    _esta_trabalhando::tests();
    _imc::tests();
    _jokenpo::tests();
    _localizar_pais::tests();
    _maior_menor_ou_meio::tests();
    _nota_prova::tests();
    _ordenacao::tests();
    _par_impar::tests();
    _triangulo::tests();
    cerr << "#end" << endl;
    return 0;
}
