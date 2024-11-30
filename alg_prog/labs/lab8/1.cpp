#include <iostream>
#include <cmath>

using namespace std;

float Perymetr(float x, float y){
	float result;
	result = 2 * (abs(x) + abs(y));
	return result;
}
float Plosca(float x, float y){
	float result;
	result = abs(x) * abs(y);
	return result;
}
	
int main() {
	float x, y;
	cout << "Enter x, y: ";
	cin >> x >> y;
	
	cout << Perymetr(x, y) << endl;
	cout << Plosca(x, y);
	
	return 0;
}
