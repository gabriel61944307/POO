/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef JOGO_H
#define JOGO_H
#include "Midia.h"
#include <string>
#include <iostream>

using namespace std;
namespace catalogo{
    class Jogo: public Midia {
    public:
        Jogo(string titulo, int anoCriacao, string genero);
        virtual ~Jogo();
        
        string getGenero();
        void setGenero(string val);
        
        int getTipo();
        void imprimeDados();
    private:
        string genero;
    };
}
#endif /* JOGO_H */
