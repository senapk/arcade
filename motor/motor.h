///////////////////////////////////////////////////
// Engine para testes locais
// @author David Sena Oliveira
// @version 5.1
// sena.ufc@gmail.com
//
// Link permanente: http://tinyurl.com/fup-motor-h
//
// No linux, para instalar basta colocar esse arquivo
// em /usr/local/include/
//
// defina __COLORS__ para incluir as cores
//
// Livre para uso e alteração.
//
// Este arquivo é a composição de vários arquivos
// criados individuais.
//
// Os comandos globais estão no fim do arquivo.
//
//////////////////////////////////////////////////

#define __NO_COLORS__
#ifdef __COLORS__
#undef __NO_COLORS__
#endif


/*****************************************************************************/
/************* Color Class **********************************************/
/*****************************************************************************/
//color.h
#ifndef COLOR_H
#define COLOR_H

#include <iostream>

namespace bug{
    using namespace std;
    enum Color{BLUE, GREEN, RED, YELLOW, WHITE, CLEAR, RESET};
    void setColor(Color color);//muda o esquema de cores

    /*
     * Implementacao de cores para o Windows por Ciano Saraiva.
     */

#ifdef  __NO_COLORS__
#define FRED     cout << "";
#define FGREEN   cout << "";
#define FBLUE    cout << "";
#define FYELLOW  cout << "";
#define FWHITE   cout << "";
#define FRESET   cout << "";
#define FCLEAR   cout << "";
#elif defined(__unix__)
#define FRED     cout << "\033[1;31m";
#define FGREEN   cout << "\033[1;32m";

#define FBLUE    cout << "\033[1;32m";
#define FYELLOW  cout << "\033[1;33m";
#define FWHITE   cout << "\033[1;37m";
#define FRESET   cout << "\033[0m";
#define FCLEAR   cout << "\033[2J";
    //#definW SETBACKBLACK "\033[30m"
#elif defined(_WIN32) || defined(WIN32)
#include <windows.h> //biblioteca necessaria
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);//inicializa as "funcoes"
#define FRED     SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_RED|FOREGROUND_INTENSITY);
#define FGREEN   SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
#define FBLUE    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
#define FYELLOW  SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN|FOREGROUND_RED | FOREGROUND_INTENSITY);
#define FWHITE   SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY);
#define FRESET   system("color ");
#define FCLEAR   system("cls");
#endif

    void setColor(Color color)
    {
        switch (color)
        {
            case GREEN:  FGREEN;  break;
            case BLUE:   FBLUE;   break;
            case RED:    FRED;    break;
            case YELLOW: FYELLOW; break;
            case WHITE:  FWHITE;  break;
            case RESET:  FRESET;  break;
            case CLEAR:  FCLEAR;  break;
        }
    }
} //namespace bug

#endif //COLOR_H

/*****************************************************************************/
/************* Classifier Class **********************************************/
/*****************************************************************************/
//class.h
#ifndef CLASS_H
#define CLASS_H

#include <map>
namespace bug{

    typedef uint32_t flag_type;

    enum LEVEL{
        BRONZE = 2,
        PRATA = 4,
        OURO = 8,
        DIAMANTE = 16,
    };

    std::map<string, LEVEL> str_2_level {
        {"BRONZE", BRONZE}, {"PRATA", PRATA}, {"OURO", OURO}, {"DIAMANTE", DIAMANTE}
    };

    enum FLAGS{
        NONE     = 0,
        IF       = 1<<0,
        FOR      = 1<<1,

        ENUM     = 1<<2,
        STRUCT   = 1<<3,
        STRING   = 1<<4,

        VETOR    = 1<<5,
        MATRIZ   = 1<<6,

        POINTER  = 1<<7,
        STREAM   = 1<<8,
        NEW      = 1<<9,

        OOP      = 1<<10,
        TEMPLATE = 1<<11,
        RAND     = 1<<12,
        RANDOM   = 1<<13,

        TUPLE    = 1<<14,
        VECTOR   = 1<<15,
        LIST     = 1<<16,
        MAP      = 1<<17,
        SET      = 1<<18,

        FUNCTION = 1<<19,
        LAMBDA   = 1<<20,
    };

