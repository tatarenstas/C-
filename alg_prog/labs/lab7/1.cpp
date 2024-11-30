#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int i, a;
	cout << "Enter a: ";	
	cin >> a;
	
	i = a;	
	for (i; i>10; i--){
		if (i % 2 != 0){
			cout << pow(i,2) << endl;
		}
	}
	
	return 0;
}