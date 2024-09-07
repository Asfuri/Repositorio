// #include <iostream>
// using namespace std;

// class Pessoa {
//   int idade;

// public:
//   Pessoa();
//   Pessoa(int i);
//   ~Pessoa();
//   void exibe();
//   void setIdade(int i);
//   int getIdade();
// };
// Pessoa::Pessoa() { idade = 0; }
// Pessoa::Pessoa(int i) { idade = i; }
// Pessoa::~Pessoa() {
//   cout << "~Pessoa(" << idade << ") " << endl;
// }
// void Pessoa::exibe() {
//   cout << "idade =" << idade << endl;
// }
// void Pessoa::setIdade(int i) {
//   idade = i;
// }
// int Pessoa::getIdade() {
//   return idade;
// }
// int main() {
//   Pessoa* p1 = new Pessoa(7);
//   Pessoa pv[3];
//   pv[1].setIdade(100);
//   p1 = new Pessoa[10];
//   pv[0].exibe();
//   p1 = &pv[1];
//   p1->exibe();
//   pv[2].setIdade(18);
//   (pv+1)-> exibe();
//   p1 = new Pessoa(32);
//   p1->exibe();
//   cout << "p1 - Idade = " << p1->getIdade() << endl;
//   Pessoa p2 = Pessoa(18);
//   cout << "p2.idade = " << p2.getIdade() << endl;
//   delete p1;
// }