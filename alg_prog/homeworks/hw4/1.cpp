#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int n, c;
	
	cout << "Enter n: ";
	cin >> n;
  	
  	c = 0;
  	ofstream filearr("file.txt", ios::app);
  	for (int i=2; c<n; i++){
  		if (i % 2 == 0){
  			c++;
  			filearr << i << " ";
  		}
	}
	
	filearr.close();
	

  	return 0;
}
