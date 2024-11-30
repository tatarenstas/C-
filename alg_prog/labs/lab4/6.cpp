#include <iostream>

using namespace std;

int main() {
  	int mark;

  	cout << "Enter mark: ";
  	cin >> mark;
  	
  	if (mark <= 100 & mark >= 90) {
	  	cout<<"A";
	}
	else if (mark <= 89 & mark >= 80) {
	  	cout<<"B";
	}
	else if (mark <= 79 & mark >= 70) {
	  	cout<<"C";
	}
	else if (mark <= 69 & mark >= 60) {
	  	cout<<"D";
	}
	else if (mark <= 59 & mark >= 50) {
	  	cout<<"E";
	}
	else if (mark <= 49 & mark >= 35) {
	  	cout<<"FX";
	}
	else if (mark <= 34 & mark >= 1) {
	  	cout<<"F";
	}
	else {
		cout << "Error";
	}
	
  	return 0;
}