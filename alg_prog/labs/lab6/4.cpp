#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
	int deposit, operat, input;
	deposit = 10000;
	
	while (1){
		cout << "1 - znyatya\n2 - vnesenya\n3 - perevirka balancy: ";
		cin >> operat;
	
		switch (operat){
			case 1:
				cout << "Enter count for znyatya: ";
				cin >> input;
				if (input>deposit){
					cout << "Error!" << endl;break;
				}
				else if (input>10000){
					cout << "Error!" << endl;break;
				}
				else {
					deposit = deposit - input; break;
				}
			case 2:
				cout << "Enter count for vnesenya: ";
				cin >> input;                       
				deposit = deposit + input; break;
			case 3:
				cout << "Deposit: " << deposit << endl; break;
			default: cout << "Error!" << endl; break;
		}
		cout << "Deposit: " << deposit << endl;
	}
	
	return 0;
}