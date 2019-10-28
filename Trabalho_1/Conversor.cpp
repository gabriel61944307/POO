/*  Trabalho 1 de Programação de computadores.
 *  
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "Conversor.h"
#include <iostream>

using namespace std;

Conversor::Conversor(double Tcompra, double Tvenda):
    Tcompra(Tcompra), Tvenda(Tvenda){
}

Conversor::~Conversor(){
}

void Conversor::imprimeTaxas(){
    cout << "Taxa de compra: " << Tcompra << endl;
    cout << "Taxa de venda: " << Tvenda << endl;
}

double Conversor::compraDolar(double reais){
    double dolar;
    dolar = reais * Tcompra;
    return dolar;
}

double Conversor::vendeDolar(double dolar){
    double reais;
    reais = dolar * Tvenda;
    return reais;
}

double Conversor::getTcompra(){
    return Tcompra;
}
void Conversor::setTcompra(double Tcompra){
    this->Tcompra = Tcompra;
}

double Conversor::getTvenda(){
    return Tvenda;
}
void Conversor::setTvenda(double Tvenda){
    this->Tvenda = Tvenda;
}
