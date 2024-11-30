#include <iostream>
#include "head.h"
#include "real.cpp"

using namespace std;

int main() {
	float a, b, S, P, D;
	
	cout << "Enter a, b: ";
  	cin >> a >> b;
  	
  	P = Perym(a, b);
  	S = Square(a, b);
  	D = Diag(a, b);
  	
  	cout << "P: " << P << ", S: " << S << ", D: " << D;
	
	return 0;
}