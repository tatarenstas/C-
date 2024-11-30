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

    int sum = 0;

    for (int i = n - 1; i >= 0; --i) {
        int current_value = arr[i];
        arr[i] = sum;
        sum += current_value;
    }

    cout << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
