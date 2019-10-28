/*
 * Trabalho 4 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#include "Cesar.h"
#include <fstream>
using namespace cifra;

Cesar::Cesar() {
}

Cesar::~Cesar() {
}

int Cesar::encripte(string fileIn, string fileOut, int k){
    ifstream ifs(fileIn, ifstream::in);
    ofstream ofs(fileOut, ofstream::out);
    string codificado;
    char c = ifs.get();
    
    while (ifs.good()) {
        if(c>='a' && c<='z'){
            if(c+k < 'a')
                codificado = (c + k + 26); 
                // 26 é o numero de letras no alfabeto, somar ele a uma posição anterior a ele é como "rotacionar" o 
                // alfabeto.
            else if(c+k > 'z')
                codificado = ((c + k) % 122) + 96; 
                // 122 é z na tabela asci, se (c+k)> 122 então é necessario voltar o vetor para a posição "0" do 
                // alfabeto, 96 seria o "0" das letras minusculas pois a é 97 na tabela asci.
            else
                codificado = ((c + k) % 122);
        }
        else if(c>='A' && c<='Z'){
            if(c+k < 'A')
                codificado = (c + k + 26);                
            else if(c+k > 'Z')
                codificado = ((c + k) % 90) + 64;
                // 90 é Z na tabela asci, se (c+k)> 90 então é necessario voltar o vetor para a posição "0" do 
                // alfabeto, 64 seria o "0" das letras maiusculas pois A é 65 na tabela asci.
            else
                codificado = ((c + k) % 90);
        }
        else{
            codificado = c;
        }
        ofs << codificado;
        c = ifs.get();
    }

    ofs.close();
    ifs.close();
}
