/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef VEICULO_H
#define VEICULO_H

#include <string>
#include <iostream>

using namespace std;

namespace pc{
    class Pessoa;
    class Veiculo {
    public:
        Veiculo(string marca, string modelo, string cor, int ano, Pessoa* dono);
        virtual ~Veiculo();
        virtual void imprime();

        string getMarca();
        void setMarca(string marca);
        string getModelo();
        void setModelo(string modelo);
        string getCor();
        void setCor(string cor);
        int getAno();
        void setAno(int ano);

    private:
        string marca, modelo, cor;
        int ano;
        Pessoa* dono;
    };
}
#endif /* VEICULO_H */