    std::map<flag_type, int> tag_list= {
        {IF,  1},
        {FOR, 2},
        {ENUM, 1},
        {STRUCT, 2},
        {STRING, 2},
        {VETOR, 2},
        {MATRIZ, 2},
        {POINTER, 3},
        {STREAM, 2},
        {NEW, 2},
        {OOP, 3},
        {TEMPLATE, 2},
        {RAND, 2},
        {RANDOM, 3},
        {TUPLE, 2},
        {VECTOR, 3},
        {LIST, 2},
        {MAP, 2},
        {SET, 2},
        {FUNCTION, 2},
        {LAMBDA, 2}
    };

    map<string, flag_type> str_2_tag {
        {"NONE",  NONE},
        {"IF",  IF},
        {"FOR", FOR},
        {"ENUM", ENUM},
        {"STRUCT", STRUCT},
        {"STRING", STRING},
        {"VETOR", VETOR},
        {"MATRIZ", MATRIZ},
        {"POINTER", POINTER},
        {"STREAM", STREAM},
        {"NEW", NEW},
        {"OOP", OOP},
        {"TEMPLATE", TEMPLATE},
        {"RAND", RAND},
        {"RANDOM", RANDOM},
        {"TUPLE", TUPLE},
        {"VECTOR", VECTOR},
        {"LIST", LIST},
        {"MAP", MAP},
        {"SET", SET},
        {"FUNCTION", FUNCTION},
        {"LAMBDA", LAMBDA}
    };

    int tags_sum(flag_type flags){
        int acc = 0;
        for(const auto& par : tag_list){
            if(flags & par.first)
                acc += par.second;
        }
        return acc;
    }
} //namespace bug
#endif //CLASS_H



/*****************************************************************************/
/************* Question Class **********************************************/
/*****************************************************************************/
//question.h
#ifndef QUESTION_H
#define QUESTION_H

using namespace bug;

//#include "class.h"

namespace bug{

    class Question
    {
        private:
            int    _value{1};
            std::string _name{""};
            uint32_t _tags{NONE};
            std::string _tests = "";
        public:
            static const int MAX_NAME = 20;
            static const int MAX_TESTS = 30;

            Question(std::string name = "", int value = 1, uint32_t tags = NONE):
                _value(value),
                _name(name),
                _tags(tags)
            {}

            void setTags(uint32_t tags){
                _tags = tags;
            }
            void setValue(int value){
                _value = value;
            }

            std::string getName () const{ return _name; }
            std::string getTests() const{ return _tests; }
            int    getTotalValue() const{ return _value + tags_sum(_tags); }
            int    getResult() const{
                if(isWon())
                    return getTotalValue();
                return 0;
            }

            bool isWon () const{
                for(char c : _tests)
                    if(c == '0')
                        return false;
                return true;
            }

            void addTest (char value) {
                if(_tests.length() < MAX_TESTS)
                    _tests += value;
            }
    };
}
#endif

/*****************************************************************************/
/************* Shower Class **********************************************/
/*****************************************************************************/
//shower.h
#ifndef SHOWER_H
#define SHOWER_H
#include <iostream>
#include <cstdio>
#include <vector>
//#include "question.h"
//#include "colors.h"


namespace bug{

class Shower
{
    public:
        enum MODEL { FULL, ARCADE, SUMMARY };
        static string strformat(string nome, int size)
        {
            nome = nome.substr(0, size);
            int comp = size - nome.length();
            for(int i = 0; i < comp ; i++)
                nome.append("_");
            return nome;
        }

        static void printQuestion(const Question& question, int number){
            string qname  = strformat (question.getName(), Question::MAX_NAME);
            string qtests = strformat (question.getTests(), Question::MAX_TESTS);
            int    qvalue = question.getTotalValue();
            bool   won    = question.isWon();

            setColor(WHITE); printf("%2d :: ", number); //numero da questao
            if (won){
                setColor (GREEN);
                printf ("%s", "DONE");
            }
            else{
                setColor (RED);
                printf ("%s", "FAIL");
            }
            int qpts = won ? qvalue : 0;
            setColor(WHITE);
            printf(" :: %2d/%2d :: ", qpts, qvalue);
            cout << qname << " :: " << qtests  << " :: " << endl;
        }

        static void printPercentual(int aluno_pontos, int total_pontos){
            double percentual = (double)aluno_pontos/total_pontos * 100.0;
            cout << "        ";
            printf("Total Obtido: ");
            setColor(YELLOW);
            printf("%2d/%2d ", aluno_pontos, total_pontos);
            setColor(WHITE);
            printf(":: Percentual  : ");
            setColor(YELLOW);
            printf("%2.1f",  percentual);
            setColor(WHITE);
            printf(" porcento");
        }


