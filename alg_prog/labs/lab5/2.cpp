#include <iostream>
#include <cmath>

using namespace std;

int main() {
  	float x;

  	cout << "Enter num: ";
  	cin >> x;
  
  	if (x>=500 & x <=1000){
  		cout << "Result: " << x*1.05;
  	}
  	else if (x>=1001 & x <= 10000){
  		cout << "Result: " << x*1.07;
  	}
  	else if (x>10000){
  		cout << "Result: " << x*1.09;
	}
  	else {
  		cout << "Result: " << x;
  	}

  	return 0;
}