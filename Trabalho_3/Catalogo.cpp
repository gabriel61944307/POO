/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "Catalogo.h"

using namespace catalogo;

Catalogo::Catalogo() {
}

Catalogo::~Catalogo() {
}

void Catalogo::adicionaMidia(Midia* midia) {
    midias.push_back(midia);
}

void Catalogo::removeMidia(string titulo) {
    for (int i = 0; i <= midias.size(); i++) {
        Midia* midia = midias[i];
        if (midia->getTitulo() == titulo) {
            midias.erase(midias.begin() + i);
            break;
        }
    }
}

Midia* Catalogo::obtemMidia(string titulo) {
    bool verif = 1;
    for (int i = 0; i <= midias.size(); i++) {
        Midia* midia = midias[i];
        if (midia->getTitulo() == titulo) {
            return midia;
        }
        else{
            verif = 0;
        }
    }
    if(!verif){
        return NULL;
    }
}

int Catalogo::quantidadeDeMidias() {
    int qtdMidias = midias.size();
}

int Catalogo::quantidadeDeCDs() {
    int CDs = 0;
    for (int i = 0; i < midias.size(); i++) {
        Midia* midia = midias[i];
        if (midia->getTipo() == 1) {
            CDs++;
        }
    }
    return CDs;
}

int Catalogo::quantidadeDeDVDs() {
    int DVDs = 0;
    for (int i = 0; i < midias.size(); i++) {
        Midia* midia = midias[i];
        if (midia->getTipo() == 2) {
            DVDs++;
        }
    }
    return DVDs;
}

int Catalogo::quantidadeDeJogos() {
    int Jogos = 0;
    for (int i = 0; i < midias.size(); i++) {
        Midia* midia = midias[i];
        if (midia->getTipo() == 3) {
            Jogos++;
        }
    }
    return Jogos;
}

void Catalogo::imprimeColecao() {
    if (midias.size() > 0) {
        sort(midias.begin(), midias.end(), Midia::compTitulo);
        vector<Midia*> copia = midias;
        sort(copia.begin(), copia.end(), Midia::compAno);
        for (int i = 0; i < copia.size(); i++) {
            copia[i]->imprimeFicha();
        }
    }            
}

void Catalogo::imprimeColecaoPorTipo(int tipo) {
    if (midias.size() > 0) {
        sort(midias.begin(), midias.end(), Midia::compTitulo);
        vector<Midia*> copia = midias;
        sort(copia.begin(), copia.end(), Midia::compAno);
        if(tipo == 1){
            for(int i = 0; i< copia.size(); i++){
                if(copia[i]->getTipo() == 1){
                    copia[i]->imprimeFicha();
                }
            }
        }
        if(tipo == 2){
            for(int i = 0; i< copia.size(); i++){
                if(copia[i]->getTipo() == 2){
                    copia[i]->imprimeFicha();
                }
            }
        }
        if(tipo == 3){
            for(int i = 0; i< copia.size(); i++){
                if(copia[i]->getTipo() == 3){
                    copia[i]->imprimeFicha();
                }
            }
        }
    }
}
