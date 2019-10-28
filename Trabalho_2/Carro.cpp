/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "Carro.h"
#include <iostream>


using namespace pc;
Carro::Carro(string marca, string modelo, string cor, int ano, Pessoa* dono, int volumePM, int nroPortas) :
    Veiculo(marca,modelo,cor,ano, dono), volumePM(volumePM), nroPortas(nroPortas) {
}

Carro::~Carro() {
}

void Carro::imprime(){
    Veiculo::imprime();
    cout << "Volume: " << volumePM << ", ";
    cout << "Portas: " << nroPortas << endl;
}

int Carro::getVolumePM(){
    return volumePM;
}
void Carro::setVolumePM(int val){
    volumePM = val;
}
int Carro::getNroPortas(){
    return nroPortas;
}
void Carro::setNroPortas(int val){
    nroPortas = val;
}
