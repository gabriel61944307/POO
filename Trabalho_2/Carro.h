/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef CARRO_H
#define CARRO_H
#include "Veiculo.h"

#include <string>

using namespace std;
namespace pc{
    class Carro : public Veiculo{
    public:
        Carro(string marca, string modelo, string cor, int ano, Pessoa* dono, int volumePM, int nroPortas);
        virtual ~Carro();
        void imprime();

        int getVolumePM();
        void setVolumePM(int volumePM);
        int getNroPortas();
        void setNroPortas(int nroPortas);

    private:
        int volumePM, nroPortas;
    };
}
#endif /* CARRO_H */
