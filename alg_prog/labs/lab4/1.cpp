#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float x;

  cout << "Enter num: ";
  cin >> x;
  
  if (x < -2){
  	cout << "Result: " << sin(x) + abs(x);
  }
  else {
  	cout << "Result: " << sqrt(pow(x, 3));
  }

  return 0;
}