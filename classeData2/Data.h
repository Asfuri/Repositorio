#include <iostream>
#pragma once

class Data {
private:
    int dia, mes, ano;
public:
    Data();
    void setDia(int dia), setMes(int mes), setAno(int ano), printData();
    int getDia(), getAno();
    std::string getMes();
};