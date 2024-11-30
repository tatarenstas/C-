#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int ShowArr(int n, int arr[100]){
	int i;
	i = 0;
	for (i; i<n; i++){
 		cout << arr[i] << "  ";
 	}
 	return 0;
}

int main() {
	int n, i;
	
	cout << "Enter: ";
    cin >> n;
	
	int arr[n];
	
	srand(time(NULL));
	
	i = 0;
	for (i; i<n; i++){
		arr[i] = -2 + rand() % 4;
	}
		
	ShowArr(n, arr);
	
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            if (i > 0)
                arr[i-1] = -123;
            if (i < n-1)
                arr[i+1] = -123;
        }
    }

    cout << endl;
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] != -123) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
