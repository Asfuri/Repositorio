#include <iostream>
using namespace std;
#include "Data.h"

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  Data minhaData;
  cin >> minhaData.dia >> minhaData.mes >> minhaData.ano;
  cout << minhaData.dia << "/" << minhaData.mes << "/" << minhaData.ano;
}