#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
  	int n, mini, minj;
  	float min;
  
  	cout << "Enter n: ";
  	cin >> n;
  
  	float arr[n][n];
  	
  	srand(time(NULL));
  
  	for (int i=0; i<n; i++){
    	for (int j=0; j<n; j++){
    		arr[i][j] = (rand() % 101 / 10.0f) - 5.0f;
		}
  	}
  	cout << endl;
  	
  	for (int i=0; i<n; i++){
    	for (int j=0; j<n; j++){
      		cout << arr[i][j] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  	
  	float min_value = arr[n-1][n - 1]; 
  	int min_row = n-1, min_col = n - 1;

    for (int i=0; i<n; i++) {
        for (int j=n-1; j>=i; j--) {
            if (arr[i][j] < min_value) {
                min_value = arr[i][j];
                min_row = i;
                min_col = j;
            }
        }
    }

    cout << "\nMin: " << min_value << endl;
    cout << "Coords: (" << min_row << ", " << min_col << ")" << endl;

    return 0;
}
