#include <iostream>
#include "ContaBancaria.h"
using namespace std;

// Construtor que inicializa o número, titular e saldo (este com padrão = 0)
ContaBancaria::ContaBancaria(int numero, Cliente titular, double saldo)
	: numero(numero), titular(titular), saldo(saldo) { } // É utilizado lista de inicialização pois titular é um objeto do tipo Cliente

// Deposita um valor adicionando ao saldo
void ContaBancaria::depositar(double valor) {
	if (valor > 0) {
		saldo += valor;
	}
}

// Saca um valor subtraindo do saldo
void ContaBancaria::sacar(double valor) {

	// Verifica se o valor a ser sacado é positivo não nulo e não é maior que o saldo para poder executar
	if (valor > 0 && valor <= saldo) {
		saldo -= valor;
	}
	// Caso o valor seja maior que o saldo, dá aviso de saldo insuficiente
	else if (valor > saldo) {
		cout << "Saldo insuficiente para saque da conta de numero " << numero << endl;
	}
	// Caso o valor seja 0 ou negativo, dá aviso de erro
	else {
		cout << "Saldo invalido para saque da conta de numero " << numero << endl;
	}
}

// Transfere um valor para 1 conta, utilizando os métodos sacar e depositar
void ContaBancaria::transferir(double valor, ContaBancaria &destino) {

	// Verifica se o valor a ser transferido é positivo não nulo e não é maior que o saldo para executar
	if (valor > 0 && valor <= saldo) {
		sacar(valor);
		destino.depositar(valor);
		cout << "Transferido: R$ " << valor
			<< " da conta " << numero
			<< " para a conta " << destino.numero << endl;
	}
	// Caso o valor seja maior que o saldo, dá aviso de saldo insuficiente
	else if (valor > saldo){
		cout << "Saldo insuficiente para transferencia da conta de numero " << numero << endl;
	}
	// Caso o valor seja 0 ou negativo, dá aviso de erro
	else {
		cout << "Saldo invalido para transferencia da conta de numero " << numero << endl;
	}
}

// Transfere um valor para 2 contas igualmente, dividindo o valor em 2 metades, utilizando os métodos de sacar e depositar
void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2) {

	double metade = valor / 2;

	// Verficia se o valor a ser transferido é positivo não nulo e não é maior que o saldo para executar
	if (valor > 0 && valor <= saldo) {
		sacar(valor);
		destino1.depositar(metade);
		destino2.depositar(metade);
		cout << "Transferido: R$ " << metade
			<< " para cada conta (" << destino1.numero
			<< " e " << destino2.numero
			<< ") da conta " << numero << endl;
	}
	// Caso o valor seja maior que o saldo, dá aviso de saldo insuficiente
	else if (valor > saldo) {
		cout << "Saldo insuficiente para transferencia da conta de numero " << numero << endl;
	}
	// Caso o valor seja 0 ou negativo, dá aviso de erro
	else {
		cout << "Saldo invalido para transferencia da conta de numero " << numero << endl;
	}
}

// Exibe o saldo atual da conta
void ContaBancaria::exibirSaldo() {
	cout << "Saldo atual da conta " << numero << ": R$ " << saldo << endl;
}

// Exibe as informações da conta
void ContaBancaria::exibirInformacoes() {
	cout << "Titular: " << titular.getNome()
		<< ", CPF: " << titular.getCpf() << endl;
	cout << "Numero da Conta: " << numero
		<< ", Saldo: R$ " << saldo << endl;
}