#include <iostream>
#include <cmath>

using namespace std;

float SumRange(int a, int b){
	int result, i;
	
	if (a > b){
		result = 0;
	}
	else{
		result = 0;
		i = a;	
		for (i; i<b; i++){
			result += i;
		}
	}
	
	return result;
}
int main() {
	int a, b;
	cout << "Enter a, b: ";
	cin >> a >> b;
	
	cout << SumRange(a, b) << endl;
	
	return 0;
}
