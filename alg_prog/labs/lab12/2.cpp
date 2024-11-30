#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
  	int n, m, avg;
  
  	cout << "Enter n: ";
  	cin >> n;
  	cout << "Enter m: ";
  	cin >> m;
  
  	int arr[n][m];
  	
  	srand(time(NULL));
  
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		arr[i][j] = -5 + rand() % 10;
    	}
  	}
  	cout << endl;
  	
  	for (int i = 0; i<m; i++){
    	for (int j = 0; j<n; j++){
      		cout << arr[j][i] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  	
  	
  	avg = 0;
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
    		if (i==j){
	      		arr[i][j] = arr[i][j]*5;
	      	}
	      	else if (i>j){
	      		arr[i][j] = 0;
	      	}
	      	else if (i<j){
	      		arr[i][j] = abs(arr[i][j]);
	      	}
    	}
  	}
  	
  	for (int i = 0; i<m; i++){
    	for (int j = 0; j<n; j++){
      		cout << arr[j][i] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  
  	return 0;
}
