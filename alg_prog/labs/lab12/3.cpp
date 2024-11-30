#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(){
  	int n, m, c;
  	float avg;
  	m = 5;
  
  	cout << "Enter n: ";
  	cin >> n;
  
  	int arr[n][m];
  	float maxs[n];
  
  	srand(time(NULL));
  
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		arr[i][j] = -5 + rand() % 10;
    	}
  	}
  	cout << endl;
  
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		cout << arr[i][j] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  	
	for (int i = 0; i<n; i++){
		avg = 0;
		for (int j = 0; j<m; j++){
	      	avg += arr[i][j];
	    }
	    maxs[i] = avg/5.0;
	}
	
	for (int i = 0; i<n; i++){
		cout << maxs[i] << " ";
	}
  
  	return 0;
}
