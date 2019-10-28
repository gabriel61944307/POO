/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef CD_H
#define CD_H
#include "Midia.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

namespace catalogo{
    class CD : public Midia{
    public:
        CD(string titulo, int anoCriacao, string artista);
        virtual ~CD();
        
        string getArtista();
        void setArtista(string val);
        
        void adicionaFaixa(string f, int d);
        int getTipo();
        void imprimeDados();
        
    private:
        string artista;
        vector<string> faixa;    
        vector<int> duracao;
    };
}

#endif /* CD_H */
