#include <iostream>
#include <cmath>

using namespace std;

int main(){
  	int mark, a , b,  c, d, e;
  	
  	mark = 0;
  	
  	cout << "When did the Second World War begin?: ";
  	cin >> a;
  
  	if (a == 1939){
  		mark++;
  	}
  
  	cout << "\nWhen did the Second World War end?: ";
  	cin >> b;
  
  	if (b == 1945){
  		mark++;
  	}
  	
  	cout << "\nWhen was the Union of Lublin adopted?: ";
  	cin >> c;
  
  	if (c == 1569){
  		mark++;
  	}
  	
  	cout << "\nWhen did the First World War begin?: ";
  	cin >> d;
  
  	if (d == 1914){
  		mark++;
  	}
  	
  	cout << "\nWhen did the First World War end?: ";
  	cin >> e;
  
  	if (e == 1918){
  		mark++;
  	}
  	
  	cout << "\nMark: " << mark;
  
  	return 0;
}