#include <iostream>
#include <cmath>

using namespace std;

float Sign(float x){
	float result;
	
	if (x < 0){
		result = -1;
	}
	else if (x > 0){
		result = 1;
	}
	else {
		result = 0;
	}
	
	return result;
}
	
int main() {
	float x;
	cout << "Enter x: ";
	cin >> x;
	
	cout << Sign(x);
	
	return 0;
}
