#include "questoes.cpp"

namespace _calculadora{
    //@tests
    auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};
    void tests(){
        cerr << "#open calcular BRONZE IF STRUCT" << endl;
        {
            Result res{20, true};
            Result resA = calcular(Param{10,10,'+'});
            cerr << ( (feq(res.value, resA.value) && res.sucesso == resA.sucesso) );
        }
        {
            Result res{100, true};
            Result resA = calcular(Param{10,10,'*'});
            cerr << ( (feq(res.value, resA.value) && res.sucesso == resA.sucesso) );
        }
        {
            Result res{0.0, true};
            Result resA = calcular(Param{1,1,'-'});
            cerr << ( (feq(res.value, resA.value) && res.sucesso == resA.sucesso) );
        }
        {
            Result res{0.0, false};
            Result resA = calcular(Param{1,0,'/'});
            cerr << ( (feq(res.value, resA.value) && res.sucesso == resA.sucesso) );
        }
        {
            Result res{0.0, false};
            Result resA = calcular(Param{10,21,'a'});
            cerr << ( (feq(res.value, resA.value) && res.sucesso == resA.sucesso) );
        }
        {
            Result res{-15, true};
            Result resA = calcular(Param{-10,5,'-'});
            cerr << ( (feq(res.value, resA.value) && res.sucesso == resA.sucesso) );
        }
    }

}

namespace _cartas_nome{
    void tests(){
        cerr << "#open gerar_nome" << endl;
        cerr << "#set PRATA IF ENUM STRUCT" << endl;
        cerr << (gerar_nome(Carta{AS, ESPADAS}) == "As de Espadas");
        cerr << (gerar_nome(Carta{DAMAS, PAUS}) == "Damas de Paus");
        cerr << (gerar_nome(Carta{REIS, OUROS}) == "Reis de Ouros");
        cerr << (gerar_nome(Carta{VALETES, COPAS}) == "Valetes de Copas");
        cerr << (gerar_nome(Carta{SETE, COPAS}) == "7 de Copas");
        cerr << (gerar_nome(Carta{SETE, COPAS}) == "7 de Copas");
        cerr << (gerar_nome(Carta{CINCO, COPAS}) == "5 de Copas") << endl;
    }

}

namespace _cartas_trinca{
    void tests(){
        cerr << "#open bateu_ordenado" << endl;
        cerr << "#set BRONZE IF ENUM STRUCT" << endl;
        cerr << (bateu_ordenado(Carta{DOIS, PAUS}, Carta{TRES, OUROS}, Carta{QUATRO, ESPADAS}) == false);
        cerr << (bateu_ordenado(Carta{DOIS, OUROS}, Carta{TRES, OUROS}, Carta{QUATRO, OUROS}) == true);
    }

}

namespace _dimensoes_caixa{
    //@tests
    auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};

    void tests(){
        cerr << "#open calcula_area_volume" << endl;
        cerr << "#set PRATA STRUCT" << endl;
        {
            Dimensoes dim{10,10,10};
            Resposta res = calcula_area_volume(dim);

            cerr << (feq(res.volume, 1000.0));
            cerr << (feq(res.area, 600.0));
        }
    }

}

namespace _hora_diferenca{
    //@tests
    bool igual(Tempo one, Tempo two){
        if(one.hora == two.hora)
            if(one.minuto == two.minuto)
                if(one.segundo == two.segundo)
                    return true;
        return false;
    }

    void tests(){
        cerr << "#open diferenca_tempo" << endl;
        cerr << "#set PRATA IF STRUCT" << endl;
        cerr << (igual(diferenca(Tempo{0, 0, 0}, Tempo{0, 0, 1}), Tempo{0, 0, 1}));
        cerr << (igual(diferenca(Tempo{1, 0, 0}, Tempo{2, 3, 1}), Tempo{1, 3, 1}));
        cerr << (igual(diferenca(Tempo{1, 50, 0}, Tempo{2, 0, 0}), Tempo{0, 10, 0}));

    }

}

namespace _media_ponderada{
    //@tests
    auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};
    void tests(){
      cerr << "#open mediaPonderada BRONZE FOR STRUCT VECTOR" << endl;
      {
        vector<Prova> vec = {{7.0,1},{6.0,2},{8.0,3},{7.5,4}};
        cerr << (feq(mediaPonderada(vec),7.3));
      }
      {
        vector<Prova> vec = {{8.0,3},{7.0,2},{10.0,3},{5.5,4}};
        cerr << (feq(mediaPonderada(vec),7.5));
      }
      {
        vector<Prova> vec = {{5.0,1},{9.0,2},{6.4,3},{7.1,4}};
        cerr << (feq(mediaPonderada(vec),7.06));
      }
    }

}

namespace _valor_imovel{
    //@tests
    void tests(){
    	cerr << "#open valor_imovel BRONZE IF ENUM STRUCT" << endl;
    	{
    		Imovel im{3,3,100,3,CENTRO};
    		cerr << (valor_imovel(im) == 741710);
    	}
    	{
    		Imovel im{3,3,100,3,ZONA_LESTE};
    		cerr << (valor_imovel(im) == 654450);
    	}
    	{
    		Imovel im{3,3,100,3,ZONA_SUL};
    		cerr << (valor_imovel(im) == 698080);
    	}
    }

}

//@question calculadora

//Dicas: --



//@question dimensoes_caixa

//Qualquer dúvida acesse este site:
//http://educacaomatematica10.blogspot.com.br/2012/06/perimetro-area-e-volume.html

//@question hora_diferenca

//Faça uma função que converte de tempo para segundos.
//Converta os dois tempos para segundos.
//Subtraia os segundos
//O resultado da subtração, converta de volta para tempo.

//@question valor_imovel

//Dicas: --
int main(){
    _calculadora::tests();
    _cartas_nome::tests();
    _cartas_trinca::tests();
    _dimensoes_caixa::tests();
    _hora_diferenca::tests();
    _media_ponderada::tests();
    _valor_imovel::tests();
    cerr << "#end" << endl;
    return 0;
}
