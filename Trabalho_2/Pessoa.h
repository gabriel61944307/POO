/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

namespace pc{
    class Veiculo;
    class Pessoa {
    public:
        Pessoa(string nome, int idade);
        virtual ~Pessoa();
        void imprime();
        
        Veiculo* getVeiculo();
        void setVeiculo(Veiculo* veiculo);
        string getNome();
        void setNome(string nome);
        int getIdade();
        void setIdade(int idade);

    protected:

    private:
        string nome;
        int idade;
        Veiculo* veiculo;
    };
}
#endif /* PESSOA_H */
