#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float a, b, c, V, S;
	
	cout << "Enter a, b, c: ";
  	cin >> a >> b >> c;
  	
  	V = a*b*c;
  	S = 2*(a*b+a*c+b*c);
  	
  	cout << "V: " << V;
  	cout << "\nS: " << S;
	
	return 0;
}