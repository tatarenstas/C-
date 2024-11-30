#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
	char mark;
	cout << "Enter mark: ";
	cin >> mark;
	
	switch (mark){
		case 'A': cout<<"90-100";break;
		case 'B': cout<<"82-89";break;
		case 'C': cout<<"75-81";break;
		case 'D': cout<<"68-74";break;
		case 'E': cout<<"60-67";break;
		case 'F': cout<<"1-60";break;
		default: cout<<"Error!";break;
	}
	
	return 0;
}