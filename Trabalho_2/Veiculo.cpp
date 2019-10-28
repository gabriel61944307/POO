/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "Veiculo.h"
#include "Pessoa.h"
#include <string>
#include <iostream>


using namespace pc;
Veiculo::Veiculo(string marca, string modelo, string cor, int ano, Pessoa* dono):
    marca(marca), modelo(modelo), cor(cor), ano(ano), dono(dono){
    dono->setVeiculo(this);
}

Veiculo::~Veiculo() {
}

void Veiculo::imprime(){
    cout << "Marca: "<< marca << ", ";
    cout << "Modelo: "<< modelo << ", ";
    cout << "Cor: "<< cor << ", ";
    cout << "Ano: "<< ano << ", ";
}

string Veiculo::getMarca(){
    return marca;
}
void Veiculo::setMarca(string val){
    marca = val;
}
string Veiculo::getModelo(){
    return modelo;
}
void Veiculo::setModelo(string val){
    modelo = val;
}
string Veiculo::getCor(){
    return cor;
}
void Veiculo::setCor(string val){
    cor = val;
}
int Veiculo::getAno(){
    return ano;
}
void Veiculo::setAno(int val){
    ano  = val;
}
