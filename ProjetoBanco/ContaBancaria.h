#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include "Cliente.h"

class ContaBancaria {

// Declara os atributos da classe ContaBancaria
private:
	int numero;
	Cliente titular;
	double saldo;

// Declara os métodos de ContaBancaria a serem implementados no arquivo .cpp
public:
	ContaBancaria(int numero, Cliente titular, double saldo = 0.0); // Saldo inicia com 0 por padrão

	void depositar(double valor);
	void sacar(double valor);

	void transferir(double valor, ContaBancaria &destino);
	void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2); 

	void exibirSaldo();
	void exibirInformacoes();
};

#endif