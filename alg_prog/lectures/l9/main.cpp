#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

namespace tr{
	int D = 1000;
	float perim(float x, float y, float z){
		return x+y+z;
	}
	float square(float x, float y, float z){
		float p;
		p = (x+y+z)/2;
		return sqrt((p-x)*(p-y)*(p-z));
	}
}

namespace rect{
	int D = 100;
	float perim(float x, float y){
		return 2*(x+y);
	}
	float square(float x, float y){
		float p;
		return x*y;
	}
}


int main(){
	float tra, trb, trc, recta, rectb, P, S;
	
	tra = 1;
	trb = 2;
	trc = 3;
	recta = 3;
	rectb = 3;
	
	P = tr::perim(tra, trb, trc);
	cout << P << endl;
	P = rect::perim(recta, rectb);
	cout << P << endl;
	
	S = tr::square(tra, trb, trc);
	cout << S << endl;
	S = rect::square(recta, rectb);
	cout << S << endl;
	
	cout << tr::D << endl;
	cout << rect::D << endl;
	
	return 0;
}