        static void total(MODEL model, int aluno_pontos, int total_pontos, const vector<Question*>& question_list) {
            if(model == SUMMARY){
                string maximos = "maximo = {";
                string obtidos = "obtido = {";

                for(auto it = begin(question_list); it != prev(end(question_list)); it++){
                    maximos += to_string((*it)->getTotalValue()) + ", ";
                    obtidos += to_string((*it)->getResult()) + ", ";
                }
                maximos += to_string(question_list.back()->getTotalValue()) + "}";
                obtidos += to_string(question_list.back()->getResult()) + "}";
                cout << maximos << endl;
                cout << obtidos << endl;
                return;
            }
            //print header
            setColor(YELLOW);
            cout << "No ::STATUS:: VALOR :: " << strformat("NOME DA QUESTAO", Question::MAX_NAME) << " :: " ;
            cout << strformat("TESTES", Question::MAX_TESTS) << " ::" << endl;
            //print questions
            int i = 0;
            for(const auto &qptr : question_list)
                printQuestion(*qptr, i++);
            if(model == FULL)
                printPercentual(aluno_pontos, total_pontos);
            cout << endl;

        }

        //void resumeTotal(int aluno_pontos, int total_pontos){


            ////imprimindo o valor das questões no resumo
            //format(WHITE);
            //cout << endl << "Valor  :: "  ;
            //for(int i = 0; i < nquestion_list; i++)
            //{
                //printf("%d|", question_list[i].getValue());
            //}
            //cout << " : " << total_pontos;

            ////imprimindo os pontos obtidos no resumo
            //format(WHITE);
            //cout << endl << "Obtido :: "  ;
            //for(int i = 0; i < nquestion_list; i++)
            //{
                //if(question_list[i].isWon())
                    //printf("%d|", question_list[i].getValue());
                //else
                    //printf("0|");
            //}
            //cout << " : " << aluno_pontos << endl;

        //}

};


}//namespace bug

#endif //SHOWER_H


/*****************************************************************************/
/************* Tester Class **********************************************/
/*****************************************************************************/
//tester.h
#ifndef TESTER_H
#define TESTER_H

#include <vector>
#include <map>
#include <cmath>
#include <iostream>
//#include "question.h"
//#include "shower.h"

namespace bug{
    class Tester
    {
        private:
            std::vector<Question*> _question_list;
            std::map <std::string, bool> _map_list;
            Question* _ptr = nullptr;
            int aluno_pontos = 0;
            int total_pontos = 0;

            //Contando os pontos
            void updatePoints(){
                aluno_pontos = 0;
                total_pontos = 0;
                for(const auto& qptr : _question_list)
                {
                    int    qvalue = qptr->getTotalValue();
                    bool   won = qptr->isWon();
                    if (won)
                        aluno_pontos += qvalue;
                    total_pontos += qvalue;
                }
            }

        public:
            Tester(){
            }

            Question * getQuestion(){
                return _ptr;
            }

            void open(std::string name, int level, uint32_t flags ) {
                _ptr = nullptr;
                for(auto& question : _question_list){
                    if(question->getName() == name){
                        _ptr = question;
                        return;
                    }
                }
                if(_ptr == nullptr){
                    _ptr = new Question(name, level, flags);
                    _question_list.push_back(_ptr);
                }
                updatePoints();
            }

            void add (char c) {
                string valores = "01 -_!@#$%*[]{}()<>|.,";
                if(_ptr == nullptr){
                    setColor(RED);
                    cerr << "Abra uma questão primeiro" << endl;
                    return;
                }
                if (valores.find(c) != string::npos){
                    _ptr->addTest(c);
                    _map_list[_ptr->getName()] = _ptr->isWon();
                }
                updatePoints();
            }

            void add (bool b) {
                if(b == true)
                    add('1');
                else
                    add('0');
            }

            static bool feq(double a, double b) {
                return fabs(a - b) < (1.0E-2);
            }


            void total() const {
                Shower::total(Shower::FULL, aluno_pontos, total_pontos, _question_list);
            }

            void arcade() const {
                Shower::total(Shower::ARCADE, aluno_pontos, total_pontos, _question_list);
            }
            void summary() const {
                Shower::total(Shower::SUMMARY, aluno_pontos, total_pontos, _question_list);
            }

            bool getResult(std::string name){
                return _map_list[name];
            }
    };

}//namespace bug

