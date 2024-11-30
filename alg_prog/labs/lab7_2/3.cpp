#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, s, i, a;
	cout << "Enter n: ";
	cin >> n;
	
	s = 0;
	i = 0;	
	for (i; i<n; i++){
		cin >> a;
		s += a;
	}
	
	cout << "Result: " << s << endl;
	
	return 0;
}