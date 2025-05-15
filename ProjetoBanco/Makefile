# Compila todos os arquivos para gerar o executável final
all: Banco

# Compilação do executável
Banco: main.o Cliente.o ContaBancaria.o
	g++ -Wall -o Banco main.o Cliente.o ContaBancaria.o

# Compilação dos arquivos objeto
main.o: main.cpp Cliente.h ContaBancaria.h
	g++ -Wall -c main.cpp

Cliente.o: Cliente.cpp Cliente.h
	g++ -Wall -c Cliente.cpp

ContaBancaria.o: ContaBancaria.cpp ContaBancaria.h Cliente.h
	g++ -Wall -c ContaBancaria.cpp
