#include <iostream>
#include <cmath>

using namespace std;

int main(){
  	int a1, a2, a3, a4, a5;
  
  	cout << "Enter a1, a2, a3, a4, a5: ";
  	cin >> a1 >> a2 >> a3 >> a4 >> a5;
  
  	int matr[5][5] = {{a1, a2, a3, a4, a5}, {a1, a2, a3, a4, a5}, {a1, a2, a3, a4, a5}, {a1, a2, a3, a4, a5}, {a1, a2, a3, a4, a5}};
  	
  	for (int i = 1; i<5; i++){
    	for (int j = 0; j<5; j++){
      		matr[i][j] = pow(matr[i][j], i+1);
    	}
  	}
  	cout << endl;
  	
  	for (int i = 0; i<5; i++){
    	for (int j = 0; j<5; j++){
      		cout << matr[i][j] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  
  	return 0;
}
