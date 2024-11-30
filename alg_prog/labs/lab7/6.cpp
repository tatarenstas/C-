#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, i, c, isq;
	cout << "Enter a, b: ";
	cin >> a >> b;
	
	i = a;
	c = 0;
	for (i; i<b; i++){
		if (i%3 == 0 & i%5 != 0){
			c += 1;
			cout << i << endl;
		}
		else{
			isq = sqrt(i);
			if (isq % 2 == 0 && isq * isq == i){
				c += 1;
				cout << i << endl;
			}
		}
	}
	
	cout << c << endl;
	
	return 0;
}