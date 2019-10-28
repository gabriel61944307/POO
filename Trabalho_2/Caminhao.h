/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef CAMINHAO_H
#define CAMINHAO_H
#include "Veiculo.h"
#include <string>

using namespace std;
namespace pc{
    class Caminhao : public Veiculo{
    public:
        Caminhao(string marca, string modelo, string cor, int ano, Pessoa* dono,int nroEixos);
        virtual ~Caminhao();
        void imprime();

        int getNroEixos();
        void setNroEixos(int nroEixos);

    private:
        int nroEixos;
    };
}
#endif /* CAMINHAO_H */
