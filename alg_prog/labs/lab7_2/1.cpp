#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int kurs, i;
	cout << "Enter kurs: ";	
	cin >> kurs;
	
	i = 1;
	for (i; i<11; i++){
		cout << i*kurs << endl;
	}
	
	return 0;
}