/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// motor.h: Baixe em http:tinyurl.com/fup-motor-h
// coloque em /usr/local/include/motor.h
// ou apenas comente a linha #include <motor.h>
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <cmath>
using namespace std;
//@begin

//A calculadora do Darth Vader quebrou e ele está usando a força para convencer
//você a fazer uma pra ele.
//Na calculadora você recebe dois floats e uma operação
//As possibilidades de operação são:
// + soma
// - subtracao
// * multiplicacao
// / divisao
//
//Retorne uma struct Sucesso com o resultado da operação e se deu certo.
//Por exemplo, divisao por 0, ou op invalido deve retornar false em sucesso e 0.0 em value.
//
//@return: struct Result.

struct Param{
    float value1;
    float value2;
    char op;
};
struct Result{
    float value;
    bool sucesso;
};

Result calcular(Param param){
    return Result {0.0, false};
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return (fabs(A - B) < 0.01);};
void tests(){
    cout << "#open calcular BRONZE IF STRUCT" << endl;
    {
        Result res{20, true};
        Result resA = calcular(Param{10,10,'+'});
        cout << ( (feq(res.value, resA.value) && res.sucesso == resA.sucesso) );
    }
    {
        Result res{100, true};
        Result resA = calcular(Param{10,10,'*'});
        cout << ( (feq(res.value, resA.value) && res.sucesso == resA.sucesso) );
    }
    {
        Result res{0.0, true};
        Result resA = calcular(Param{1,1,'-'});
        cout << ( (feq(res.value, resA.value) && res.sucesso == resA.sucesso) );
    }
    {
        Result res{0.0, false};
        Result resA = calcular(Param{1,0,'/'});
        cout << ( (feq(res.value, resA.value) && res.sucesso == resA.sucesso) );
    }
    {
        Result res{0.0, false};
        Result resA = calcular(Param{10,21,'a'});
        cout << ( (feq(res.value, resA.value) && res.sucesso == resA.sucesso) );
    }
    {
        Result res{-15, true};
        Result resA = calcular(Param{-10,5,'-'});
        cout << ( (feq(res.value, resA.value) && res.sucesso == resA.sucesso) );
    }
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//
//
//
//
//-- :saciD//
//

int main(){
    tests();
    cout << endl << "#end";
    return(0);
}