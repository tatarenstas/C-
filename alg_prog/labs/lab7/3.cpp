#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, h, s, c, i;
	cout << "Enter a, b, h: ";
	cin >> a >> b >> h;
	
	s = 0;
	c = 0;
	i = a;	
	for (i; i<b; i+=h){
		cout << i << endl;
		s += i;
		c += 1;
	}
	
	cout << "Avg: " << s/c << endl;
	
	return 0;
}