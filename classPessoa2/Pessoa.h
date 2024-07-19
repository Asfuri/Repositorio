#include <iostream>
#ifndef PESSOA_H
#define PESSOA_H

class Pessoa {
public:
    Pessoa();
    Pessoa(std::string nome);
    Pessoa(int idade, std::string telefone);
    void setNome(std::string), setIdade(int idade), setTelefone(std::string telefone);
    std::string getNome(), getTelefone();
    int getIdade();
private:
std::string nome, telefone;
int idade;
};
#endif