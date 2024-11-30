#include <iostream>
#include <ctime>

using namespace std;

int main(){
  	int n, m, maxdiag, mindiag, diff, c;
  
  	cout << "Enter n: ";
  	cin >> n;
  	
  	m = n;
  
  	int matr[n][m];
  	
  	srand(time(NULL));
  
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		matr[i][j] = -5 + rand() % 10;
    	}
  	}
  	
  	//закоментуйте, якщо захочете побачити як програма працює без нулів
	matr[0][m-1] = 0;
  	
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		cout << matr[i][j] << " ";
    	}
    	cout << endl;
  	}
  	cout << endl;
  	
  	maxdiag = matr[0][0];
  	mindiag = matr[0][0];
  	
  	for (int i = 0; i<n; i++){
    	for (int j = 0; j<m; j++){
      		if (i==j){
      			if (matr[i][j] > maxdiag){
      				maxdiag = matr[i][j];
				}
				if (matr[i][j] < mindiag){
      				mindiag = matr[i][j];
				}
			}
    	}
  	}
  	
  	diff = maxdiag - mindiag;

	cout << "Max: " << maxdiag << ", min: " << mindiag << endl;	
  	cout << "Difference: " << diff << endl;
  	cout << endl;
  	
  	c = 0;
  	int j = m-1;
  	for (int i = 0; i<n; i++){
  		if (matr[i][j] == 0){
  			c++;
		}
    	j--;
  	}
  	
  	if (c == 0){
  		cout << "Variant 1" << endl;
	}
	else{
		cout << "Variant 2" << endl;
	}
  	
  	if (c == 0){
  		for (int i = 0; i<n; i++){
      		cout << matr[i][0] << endl;
    	}
	}
	else{
		for (int i = 0; i<n; i++){
      		cout << matr[i][m-1] << endl;
    	}
	}
  
  	return 0;
}
