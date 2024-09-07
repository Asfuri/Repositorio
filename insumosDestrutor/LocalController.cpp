#include "LocalController.h"
#include <iostream>

LocalController::LocalController() {
}

LocalController::~LocalController() {
  std::cout << "Deletando Local" << std::endl;
  delete InsumosArr[0];
  delete InsumosArr[1];
  delete InsumosArr[2];
  for (auto a : insumosVec) {
    delete a;
  }
}

void LocalController::addInsumoArr(Insumo *in, int index) {
  InsumosArr[index] = in;
}

void LocalController::addInsumoVec(Insumo *in) {
  insumosVec.push_back(in);
}