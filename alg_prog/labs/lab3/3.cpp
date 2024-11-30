#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float a, b, c, P;
	
	cout << "Enter a: ";
  	cin >> a;
  	cout << "Enter b: ";
  	cin >> b;
  	
  	c = sqrt(pow(a, 2) + pow(b, 2));
  	P = a+b+c;
  	
  	cout << "c: " << c;
  	cout << "\nP: " << P;
	
	return 0;
}