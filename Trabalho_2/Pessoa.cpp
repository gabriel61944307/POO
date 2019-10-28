/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "Pessoa.h"
#include "Veiculo.h"
#include <string>
#include <iostream>
using namespace pc;

Pessoa::Pessoa(string nome, int idade): nome(nome), idade(idade) {
}

Pessoa::~Pessoa() {
}

void Pessoa::imprime(){
    cout << "Nome: " << nome << ", ";
    cout << "Idade: " << idade << endl;
    if(veiculo){
        cout << "Dados do Veículo" << endl;
        veiculo->imprime();
    }
}

Veiculo* Pessoa::getVeiculo() {
    return veiculo;
}
void Pessoa::setVeiculo(Veiculo* val){
    veiculo = val;
}
string Pessoa::getNome(){
    return nome;
}
void Pessoa::setNome(string val){
    nome = val;
}

int Pessoa::getIdade(){
    return idade;
}
void Pessoa::setIdade(int val){
    idade = val;
}
