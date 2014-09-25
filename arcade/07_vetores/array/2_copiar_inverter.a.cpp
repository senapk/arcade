/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <iostream>
#include <motor.h>
using namespace std;
//@begin


//Faça uma função que copie os elementos de um vetor dentro de outro.
//Considere que eles já estão alocados com o mesmo tamanho.
void copiar(int v1[], int v2[], int tam) {
    return;
}

//Faça uma função que copie os elementos na ordem invertida.
void inverter(int v1[], int v2[], int tam) {
    return;
}


//@end

void tests(){
    cout << "#open copiar_inverter ";
	int a1[] = {1};
	int b1[1];

	int a2[] = {1, 2, 3};
	int b2[3];

	int a3[] = {0, -1, 0, 2};
	int b3[4];

	copiar(a1, b1, 1);
	copiar(a2, b2, 3);
	copiar(a3, b3, 4);

	cout << (b1[0] == 1);
	cout << (b2[0] == 1);
	cout << (b2[1] == 2);
	cout << (b2[2] == 3);
	cout << (b3[0] == 0);
	cout << (b3[1] == -1);
	cout << (b3[2] == 0);
	cout << (b3[3] == 2);
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//]ecidni - omitlu[ 1rotev od rolav o ebecer ]ecidni[ 2rotev    //
//secidni so sodot araP//
////
//:airacif omtirogla O//
//;1 - mat = omitlu o osac oN//
////
//.cte e odnuges o omitlunep o ,oriemirp o//
//ebecer otnemele omitlu o osac oN .oãçiubirta a adum sam ,raipoc//
//omtirogla od ocal o metnam ecoV .odnetrevni áj raipoc edop mébmaT//
////
//.retrevni sioped e aipóc ed omtirogla//
//o odnasu raipoc edop oãsrevni ed omtirogla o rebuos áj êcov eS//
//.raipoc oa etnelaviuqe é retrevnI//
//retrevni oatseuq#//
////
//]ecidni[ 1rotev od rolav o ebecer ]ecidni[ 2rotev    //
//secidni so sodot araP//
////
//.odnuges o arap rotev oriemirp od otnemele esse eipoc êcov//
//serotev sod ecidni adac arp euq é aiedi A .ecidní moc oçal//
//mu rasu rasicerp iav êcov ortuo arap rotev mu ed raipoc araP//
//raipoc oatseuq#//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}