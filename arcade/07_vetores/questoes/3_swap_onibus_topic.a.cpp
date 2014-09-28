/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <motor.h>
using namespace std;
//@begin

/*
Na hora de irem pra festa um grupo de amigos encheu um onibus e uma topic.
Acontece que alguns dos amigos que estavam no onibus queriam ir pra topic.
Resolva esse problema trocando os amigos entre a topic e o onibus.

No onibus ficam preferencialmente os números positivo e na topic os impares.
Toda vez que você encontrar um número negativo no onibus, tente achar um número positivo na
topic e troque os dois.
Você não pode apenas transferir elementos de um pro outro porque ambos estão lotados,
você só pode trocar.
*/


void trocar(vector<int>& onibus, vector<int>& topic){
    return;
}

//@end

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

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}