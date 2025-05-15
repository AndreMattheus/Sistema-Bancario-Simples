#include "Cliente.h"

// Construtor que inicializa o nome e cpf do cliente
Cliente::Cliente(string nome, string cpf) {
	this->nome = nome;
	this->cpf = cpf;
}

// M�todo para acessar o nome do cliente
string Cliente::getNome() {
	return nome;
}

// M�todo para acessar o cpf do cliente
string Cliente::getCpf() {
	return cpf;
}