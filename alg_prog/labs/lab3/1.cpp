#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float x, y;

  cout << "Enter x: ";
  cin >> x;
  
  y = pow(x, 2) + sin(x);
  
  cout << "y:" << y;

  return 0;
}