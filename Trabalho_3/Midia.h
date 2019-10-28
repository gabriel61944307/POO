/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef MIDIA_H
#define MIDIA_H
#include <string>
#include <iostream>

using namespace std;

namespace catalogo{
    class Midia {
    public:
        Midia(string titulo, int anoCriacao);
        virtual ~Midia();
        
        string getTitulo();
        void setTitulo(string val);
        int getAnoCriacao();
        void setAnoCriacao(int val);
        
        static bool compAno(Midia* m1, Midia* m2);
        static bool compTitulo(Midia* m1, Midia* m2);
        
        virtual int getTipo() = 0;
        virtual void imprimeDados() = 0;
        void imprimeFicha();

    private:
        string titulo;
        int anoCriacao;
    };
}

#endif /* MIDIA_H */
