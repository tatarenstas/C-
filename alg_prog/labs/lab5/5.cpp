#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int day;
	cout << "Enter day: ";
	cin >> day;
	
	switch (day){
		case 1: cout<<"\n1 - Computer architecture\n2 - Computer architecture\n3 - Higher mathematics";break;
		case 2: cout<<"\n2 - Higher mathematics\n3 - Discrete mathematics\n4 - Ukrainian language";break;
		case 3: cout<<"\n2 - Algorithmization and programming\n3 - History\n4 - English";break;
		case 4: cout<<"\n1 - Higher mathematics\n2 - Algorithmization and programming\n3 - Algorithmization and programming\n4 - Discrete mathematics";break;
		default: cout << "Error!";
	}
	
	return 0;
}