#include <iostream>
#include <cmath>

using namespace std;

float Quarter(float x, float y){
	int result;
	
	if (x > 0 && y > 0){
		result = 1;	
	}
	else if (x < 0 && y > 0){
		result = 2;	
	}
	else if (x < 0 && y < 0){
		result = 3;	
	}
	else {
		result = 4;	
	}

	return result;
}
	
int main() {
	int i;
	float x, y;
	
	i = 0;
	for (i; i<3; i++){
		cout << "Enter x, y: ";
		cin >> x >> y;
		cout << "Result: " << Quarter(x, y) << endl;
	}
	
	return 0;
}
