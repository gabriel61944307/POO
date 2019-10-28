/*  Trabalho 1 de Programação de computadores.
 *  
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "Aluno.h"
#include <iostream>

using namespace std;

Aluno::Aluno(int RA, string nome, double nota1, double nota2, double trabalho){
    this->RA = RA;
    this->nome = nome;
    this->nota1 = nota1;
    this->nota2 = nota2;
    this->trabalho = trabalho;
}

Aluno::~Aluno(){
}

double Aluno::media(){
    double Media;
    Media = nota1*0.35 + nota2*0.35 + trabalho*0.3;
    return Media;
}

bool Aluno::aprovado(){
    bool situacao = false;
    if(media() >= 6){
        situacao = true;
    }
    return situacao;
}

bool Aluno::sac(){
    bool situacaosac = false;
    double MF = media();
    if(MF<6 && MF>=5){
        situacaosac = true;
    }
    return situacaosac;
}

double Aluno::notaSAC(){
    // Resolvendo a inequação (SAC+MF)/2>=6, se chega em SAC>=12-MF, a menor nota
    // possível seria o equivalente a igualdade, logo SAC = 12 - MF.
    double MF = media();
    double SAC = 0;
    if(sac()){
        SAC = 12 - media();
    }
    return SAC;
}

/*void Aluno::imprime() {
    cout << "RA: " << RA << endl;
    cout << "Nome: " << nome << endl;
    cout << "N1: " << nota1 << "         N2: " << nota2 << "          T: " << trabalho << endl;
    cout << "Media: " << media() << endl;
    cout << "Situacao: "<< aprovado() << endl;
    cout << "Situacao SAC: "<<sac() << endl;
    cout << "Nota minima necessaria: " << notaSAC() << endl;
}*/

int Aluno::getRA(){
    return RA;
}

string Aluno::getNome(){
    return nome;
}
