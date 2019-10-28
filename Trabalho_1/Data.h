/*  Trabalho 1 de Programação de computadores.
 *  
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef DATA_H
#define DATA_H
#include <string>

using namespace std;

class Data{
    public:
        Data(int dia, int mes, int ano);
        virtual ~Data();

        int compara(Data& outrap);

        int getDia();
        int getMes();
        int getAno();
        string getMesExtenso();

        void imprime();

    protected:

    private:
        int dia, mes, ano;
};

#endif // DATA_H
