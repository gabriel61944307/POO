/*  Trabalho 1 de Programação de computadores.
 *  
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef VOO_H
#define VOO_H
#include <string>
#include <iostream>
#include "Data.h"

using namespace std;

class Voo{
    public:
        Voo(int numero, Data& data, string horario);
        virtual ~Voo();

        int proximoLivre();

        bool verifica(int npoltrona);
        bool ocupa(int npoltrona);
        bool desocupa(int npoltrona);

        int vagas();
        void imprime();


        int getNumero();
        void setNumero(int numero);

        string getHorario();
        void setHorario(string horario);

        Data getData();
        void setData(Data& data);

    protected:

    private:
        // Se lugares[x] = 0 -> poltrona livre
        // Se lugares[x] = 1 -> poltrona ocupada
        int numero, lugares[100] = {0};
        Data data;
        string horario;
};

#endif // VOO_H
