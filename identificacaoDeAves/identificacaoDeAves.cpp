#include <iostream>
using namespace std;
string qualOAnimal(int aquatica, int predadora, int domestica, int voa, int noturna) {
  voa = voa * 2;
  domestica = domestica * 4;
  predadora = predadora * 8;
  aquatica = aquatica * 16;
  int total = aquatica + predadora + domestica + voa + noturna;
  switch (total) {
  case 11:
    return "coruja";
    break;
  case 2:
    return "pardal";
    break;
  case 6:
    return "galinha";
    break;
  case 8:
    return "ema";
    break;
  case 10:
    return "falcão";
    break;
  case 18:
    return "pato";
    break;
  case 24:
    return "pinguim";
    break;
  case 26:
    return "gaivota";
    break;
  case 27:
    return "garça";
    break;
  case 0:
    return "avestruz";
    break;
  default:
    return "desconhecido";
    break;
  }
}
int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  int aquatica, predadora, domestica, voa, noturna;
  cin >> aquatica >> predadora >> domestica >> voa >> noturna;
  cout << qualOAnimal(aquatica, predadora, domestica, voa, noturna) << endl;
}