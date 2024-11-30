#include <iostream>
#include <cmath>

using namespace std;

int main() {
  	int a, b, c;
  	
	cout << "Enter a, b, c: ";
  	cin >> a >> b >> c;
  
  	if (a == b & b == c){
  		cout << "Rivnostoronniy";
  	}
  	else if (a == b || b == c){
  		cout << "Rivnobedrenuy";
  	}
  	else {
  		cout << "Riznostoronniy";
  	}

  	return 0;
}