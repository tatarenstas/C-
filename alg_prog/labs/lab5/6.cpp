#include <iostream>

using namespace std;

int main() {
  	int a, b, operat;
  	
  	cout << "Enter a, b: ";
  	cin >> a >> b;
  	cout << "Enter operation: ";
  	cin >> operat;

  	switch (operat){
	  	case 1: cout<<a+b;break;
		case 2: cout<<a-b;break;
		case 3: cout<<a*b;break;
		case 4: cout<<a/b;break;
		default: cout << "Error!";
	}
	
  	return 0;
}