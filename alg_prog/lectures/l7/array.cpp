#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int n;
	int a[100];
  	
  	int i = 0;
  	
  	ifstream filearr("array.txt");
  	while(!filearr.eof()){
  		filearr >> a[i];
  		i++;
	}
	n = i-1;
	
	filearr.close();
	
	for (i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	
	ofstream filearr1("array.txt", ios::app);
  	for (i = 0; i < n; i++){
  		a[i] = a[i] * 10;
		filearr1 << a[i] << " ";
	}
  	
  	return 0;
}
