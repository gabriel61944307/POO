/*
 * Trabalho 2 de programação de computadores
 * 
 * Gabriel Rodrigues Malaquias, 758906, 2018.
 */


#include "Carro.h"
#include "Caminhao.h"
#include "Pessoa.h"
#include "Veiculo.h"
#include <iostream>

using namespace pc;
using namespace std;


int main() {

    string linha = "=======================================";
    
    
    Pessoa* fulano = new Pessoa("Fulano", 20);
    Pessoa* sincrano = new Pessoa("Sincrano", 45);
    Carro* uno = new Carro("Fiat", "Uno", "Vermelho", 2010, fulano, 100, 2);
    Caminhao* scania = new Caminhao("Scania", "113 360", "Branco", 1998, sincrano, 5);

    cout << linha << linha << endl;
    cout << "Exercitando os métodos Getters da classe Pessoa" << endl;
    cout << linha << linha << endl;

    cout << "GetNome(): " << fulano->getNome() << " (deveria ser Fulano)" << endl;
    cout << "GetIdade(): " << fulano->getIdade() << " (deveria ser 20)" << endl;

    cout << linha << linha << endl;
    cout << "Exercitando os métodos Getters da classe Carro" << endl;
    cout << linha << linha << endl;

    cout << "GetMarca(): " << uno->getMarca() << " (deveria ser Fiat)" << endl;
    cout << "GetModelo(): " << uno->getModelo() << " (deveria ser Uno)" << endl;
    cout << "GetCor(): " << uno->getCor() << " (deveria ser Vermelho)" << endl;
    cout << "GetAno(): " << uno->getAno() << " (deveria ser 2010)" << endl;
    cout << "GetVolumePM(): " << uno->getVolumePM() << " m3 (deveria ser 100 m3)" << endl;
    cout << "GetNroPortas(): " << uno->getNroPortas() << " (deveria ser 2)" << endl;

    cout << linha << linha << endl;
    cout << "Exercitando o método imprime() da classe Pessoa" << endl;
    cout << linha << linha << endl;
     
    fulano->imprime();

    cout << linha << linha << endl;
    cout << "Exercitando o método imprime() da classe Carro" << endl;
    cout << linha << linha << endl;

    uno->imprime();

    cout << linha << linha << endl;
    cout << "Exercitando os métodos Getters da classe Pessoa" << endl;
    cout << linha << linha << endl;

    cout << "GetNome(): " << sincrano->getNome() << " (deveria ser Sincrano)" << endl;
    cout << "GetIdade(): " << sincrano->getIdade() << " (deveria ser 45)" << endl;

    cout << linha << linha << endl;
    cout << "Exercitando os métodos Getters da classe Caminhao" << endl;
    cout << linha << linha << endl;

    cout << "GetMarca(): " << scania->getMarca() << " (deveria ser Scania)" << endl;
    cout << "GetModelo(): " << scania->getModelo() << " (deveria ser 113 360)" << endl;
    cout << "GetCor(): " << scania->getCor() << " (deveria ser Branco)" << endl;
    cout << "GetAno(): " << scania->getAno() << " (deveria ser 1998)" << endl;
    cout << "GetVolumePM(): " << scania->getNroEixos() << " (deveria ser 5)" << endl;

    cout << linha << linha << endl;
    cout << "Exercitando o método imprime() da classe Pessoa" << endl;
    cout << linha << linha << endl;

    sincrano->imprime();

    cout << linha << linha << endl;
    cout << "Exercitando o método imprime() da classe Caminhao" << endl;
    cout << linha << linha << endl;

    scania->imprime();

    cout << linha << linha << endl;
    cout << "Exercitando os métodos Setters da classe Carro" << endl;
    cout << linha << linha << endl;
    
    uno->setMarca("Ford");
    uno->setModelo("Ka");
    uno->setCor("Azul");
    uno->setAno(2011);
    uno->setVolumePM(80);
    uno->setNroPortas(4);
    
    cout << "GetMarca(): " << uno->getMarca() << " (deveria ser Ford)" << endl;
    cout << "GetModelo(): " << uno->getModelo() << " (deveria ser Ka)" << endl;
    cout << "GetCor(): " << uno->getCor() << " (deveria ser Azul)" << endl;
    cout << "GetAno(): " << uno->getAno() << " (deveria ser 2011)" << endl;
    cout << "GetVolumePM(): " << uno->getVolumePM() << " m3 (deveria ser 80 m3)" << endl;
    cout << "GetNroPortas(): " << uno->getNroPortas() << " (deveria ser 4)" << endl;
    
    cout << linha << linha << endl;
    cout << "Exercitando os métodos Setters da classe Pessoa" << endl;
    cout << linha << linha << endl;
    
    sincrano->setNome("Sincrano da Silva");
    sincrano->setIdade(25);    
    sincrano->setVeiculo(uno);
    
    cout << "GetNome(): " << sincrano->getNome() << " (deveria ser Sincrano da Silva)" << endl;
    cout << "GetIdade(): " << sincrano->getIdade() << " (deveria ser 25)" << endl;
    
    cout << linha << linha << endl;
    cout << "Exercitando o método imprime() da classe Pessoa" << endl;
    cout << linha << linha << endl;
    
    sincrano->imprime();

    cout << linha << linha << endl;

    delete scania;
    delete sincrano;
    delete uno;
    delete fulano;

    return 0;
}
