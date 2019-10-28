/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef DVD_H
#define DVD_H
#include "Midia.h"
#include <vector>
#include<string>
#include<iostream>

using namespace std;

namespace catalogo{
    class DVD : public Midia {
    public:
        DVD(string titulo, int anoCriacao,string diretor);
        virtual ~DVD();
        
        void adicionaArtista(string art, string pap);
        int getTipo();
        void imprimeDados();
        
    private:
        string diretor;
        vector<string> artista;
        vector<string> papel;
    };
}

#endif /* DVD_H */
