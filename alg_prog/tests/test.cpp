#include <iostream>

using namespace std;

int main() {
	float grn, kurs, dol;
	cout << "Enter uah: ";
	cin >> grn;
	cout << "Enter kurs: ";
	cin >> kurs;
	dol = grn/kurs;
	cout << "RESULT: " << dol;
	
	return 0;
}