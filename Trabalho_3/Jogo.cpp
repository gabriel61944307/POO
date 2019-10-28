/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "Jogo.h"
using namespace catalogo;

Jogo::Jogo(string titulo, int anoCriacao, string genero): Midia(titulo, anoCriacao), genero(genero) {
}

Jogo::~Jogo() {
}

string Jogo::getGenero() {
    return genero;
}
void Jogo::setGenero(string val) {
    genero = val;
}

int Jogo::getTipo() {
    return 3;
}

void Jogo::imprimeDados() {
    cout << "Tipo: Jogo Eletrônico" << endl;
    cout << "Gênero: " << genero << endl;
}
