#include <iostream>
#include "head.h"

using namespace std;

void ShowArr(int n, float arr[]){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

void Menu(){
	cout << "=====================" << endl;
    cout << "Choose operation: " << endl;
    cout << "1 - Minimum" << endl;
    cout << "2 - Maximum" << endl;
    cout << "3 - Exit" << endl;
}

float min_arr(int n, float arr[]){
	float min;
	min = arr[0];
	for (int i=1; i<n; i++){
    	if (arr[i] < min){
			min = arr[i];
		}
	}   
	return min;
}

float max_arr(int n, float arr[]){
	float max;
	max = arr[0];
	for (int i=1; i<n; i++){
    	if (arr[i] > max){
			max = arr[i];
		}
	}   
	return max;
}