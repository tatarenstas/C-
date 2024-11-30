#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, c;

  	cout << "Enter a, b, c: ";
  	cin >> a >> b >> c;
  	
  	if (a == b || a == c || b == c){
  		cout << "digits don't different";	
	}
  	else {
	  	if (a > b){
	  		if (c > a){
	  			cout << a << endl;
		  	}
		  	else {
		  		cout << c << endl;	
			}
	  	}
	  	else{
	  		if (c > b){
	  			cout << b << endl;
		  	}
		  	else {
		  		cout << c << endl;		
			}
	  	}
	}

  	return 0;
}