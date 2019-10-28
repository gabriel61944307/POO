/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef CATALOGO_H
#define CATALOGO_H
#include "Midia.h"
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

namespace catalogo{
    class Catalogo {
    public:
        Catalogo();
        virtual ~Catalogo();
        void adicionaMidia(Midia* midia);
        void removeMidia(string titulo);
        Midia* obtemMidia(string titulo);
        int quantidadeDeMidias();
        int quantidadeDeCDs();
        int quantidadeDeDVDs();
        int quantidadeDeJogos();
        void imprimeColecao();
        void imprimeColecaoPorTipo(int tipo);
        
    private:
        string titulo;
        vector<Midia*> midias;
    };
}
#endif /* CATALOGO_H */
