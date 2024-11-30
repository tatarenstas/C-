#include <iostream>

using namespace std;

int main() {
	int i, s;
	
	i = 0;
	s = 0;
	
	do {
		i++;
		cout << i << endl;
	}
	while (i<100);	
	
	i = 0;	
	for (i; i<=10; i=i+2){
		s += i;
	}
	
	return 0;
}