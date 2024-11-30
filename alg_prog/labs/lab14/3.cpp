#include <iostream>
#include <ctime>

using namespace std;

int main(){
  	int n, m;
  
  	cout << "Enter n: ";
  	cin >> n;
  	
  	m = n;
  
  	float matr[n][m];
  	
  	srand(time(NULL));
  
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		matr[i][j] = -5.0 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 10.0));
    	}
  	}
  	
  	cout << "Matrix: " << endl;
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		cout << matr[i][j] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  	
  	cout << "Matrix.T: " << endl;
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		cout << matr[j][i] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  	
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		matr[i][j] = matr[i][j] + matr[j][i];
    	}
  	}
  	
  	cout << "Matrix + Matrix.T: " << endl;
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		cout << matr[i][j] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  
  	return 0;
}
