#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

float ShowArr(int n, float arr[]){
	for (int i = 0; i<n; i++){	
 		cout << arr[i] << "  ";
 	}
 	cout << endl;
 	return 0;
}

void CreateRandArr(int n, float arr[], float a, float b) {
	srand(time(NULL));
	for (int i=0; i<n; i++){
		arr[i] = a + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (b)));
	}
}

float GetMax(int n, float arr[]){
	float max = arr[1];
	for(int i=0; i<n; i++){
		if (i%2!=0){
			if (arr[i]>max){
				max = arr[i];
			}
		}
	}
 	return max;
}

void Sort(int n, float arr[]) {
	for (int i=0; i<n; i++){
		if (i%2!=0){
			for (int j=i; j<n; j++){
				if (j%2!=0){
					float arre1 = arr[i];
					float arre2 = arr[j];
					
					if (arre1 > arre2){
						arr[j] = arr[i];
						arr[i] = arre2;
					}
				}
			}
		}
	}
}


int main(){
	int n;
	float max;
	
	cout << "Enter n: ";
	cin >> n;
	
	
	float arr[n];
	
	CreateRandArr(n, arr, -1.5, 3);
	ShowArr(n, arr);
	
	max = GetMax(n, arr);
	cout << max;
	
	Sort(n, arr);
	cout << endl;
	ShowArr(n, arr);
	
	return 0;
}
	                