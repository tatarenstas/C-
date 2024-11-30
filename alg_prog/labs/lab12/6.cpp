#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
  	int n, m, k, cn, cp;
  
  	cout << "Enter n: ";
  	cin >> n;
  	cout << "Enter m: ";
  	cin >> m;
  	cout << "Enter k: ";
  	cin >> k;
  
  	float arr[n][m];
  	
  	srand(time(NULL));
  
  	for (int i=0; i<n; i++){
    	for (int j=0; j<m; j++){
    		arr[i][j] = -5 + rand() % 10;
		}
  	}
  	cout << endl;
  	
  	for (int i=0; i<n; i++){
    	for (int j=0; j<m; j++){
      		cout << arr[i][j] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  	
  	cn = 0;
  	cp = 0;
  	
  	for (int i=0; i<n; i++){
    	for (int j=0; j<m; j++){
    		if (i+1 == k){
	      		if (arr[i][j] < 0){
	      			arr[i][j] = -1;
	      			cn++;
				}
				else if (arr[i][j] > 0){
					arr[i][j] = 1;
	      			cp++;
				}
			}
    	}
  	}
  	
  	for (int i=0; i<n; i++){
    	for (int j=0; j<m; j++){
      		cout << arr[i][j] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  	
  	cout << "Negative: " << cn << ", positive: " << cp;
  	
  	return 0;
}
