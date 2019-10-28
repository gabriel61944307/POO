/*  Trabalho 1 de Programação de computadores.
 *  
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "Voo.h"
#include "Data.h"
#include <string>
#include <iostream>

using namespace std;

Voo::Voo(int numero, Data& data, string horario):
    numero(numero), data(data), horario(horario){
}

Voo::~Voo(){
}

int Voo::proximoLivre(){
    //Como o vetor começa no 0, ao achar o primeiro lugar livre se considera a posição do vetor + 1 para
    //que se tenha a posição "real" da poltrona livre. Ao achar a poltrona a = 100 para que o loop pare.
    int proximolivre = 0;
    for(int a=0; a<100; a++){
        if(lugares[a] == 0){
            proximolivre = a+1;
            a=100;
        }
    }

    return proximolivre;
}

//O vetor de 100 posiçoes lugares[] começa no 0, por isso npoltrona-1
bool Voo::verifica(int npoltrona){
    bool sitverif = true;
    if(lugares[npoltrona-1] == 1){
        sitverif = false;
    }

    return sitverif;
}

bool Voo::ocupa(int npoltrona){
    bool sitocupa = true;
    if(lugares[npoltrona-1] == 1){
        sitocupa = false;
    }
    else{
        lugares[npoltrona-1] = 1;
    }
    return sitocupa;
}

bool Voo::desocupa(int npoltrona){
    bool sitdesocupa = true;
    if(lugares[npoltrona-1] == 0){
        sitdesocupa = false;
    }
    else{
        lugares[npoltrona-1] = 0;
    }
    return sitdesocupa;
}

int Voo::vagas(){
    //se lugares[x] onde x é a posição for =0 é porque o lugar esta desocupado
    int vagas=0;
    for(int a=0; a<100; a++){
        if(lugares[a] == 0){
            vagas++;
        }
    }
    return vagas;
}

void Voo::imprime(){
    cout << "Numero do voo: " << numero << endl;
    cout << "Data do voo: ";
    data.imprime();
    cout << "Horario do voo: " << horario << endl;
    cout << "Vagas no voo: " << vagas() << endl;
}

int Voo::getNumero(){
    return numero;
}
void Voo::setNumero(int val){
     numero = val;
}

string Voo::getHorario(){
    return horario;
}
void Voo::setHorario(string val){
    horario = val;
}

Data Voo::getData(){
    return data;
}
void Voo::setData(Data& val){
    data = val;
}
