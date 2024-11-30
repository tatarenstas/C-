#include <iostream>

using namespace std;

int main() {
  float length, width, S;

  cout << "Enter an length: ";
  cin >> length;
  cout << "Enter an width: ";
  cin >> width;

  S = length * width;
  cout << "S: " << S;

  return 0;
}