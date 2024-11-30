#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
	int mark;
	cout << "Enter mark: ";
	cin >> mark;
	
	switch (mark){
		case 12: case 11: case 10: cout << 5; break;
		case 9: case 8: case 7: cout << 4; break;
		case 6: case 5: case 4: cout << 3; break;
		case 3: case 2: cout << 2; break;
		case 1: cout << 1; break;
		default: cout << "Error!"; break;
	}
	
	return 0;
}