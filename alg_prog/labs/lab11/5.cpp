#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int ShowArr(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main(){
	int n, max, c, i2;

    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        arr[i] = -5 + rand() % 20;
    }

    ShowArr(n, arr);
	
	max = arr[0];
	for (int i = 0; i < n; i++) {
        if (arr[i] > max){
        	max = arr[i];
		}
    }
    
    cout << "Max: " << max << endl;
    
    c = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == max){
        	c += 1;
		}
    }
    cout << "Count: " << c << endl;
    
    c = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0){
        	c += 1;
		}
    }
    
    int arr2[n+c];
    
    i2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0){
        	arr2[i2] = arr[i];
        	i2 += 1;
        	arr2[i2] = max;
        	i2 += 1;
		}
		else{
			arr2[i2] = arr[i];
			i2 += 1;
		}
    }
    
    ShowArr(n+c, arr2);
	
	return 0;
}