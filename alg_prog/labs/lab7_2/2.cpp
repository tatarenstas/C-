#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	float s, i;
	cout << "Enter n: ";	
	cin >> n;
	
	s = 0;
	i = 1;	
	for (i; i<n+1; i++){
		s += 1/i;
	}
	
	cout << "Result: " << s << endl;
	
	return 0;
}