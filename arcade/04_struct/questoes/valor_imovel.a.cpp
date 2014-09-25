/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

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

//@end

//@tests
void tests(){
	cout << "#open valor_imovel BRONZE IF ENUM STRUCT" << endl;
	{
		Imovel im{3,3,100,3,CENTRO};
		cout << (valor_imovel(im) == 741710);
	}
	{
		Imovel im{3,3,100,3,ZONA_LESTE};
		cout << (valor_imovel(im) == 654450);
	}
	{
		Imovel im{3,3,100,3,ZONA_SUL};
		cout << (valor_imovel(im) == 698080);
	}
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//-- :saciD//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}