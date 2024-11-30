#include <iostream>
#include "head.h"

using namespace std;

void Menu(){
	cout << "---------------------------------------------------" << endl;
	cout << "|           EXAMPLE ARRAY USING             |" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "|           CHOOSE OPERATION FROM LIST             |" << endl;
	cout << "1. Print array" << endl;
    cout << "2 - Sum of array" << endl;
    cout << "3 - Avg value of array" << endl;
    cout << "4 - Sort" << endl;
    cout << "5 - Put X after Y" << endl;
    cout << "6 - Exit" << endl;
}

int ShowArr(int n, int arr[]){
	for (int i = 0; i<n; i++){
 		cout << arr[i] << "  ";
 	}
 	cout << endl;
 	return 0;
}

int Sum(int n, int arr[]){
	int sum = 0;
	for (int i = 0; i<n; i++){
 		sum += arr[i];
 	}
 	return sum;
}
float Avg(int n, int arr[]){
	float avg;
	float sum = 0;
	
	for (int i = 0; i<n; i++){
 		sum += arr[i];
 	}
 	
 	avg = sum/n;
 	
 	return avg;
}

int SortArr(int n, int arr[]){
	int arre1, arre2;
	for (int i=0; i<n; i++){
		int j = 0;
		for (j+1; j<n; j++){	
	 		arre1 = arr[i];
	 		arre2 = arr[j];
	 		if (arr[i]<arr[j]){
	 			arr[i] = arre2;
				arr[j] = arre1;	
			}
			else{
				arr[i] = arre1;
				arr[j] = arre2;
			}
	 	}
	}
	ShowArr(n, arr);
	return 0;
}
int PutXAfterY(int n, int arr[]){
	int x, y, c;
	cout << "Enter X: ";
	cin >> x;
	cout << "Enter Y: ";
	cin >> y;
	
	c = 0;
	
	for (int i = 0; i<n; i++){
 		if (arr[i] == y){
 			c++;
		}
 	}
 	
 	int arr2[n+c];
 	
 	int i2 = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == y){
        	arr2[i2] = arr[i];
        	i2++;
        	arr2[i2] = x;
        	i2++;
		}
		else{
			arr2[i2] = arr[i];
			i2 ++;
		}
    }
	
	ShowArr(n+c, arr2);
	return 0;
}