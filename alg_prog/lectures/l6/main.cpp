#include <iostream>
#include <string>

using namespace std;

int main(){
  	int n, m;
  
  	cout << "Enter n: ";
  	cin >> n;
  	cout << "Enter m: ";
  	cin >> m;
  
  	int arr[n][m];
  
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		cin >> arr[i][j];
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
  
	int max = arr[0][0];
	for (int i = 0; i<n; i++){
	    for (int j = 0; j<m; j++){
	      	if (arr[i][j] > max){
	        	max = arr[i][j];
	      	}
	    }
	}
  
  	int min = arr[0][0];
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		if (arr[i][j] < min){
        		min = arr[i][j];
      		}
    	}
  	}
  
  	int cmx = 0;
  	int cmn = 0;
  
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		if (arr[i][j] == max){
        		cmx++;
      		}
      		else if (arr[i][j] == min){
        		cmn++;
      		}
    	}
  	}
  
  	cout << "Count of max: " << cmx << endl;
  	cout << "Count of min: " << cmn << endl;
  
  	return 0;
}
