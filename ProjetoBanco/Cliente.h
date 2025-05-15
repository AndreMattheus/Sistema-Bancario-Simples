#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {

// Declara os atributos da classe Cliente
private:
	string nome;
	string cpf;

// Declara os métodos de Cliente a serem implementados no arquivo .cpp
public:
	Cliente(string nome, string cpf);
	string getNome();
	string getCpf();
};

#endif
