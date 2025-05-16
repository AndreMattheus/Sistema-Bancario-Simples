
# 💳 Sistema Bancário Simples em C++

Este é projeto um projeto educacional e foi desenvolvido como parte da disciplina **Linguagem de Programação I (LP1)** da graduação, com o objetivo de praticar os conceitos de **Programação Orientada a Objetos (POO)**, utilizando C++.

---

## 📚 Objetivo do Projeto

Simular um **sistema bancário simples**, com as seguintes funcionalidades:

- Cadastro de **clientes**.
- Criação de **contas bancárias**.
- Operações de **depósito**, **saque** e **transferência** (com sobrecarga de métodos).
- **Encapsulamento** dos atributos.
- Uso de **construtores** e **métodos públicos**.

---

## ⚙️ Linguagem e Estrutura do Projeto

- Linguagem: **C++**
- Paradigma: **Programação Orientada a Objetos (POO)**
- Organização: Projeto modularizado em arquivos `.h` e `.cpp`
- Compatível com compilação via **terminal e Makefile**

---

## 🧱 Estrutura do Projeto

```
.
├── Cliente.h                 # Declaração da classe Cliente
├── Cliente.cpp               # Implementação da classe Cliente
├── ContaBancaria.h           # Declaração da classe ContaBancaria
├── ContaBancaria.cpp         # Implementação da classe ContaBancaria
├── main.cpp                  # Função principal (demonstra o uso do sistema)
├── Makefile                  # Script para compilar todos os arquivos
├── Banco.exe (gerado)        # Executável após compilação (Windows)
└── *.sln, *.vcxproj, etc.    # Arquivos de visualização e solução da IDE Visual Studio   
```

---

## 🧩 Classes e Funcionalidades

### 🔹 `Cliente`
Representa um cliente do banco.

- **Atributos**:
  - `string nome`
  - `string cpf`
- **Métodos**:
  - `getNome()`: retorna o nome do cliente.
  - `getCpf()`: retorna o CPF do cliente.

---

### 🔹 `ContaBancaria`
Representa uma conta bancária de um cliente.

- **Atributos**:
  - `int numero`
  - `double saldo`
  - `Cliente titular`
- **Métodos**:
  - `depositar(double valor)`
  - `sacar(double valor)`
  - `transferir(double valor, ContaBancaria &destino)`
  - `transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2)` (sobrecarga)
  - `exibirSaldo()`
  - `exibirInformacoes()`

---

## 🛠️ Como Compilar e Executar

### ✅ Requisitos
- Compilador C++ (como `g++`)
- Make instalado (ou `mingw32-make` no Windows)

### 🧾 Usando o Makefile

**1. Para compilar o projeto:**

```bash
make
```

> Isso irá gerar o executável chamado `Banco`.

**2. Para executar o programa:**

No terminal ou PowerShell:

```
./Banco
```

Ou no Windows CMD:

```
Banco.exe
```

---

## 🖥️ Sobre os arquivos `.sln`, `.vcxproj`, `.vcxproj.filters`

Esses arquivos são **específicos do Visual Studio** e servem para:
- Organizar a visualização dos arquivos.
- Salvar configurações da IDE.
- Facilitar a navegação do projeto na interface do Visual Studio.

⚠️ **Eles não afetam o funcionamento nem a lógica do projeto.** Se você estiver usando outro editor ou compilando via terminal, pode ignorá-los.