#endif //TESTER_H

/*****************************************************************************/
/************* Static Methods ************************************************/
/*****************************************************************************/
#ifndef STATIC_H
#define STATIC_H

//definindo para os alunos
#include<iostream>
using namespace std;
using namespace bug;

static Tester tester;


//criando objeto oco para redirecionamentos
#include <sstream>
class Motor{
    public:

    template <typename T>
    Motor& operator<<(const T& x)
    {
        std::cout << x;
        return *this;
    }

    // function that takes a custom stream, and returns it
    typedef Motor& (*MotorManipulator)(Motor&);

    // take in a function with the custom signature
    Motor& operator<<(MotorManipulator manip)
    {
        // call the function, and return it's value
        return manip(*this);
    }

    // define the custom endl for this stream.
    // note how it matches the `MotorManipulator`
    // function signature
    static Motor& endl(Motor& stream)
    {
        // print a new line
        //std::cout << std::endl;

        // do other stuff with the stream
        // std::cout, for example, will flush the stream
        //stream << "Called Motor::endl!" << std::endl;

        return stream;
    }

    // this is the type of std::cout
    typedef std::basic_ostream<char, std::char_traits<char> > CoutType;

    // this is the function signature of std::endl
    typedef CoutType& (*StandardEndLine)(CoutType&);

    // define an operator<< to take in std::endl
    Motor& operator<<(StandardEndLine manip)
    {
        // call the function, but we cannot return it's value
        manip(std::cout);
        return *this;
    }


    Motor& operator << (bool result){
        tester.add(result);
        return *this;
    }

    Motor& operator << (const char c){
        tester.add(c);
        return *this;
    }
    //recebe uma string e retorna um valor. Um inteiro ou o valor do enum Level
    int get_level(const string& str){
        //testando se eh um número
        stringstream sslevel(str);
        int valor = 0, level = 0;
        //se falhou, nao eh numero, eh um LEVEL
        if(sslevel >> valor){
            level = valor;
        }else{
            auto it = str_2_level.find(str);
            if(it == str_2_level.end()){
                cout << "\n" << "Level " << str << " Nao existe \n";
            }else{
                level = (int) it->second;
            }
        }
        return level;
    };

    //atualizar valor e tags da questao
    void atualizar_questao(stringstream& ss){
            //cout << ss.str();
            string str_FLAG = "NONE";
            int value = (int)bug::BRONZE;
            bug::flag_type total_flag = bug::NONE;

            //pegando o valor, seja inteiro ou via BRONZE PRATA OURO
            int int_value;
            ss >> int_value;
            if(!ss.fail()){
                value = int_value;
            }else{
                ss.clear();
                string str_level = "BRONZE";
                ss >> str_level;
                value = get_level(str_level);
            }

            //puxando a lista e tags de sintaxe
            while(!ss.fail()){
                string str_flag;
                ss >> str_flag;
                if(str_flag.length() < 2)
                    continue;

                auto it = str_2_tag.find(str_flag);
                if(it == str_2_tag.end()){
                    cout << "Flag " << str_flag << " nao existe.\n";
                }else{
                    total_flag = total_flag | it->second;
                }

                //bug::flag_type flag = str_2_tag[str_flag];
                //total_flag = total_flag | flag;
            }

            auto question = tester.getQuestion();
            question->setValue(value);
            question->setTags(total_flag);
            //t_open(nome, level, total_flag);
    }

    //temos 4 possibilidades
    //#open nome_da_questao
    //#set valor tag tag tag
    //#end of #fim
    Motor& operator << (const char* _texto) {

        stringstream ss;
        ss << _texto;
        string primeira;
        //pega a primeira palavra de _texto
        ss >> primeira;

        if(primeira == "#fim" || primeira == "#end")
        {
            //t_arcade();
            tester.arcade();
            return *this;
        }

        if(primeira == "#open"){
            string name;
            ss >> name;
            //t_open(name, 1, NONE);
            tester.open(name, 1, NONE);
            string resto;
            getline(ss, resto);
            stringstream complemento;
            complemento << resto;
            atualizar_questao(complemento);
            return *this;
        }
        if(primeira == "#set"){
            atualizar_questao(ss);
            return *this;
        }
        if(primeira == "#summary"){
            tester.summary();
            return *this;
        }
        cout << ss.str();
        return *this;
    }
};

static Motor motor;

#define cout motor

#endif //STATIC_H


