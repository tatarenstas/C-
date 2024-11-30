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
 	return 0;
}

int main(){
	int n, i, max1, max2, max3;
	
	cout << "Enter N: ";
	cin >> n;
	
	int arr[n];
	
	srand(time(NULL));
	
	i = 0;
	for (i; i<n; i++){
		arr[i] = -5 + rand() % 10;
	}
	
	ShowArr(n, arr);
	cout << endl;
	
	i = 0;
	max = 0;
	for (i; i<n; i++){
		if (arr[i] > arr[max]){
		  	max = i;
		}
	}
	cout << max << endl;
	
	i = 0;
	for (i; i<n; i++){
		if (i == 0){
			if (max == 0){
				max2 = i+1;
			}
			else{
				max2 = i;
			}
		}
		if (arr[i] > arr[max2]){
			if (max2 != max){ 
				max2 = i;
			}
		}
	}
	cout << max2 << endl;
	
	i = 0;
	for (i; i<n; i++){
		if (i == 0){
			if (max != 0 & max2 != 0){
				max3 = 0;
			}
			else if (max != 1 & max2 != 1){
				max3 = 1;
			}
			else if (max != 2 & max2 != 2){
				max3 = 0;                  
			}       
		}
		if (arr[i] > arr[max2]){
			max3 = i;
			if (max3 != max2 & max3 != max){ 
				max3 = i;
			}
		}   
	}
	cout << max3 << endl;
	
 	
	return 0;
}