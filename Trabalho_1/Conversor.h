/*  Trabalho 1 de Programação de computadores.
 *  
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */

#ifndef CONVERSOR_H
#define CONVERSOR_H


class Conversor
{
    public:
        Conversor(double Tcompra, double Tvenda);
        virtual ~Conversor();

        void imprimeTaxas();
        double vendeDolar(double dolar);
        double compraDolar(double venda);

        double getTcompra();
        void setTcompra(double Tcompra);
        double getTvenda();
        void setTvenda(double Tvenda);

    protected:

    private:
        double Tcompra, Tvenda;
};

#endif // CONVERSOR_H
