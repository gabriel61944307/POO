/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "Caminhao.h"
#include <iostream>
using namespace pc;
Caminhao::Caminhao(string marca, string modelo, string cor, int ano, Pessoa* dono, int nroEixos):
    Veiculo(marca, modelo, cor, ano, dono), nroEixos(nroEixos){
}

Caminhao::~Caminhao() {
}

void Caminhao::imprime(){
    Veiculo::imprime();
    cout << "Eixos: " << nroEixos << endl;
}

int Caminhao::getNroEixos(){
    return nroEixos;
}
void Caminhao::setNroEixos(int val){
    nroEixos = val;
}
