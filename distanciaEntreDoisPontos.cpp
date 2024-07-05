#include <iostream>
#include <math.h>
using namespace std;
int main() {
  float x1, y1, x2, y2;
  cin >> x1;
  cin >> y1;
  cin >> x2;
  cin >> y2;
  float dx = abs(x1 - x2);
  float dy = abs(y1 - y2);
  cout << (dx * dx) + (dy * dy) << endl;
}