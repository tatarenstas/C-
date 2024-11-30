#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, inp, c;
	float avg, s, i;
	cout << "Enter n: ";
	cin >> n;
	
	s = 0;
	c = 0;
	i = 0;
	for (i; i<n; i++){
		cin >> inp;
		if (inp == 5){
			c += 1;
		}
		s += inp;
	}
	avg = s/i;
	cout << "Avg: " << avg << "\nCount of 5: " << c << endl;
	
	return 0;
}