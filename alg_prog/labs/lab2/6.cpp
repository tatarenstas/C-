#include <iostream>

using namespace std;

int main() {
  float n1, n2;

  cout << "Enter num1: ";
  cin >> n1;
  cout << "Enter num2: ";
  cin >> n2;

  if (n1 > n2)
  	cout << n1;
  else
  	cout << n2;

  return 0;
}