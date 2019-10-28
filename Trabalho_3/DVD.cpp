/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "DVD.h"
using namespace catalogo;

DVD::DVD(string titulo, int anoCriacao,string diretor): Midia(titulo, anoCriacao), diretor(diretor){
}

DVD::~DVD() {
}

void DVD::adicionaArtista(string art, string pap) {
    artista.push_back(art);
    papel.push_back(pap);
}

int DVD::getTipo() {
    return 2;
}

void DVD::imprimeDados() {
    cout << "Tipo: Filme em DVD" << endl;
    cout << "Diretor: " << diretor << endl;
    for(int i=0; i < artista.size(); i++){
        cout << "Artista " << i+1 << ": " << artista[i] << ", papel: " << papel[i] << endl; 
    }
}
