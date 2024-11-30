#include <iostream>
#include <ctime>

using namespace std;

int main(){
  	int n, m, c;
  	float all_max, max;
  
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
  	
  	//закоментуйте, якщо захочете побачити як програма працює без нулів
	matr[0][0] = 0;
  	matr[n-1][m-1] = 0;
  	
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		cout << matr[i][j] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  	
  	c = 0;
  	all_max = 0;
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		if (i==j && (matr[i][j] == 0)){
      			c += 1;
      			max = matr[i][0];
      			for (int j = 0; j<m; j++){
      				if (matr[i][j]>max){
      					max = matr[i][j];
					}
      			}
      			all_max += max;
			}
    	}
  	}
  	
  	if (c!=0){
  		cout << "Average max: " << all_max/c;
  	}
  	else {
  		cout << "Don't have 0 on diagonale";	
	}
  
  	return 0;
}
