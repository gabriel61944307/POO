/*  Trabalho 1 de Programação de computadores.
 *  
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef ALUNO_H
#define ALUNO_H
#include <string>

using namespace std;

class Aluno{
    public:
        Aluno(int RA, string nome, double nota1, double nota2, double trabalho);
        virtual ~Aluno();
        int getRA();
        string getNome();

        double media();
        bool aprovado();
        bool sac();
        double notaSAC();
        //void imprime();

    protected:

    private:
        int RA;
        string nome;
        double nota1, nota2, trabalho;
};

#endif // ALUNO_H
