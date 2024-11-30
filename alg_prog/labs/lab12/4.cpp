#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
  	int n, avg, max;
  
  	cout << "Enter n: ";
  	cin >> n;
  
  	float arr[n][n];
  	int diag[n];
  	
  	srand(time(NULL));
  
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<n; j++){
      		arr[i][j] = -5 + rand() % 10;
    	}
  	}
  	cout << endl;
  	
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<n; j++){
      		cout << arr[i][j] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  	
  	for (int i = 0; i<n; i++){
  		for (int j = 0; j<n; j++){
      		if (i==j){
    			diag[i] = arr[i][j];
			}
    	}
  	}
  	
  	max = diag[0];
  	for (int i = 0; i<n; i++){
    	if (fabs(diag[i]) > fabs(max)){
    		max = diag[i];
		}
  	}
  	
  	cout << "Max: " << max << endl;
  	
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<n; j++){
      		arr[i][j] = arr[i][j]/max;
    	}
  	}
  	
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<n; j++){
      		cout << arr[i][j] << " ";
    	}
    	cout << endl;
  	}
  
  	return 0;
}
