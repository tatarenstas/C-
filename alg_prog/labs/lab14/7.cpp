#include <iostream>
#include <ctime>

using namespace std;

int main(){
  	int n, m, c1, c2, dob;
  
  	cout << "Enter n: ";
  	cin >> n;
  	cout << "Enter m: ";
  	cin >> m;
  	cout << "Enter c1: ";
  	cin >> c1;
  	cout << "Enter c2: ";
  	cin >> c2;
  	
  	c1 = c1-1;
  	c2 = c2-1;
  
  	int matr[n][m];
  	
  	srand(time(NULL));
  
  	for (int i=0; i<n; i++){
    	for (int j=0; j<m; j++){
      		matr[i][j] = -10 + rand() % 20;
    	}
  	}
  	
  	for (int i=0; i<n; i++){
    	for (int j=0; j<m; j++){
      		cout << matr[i][j] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  	
  	dob = 1;
  	for (int i=0; i<n; i++){
    	for (int j=c1; j<=c2; j++){
      		dob = dob * matr[i][j];
    	}
  	}
  	
  	cout << "Result: " << dob << endl;
  
  	return 0;
}
