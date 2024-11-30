#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float x;

  cout << "Enter num: ";
  cin >> x;
  
  if (x < -10){
  	cout << "Result: " << 3*pow(x, 2) - pow(x, 3);
  }
  else if (x > 10){
  	cout << "Result: " << cos(x-3);
  }
  else {
  	cout << "Result: " << sqrt(x-(2*pow(x, 2)));
  }

  return 0;
}