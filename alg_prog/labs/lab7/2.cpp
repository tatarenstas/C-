#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int i, a;
	cout << "Enter a: ";	
	cin >> a;
	
	i = 1;	
	for (i; i<10; i++){
		cout << i*a << endl;
	}
	
	return 0;
}