#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, i, s;
	cout << "Enter n: ";	
	cin >> n;
	
	s = 0;
	i = 1;
	for (i; i<=n; i++){
		s += 2*i-1;
		cout << s << endl;
	}
	
	cout << s << endl;
	
	return 0;
}