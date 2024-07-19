#include <iostream>
#ifndef INVOICE_H
#define INVOICE_H
class Invoice {
public:
    Invoice(int numero, std::string descricao, int quantidade, float preco);
    float getPreco(), getInvoiceAmount();
    std::string getDescricao();
    int getNumero(), getQuantidade();
    void setNumero(int numero), setDescricao(std::string descricao), setQuantidade(int quantidade), setPreco(float preco), print();
private:
int numero, quantidade;
float preco;
std::string descricao;
};
#endif