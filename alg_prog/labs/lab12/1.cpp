#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
  	int n, m;
  
  	cout << "Enter n: ";
  	cin >> n;
  	cout << "Enter m: ";
  	cin >> m;
  
  	int arr[n][m];
  	
  	srand(time(NULL));
  
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		arr[i][j] = -5 + rand() % 20;
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
  
	for (int i = 0; i<m; i++){
    	for (int j = 0; j<n; j++){
      		cout << arr[j][i] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  	
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		cout << arr[i][j]*10 << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  
  	return 0;
}
