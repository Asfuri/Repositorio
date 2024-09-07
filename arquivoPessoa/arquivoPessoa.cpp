#include "Pessoa.h"
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
void geraArquivo(std::string path, std::string data) {
  std::fstream fs;
  fs.open(path.c_str(), std::fstream::out);
  if (fs.is_open()) {
    fs.write(data.c_str(), data.size());
    fs.close();
  } else
    std::cout << "Nao foi possivel abrir o arquivo " << path;
}
void geraArquivos() {
  std::string data1 = "1\nJoao Pedro\n(83) 8888-8888\n"
                      "2\nMaria Teresa\n(83) 9999-9999\n000.000.000-00\n"
                      "2\nLuiz Pereira\n(83) 7777-7777\n111.111.111-11\n"
                      "1\nDenis Carlos\n(83) 5555-5555\n";
  std::string data2 = "2\nLuma Oliveira\n(83) 1111-1111\n222.222.222-22\n"
                      "2\nTercio Marquies\n(83) 2222-2222\n333.333.222-33\n"
                      "1\nJonas Luz\n(83) 3333-3333\n";
  geraArquivo("dados01.txt", data1);
  geraArquivo("dados02.txt", data2);
}
int main() {
  geraArquivos();

  std::string nomeDoArquivo, nome, telefone, cpf;
  std::vector<Pessoa *> pessoas;
  Pessoa *p;
  int tipo;
  std::fstream arquivoPessoas;
  getline(std::cin, nomeDoArquivo);
  arquivoPessoas.open(nomeDoArquivo, std::ios_base::in);
  if (arquivoPessoas.is_open()) {
    while (arquivoPessoas >> tipo) {
      arquivoPessoas.ignore();
      if (tipo == 1) {
        getline(arquivoPessoas, nome);
        getline(arquivoPessoas, telefone);
        p = new Pessoa(tipo, nome, telefone);
      } else if (tipo == 2) {
        getline(arquivoPessoas, nome);
        getline(arquivoPessoas, telefone);
        getline(arquivoPessoas, cpf);
        p = new Pessoa(tipo, nome, telefone, cpf);
      }
      pessoas.push_back(p);
    }
    arquivoPessoas.close();
  }
  for (auto pe : pessoas) {
    if (pe->getTipo() == 1) {
      std::cout << pe->getNome() << ", tel: " << pe->getTelefone() << std::endl;
    } else if (pe->getTipo() == 2) {
      std::cout << pe->getNome() << ", tel: " << pe->getTelefone() << ", CPF: " << pe->getCPF() << std::endl;
    }
  }
}