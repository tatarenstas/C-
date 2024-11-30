#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x, y, i, r;
	cout << "Enter x, y: ";
	cin >> x >> y;
	
	r = 0;
	i = 0;	
	for (i; i<x; i++){
		r += y;
	}
	
	cout << r << endl;
	
	return 0;
}