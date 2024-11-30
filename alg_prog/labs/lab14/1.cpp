#include <iostream>
#include <ctime>

using namespace std;

int main(){
  	int n, m, k, p;
  
  	cout << "Enter n: ";
  	cin >> n;
  	cout << "Enter m: ";
  	cin >> m;
  	cout << "Enter k: ";
  	cin >> k;
  	cout << "Enter p: ";
  	cin >> p;
  	
  	k = k-1;
  	p = p-1;
  
  	float matr[n][m];
  	float matr2[n][m];
  	
  	srand(time(NULL));
  
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		matr[i][j] = -10.0 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 20.0));
    	}
  	}
  	
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		cout << matr[i][j] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  	
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
    		if (j==k){
      			matr2[i][j] = matr[i][p];
      		}
      		else if (j==p){
      			matr2[i][j] = matr[i][k];
      		}
      		else {
      			matr2[i][j] = matr[i][j];
			}
    	}
  	}
  	
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		cout << matr2[i][j] << " ";
    	}
    	cout << endl;
  	}
  
  	return 0;
}
