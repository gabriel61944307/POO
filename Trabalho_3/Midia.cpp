/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "Midia.h"


using namespace catalogo;

Midia::Midia(string titulo, int anoCriacao): titulo(titulo), anoCriacao(anoCriacao) {
}

Midia::~Midia() {
}

string Midia::getTitulo() {
    return titulo;
}
void Midia::setTitulo(string val) {
    titulo = val;
}

int Midia::getAnoCriacao() {
    return anoCriacao;
}
void Midia::setAnoCriacao(int val) {
    anoCriacao = val;
}

void Midia::imprimeFicha() {
    cout << "Titulo: " << titulo << endl;
    cout << "Ano: " << anoCriacao << endl;
    this->imprimeDados();
}

bool Midia::compAno(Midia* m1, Midia* m2) {
    return m1->anoCriacao < m2->anoCriacao;
}

bool Midia::compTitulo(Midia* m1, Midia* m2) {
    return m1->titulo < m2->titulo;
}
