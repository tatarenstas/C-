#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

using namespace std;

int ShowArr(int n, float arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main(){
	int n, c, i2;

    cout << "Enter n: ";
    cin >> n;

    float arr[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++){
        arr[i] = -10.0 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 20.0));
    
    }
	
	c = 0;
	float min = arr[0];
	for (int i = 0; i < n; i++) {
        if (fabs(arr[i]) < fabs(min)){
        	min = arr[i];
		}
		if (arr[i] <= 10.0 && arr[i] >= -5.0){
			c += 1;
		}
    }
    cout << "Min: " << min << ", modul: " << fabs(min) << endl;
    
    float arr2[n+c];
    
    i2 = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] <= 10.0 && arr[i] >= -5.0){
        	arr2[i2] = arr[i];
        	i2 += 1;
        	arr2[i2] = 0;
        	i2 += 1;
		}
		else{
			arr2[i2] = arr[i];
			i2 += 1;
		}
    }
    
    cout << "Result: ";
    ShowArr(n+c, arr2);
	
}