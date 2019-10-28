/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "CD.h"

using namespace catalogo;

CD::CD(string titulo, int anoCriacao, string artista): Midia(titulo,anoCriacao), artista(artista) {
}

CD::~CD() {
}

string CD::getArtista() {
    return artista;
}
void CD::setArtista(string val) {
    artista = val;
}

void CD::adicionaFaixa(string f, int d) {
    faixa.push_back(f);
    duracao.push_back(d);
}

int CD::getTipo() {
    return 1;
}

void CD::imprimeDados() {
    cout << "Tipo: CD de música" << endl;
    cout << "Artista: " << getArtista() << endl;
    for(int i=0; i < faixa.size(); i++){
        cout << "Faixa " << i+1 << ": " << faixa[i] << ", duração: " << duracao[i]/60 << ":" << duracao[i]%60 << endl;
    }
}
