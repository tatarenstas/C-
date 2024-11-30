#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

using namespace std;

int main() {
	float S_kv, S_kr, a, r;
	
	cout << "Enter S_kv, S_kr: ";
  	cin >> S_kv >> S_kr;
  	
  	a = sqrt(S_kv);
  	r = sqrt(S_kr/M_PI);
  	
  	if (a >= 2*r){
  		cout << "True";
	}
	else {
  		cout << "False";
	}
	
	return 0;
}