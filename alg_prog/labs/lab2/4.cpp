#include <iostream>

using namespace std;

int main() {
  float tempc, tempf;

  cout << "Enter an temperature in C*: ";
  cin >> tempc;

  tempf = tempc +  273;
  cout << "Result F*: " << tempf;

  return 0;
}