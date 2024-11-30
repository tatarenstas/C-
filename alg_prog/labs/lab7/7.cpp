#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, i, j, s;
	cout << "Enter n: ";
	cin >> n;
	
	s = 0;
	i = 0;
	j = 0;
	for (i, j; i<n, j<n; i++, j++){
		s += 1+i+j;
	}
	
	cout << s << endl;
	
	return 0;
}