#include <iostream>
#include <vector>
#ifndef ESTATISTICAS_H
#define ESTATISTICAS_H

template <class T>
class Estatisticas {
public:
  Estatisticas() {
  }
  int indexOfMaior() {
    float maxIndex = 0, maxValue = INT_MIN;
    for (int i = 0; i < vec.size(); i++) {
      if (maxValue < vec[i].getTotal()) {
        maxValue = vec[i].getTotal();
        maxIndex = i;
      }
    }
    return maxIndex;
  }

  int indexOfMenor() {
    float minIndex = 0, minValue = INT_MAX;
    for (int i = 0; i < vec.size(); i++) {
      if (minValue > vec[i].getTotal()) {
        minValue = vec[i].getTotal();
        minIndex = i;
      }
    }
    return minIndex;
  }

  float media() {
    float total = 0;
    for (int i = 0; i < vec.size(); i++) {
      total += vec[i].getTotal();
    }
    return total / vec.size();
  }

  void addEl(T el) {
    vec.push_back(el);
  }

  T getEl(int i) {
    return vec[i];
  }
  virtual ~Estatisticas() {
  }

private:
  std::vector<T> vec;
};
#endif