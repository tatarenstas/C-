#include <iostream>
#include <cmath>

using namespace std;

int main() {
  	int x, y, z, a, b, c, d;
  	d = 0;

  	cout << "Enter x, y, z, a, b, c: ";
  	cin >> x >> y >> z >> a >> b >> c;
  
  	if (x <= a & y <= b & z <= c){
  		cout << "True1";
  		d++;
  	}
  	else{
  		if (x <= a & y <= c & z <= b){
  			cout << "True2";
  			d++;
  		}
  		else {
	  		if (x <= b & y <= a & z <= c){
	  			cout << "True3";
	  			d++;
	  		}
	  		else {
		  		if (x <= b & y <= c & z <= a){
		  			cout << "True4";
		  			d++;
		  		}
		  		else {
			  		if (x <= c & y <= b & z <= a){
			  			cout << "True5";
			  			d++;
			  		}
			  		else {
				  		if (x <= c & y <= a & z <= b){
				  			cout << "True6";
				  			d++;
				  		}
				  	}
			  	}
		  	}
	  	}
  	}
  
  if (d==0){
  	cout << "False";
  }
  
	
  return 0;
}