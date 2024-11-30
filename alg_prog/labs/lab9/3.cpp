#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int ShowArr(int n, int arr[10]){
	int i;
	i = 0;
	for (i; i<n; i++){
 		cout << arr[i] << "  ";
 	}
 	cout << endl;
 	return 0;
}


int main(){
	int n, i, res;
	
	cout << "Enter N: ";
	cin >> n;
	
	int arr1[n], arr2[n], arr3[n];
	
	srand(time(NULL));
	
	i = 0;
	for (i; i<n; i++){
		arr1[i] = -10 + rand() % 20;
	}
	
	i = 0;
	for (i; i<n; i++){
		arr2[i] = -10 + rand() % 20;
	}
	
	ShowArr(n, arr1);
	ShowArr(n, arr2);
	
	i = 0;
	for (i; i<n; i++){
		arr3[i] = arr1[i] - arr2[i];
	}
	
	ShowArr(n, arr3);
 	
	return 0;
}