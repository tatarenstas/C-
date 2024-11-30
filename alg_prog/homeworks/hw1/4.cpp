#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x1, y1, x2, y2, x3, y3, S;
	
	cout << "Enter x1, y1, x2, y2, x3, y3: ";
  	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  	
  	S = 0.5 * ((x1-x2)*(y2-y3) - (x2-x3)*(y1-y3));
  	
  	if (S == 0){
  		cout << "True";	
	}
  	else {
  		cout << "False";	  		
	}
	
	return 0;
}