/*  Trabalho 1 de Programação de computadores.
 *  
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "Data.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Data::Data(int dia, int mes, int ano): dia(dia), mes(mes), ano(ano){
    //Verificação se a data enviada é valida.
    if(dia<1 || dia>31 || mes< 1 || mes>12 || ano<1){
        dia = 1;
        mes = 1;
        ano = 1;
    }
}

Data::~Data(){
}

int Data::compara(Data& outrap){
    int diferenca;
    if(outrap.ano > ano){
        diferenca = -1;
    }
    else if(outrap.ano < ano){
        diferenca = 1;
    }
    else{
        if(outrap.mes > mes){
            diferenca = -1;
        }
        else if(outrap.mes < mes){
            diferenca = 1;
        }
        else{
            if(outrap.dia > dia){
                diferenca = -1;
            }
            else if(outrap.dia < dia){
                diferenca = 1;
            }
            else
                diferenca = 0;
        }
    }
    return diferenca;
}
string Data::getMesExtenso(){
    string extenso[12];
    extenso[1] = "Janeiro";
    extenso[2] = "Fevereiro";
    extenso[3] = "Março";
    extenso[4] = "Abril";
    extenso[5] = "Maio";
    extenso[6] = "Junho";
    extenso[7] = "Julho";
    extenso[8] = "Agosto";
    extenso[9] = "Setembro";
    extenso[10] = "Outubro";
    extenso[11] = "Novembro";
    extenso[12] = "Dezembro";
    return extenso[mes];
}
void Data::imprime(){
    if(dia<10){
        cout << setfill('0') << setw (2);
    }
    cout << dia << "/";
    if(mes<10){
        cout << setfill('0') << setw (2);
    }
    cout << mes << "/";
    if(ano<10){
        cout << setfill('0') << setw (4);
    }
    else if(ano>=10 && ano <100){
        cout << setfill('0') << setw (3);
    }
    else if(ano>=100 && ano <1000){
        cout << setfill('0') << setw (2);
    }
    cout << ano << endl;
}


int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}
