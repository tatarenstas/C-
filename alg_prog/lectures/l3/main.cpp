#include <iostream>

using namespace std;

float suma(float a, float b){
	float q;
	q = a+b;
	return q;
}
float suma(float a, float b, float c){
	float q;
	q = a+b+c;
	return q;
}
	
int main() {
	float a, b, c;
	cout << "Enter a, b, c: ";
	cin >> a >> b >> c;
	
	cout << suma(a, b, c);
	return 0;
}
