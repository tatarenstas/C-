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
	int n, i;
	
	cout << "Enter N: ";
	cin >> n;
	
	int arr[n], arr_res[n];
	
	srand(time(NULL));
	
	i = 0;
	for (i; i<n; i++){
		arr[i] = 0 + rand() % 20;
	}
	
	ShowArr(n, arr);
	
	i = 0;
	for (i; i<n; i++){
		if (arr[i] % 2 == 0){
			arr_res[i] = 0;
		}
		else {
			arr_res[i] = 1;
		}
	}
	
	ShowArr(n, arr_res);
 	
	return 0;
}