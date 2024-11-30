#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int p;
	cout << "Enter p: ";
	cin >> p;
	
	switch (p){
		case 1: cout<<"Zyma";break;
		case 2: cout<<"Vesna";break;
		case 3: cout<<"Lito";break;
		case 4: cout<<"Osin";break;
		default: cout << "Error!";
	}
	
	return 0;
}