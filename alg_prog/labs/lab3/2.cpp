#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float length, V, S;
	
	cout << "Enter length: ";
  	cin >> length;
  	
  	V = pow(length, 3);
  	S = 6*pow(length, 2);
  	
  	cout << "V: " << V;
  	cout << "\nS: " << S;
	
	return 0;
}