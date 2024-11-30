#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>

using namespace std;

float ShowArr1D(int n, int arr[]){
	for (int i = 0; i<n; i++){
		cout << arr[i] << " ";
 	}
 	cout << endl;
 	return 0;
}

float ShowArr(int n, int arr[][100]){
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
 			cout << arr[i][j] << "  ";
 		}
 		cout << endl;
 	}
 	return 0;
}

void CreateRandArr(int n, int arr[][100]) {
	srand(time(NULL));
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			int random_digit = (1 + rand() % 10);
			arr[i][j] = random_digit;
		}
	}
}

void DobZavdArr(int n, int arr[][100]){
	float dob = 1;
	for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
			for (int i2 = 0; i2 < n; i2++) {
		        for (int j2 = 0; j2 < n; j2++) {
		        	if (j2+i2 < n-1){
		        		if (i==i2 && j==j2){
							dob = dob * arr[i][j];
						}
					}
				}
			}
		}
	}
	cout << dob << endl;
}

void Paste10(int n, int arr[][100]){
	int min = arr[0][0];
	int c = 1;
	
	int i_min, j_min;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (arr[i][j] < min){
				min = arr[i][j];
				i_min = i;
				j_min = j;
				c = 1;
			}
			else if (arr[i][j] == min){
				min = arr[i][j];
				i_min = i;
				j_min = j;
				c++;
			}
		}
	}
	cout << c << ": " << min << " i: " << i_min << " j: " << j_min << endl;
	
	int check = 0;
	int check_last = 0;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (check == 1){
				int last_row[n-j];
				for (int q=j; q<n; q++){
					last_row[q-j] = arr[i][q];
				}
				arr[i][j] = 10;
				for (int q=j; q<n; q++){
					arr[i][q+1] = last_row[q-j];
				}
				check = 0;
			}
			if (i == i_min && j == j_min){
				if (j_min < n-1){
					check = 1;
				}
			}
		}
	}
}

void NonParni(int n, int arr[][100]){
	int c = 0;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (arr[i][j] % 2 != 0){
				c++;
			}
		}
	}
	int arr_res[c];
	int in = 0;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (arr[i][j] % 2 != 0){
				arr_res[in] = arr[i][j];
				in++;
			}
		}
	}
	ShowArr1D(in, arr_res);
}


int main(){
	int n;
	float max;
	
	cout << "Enter n: ";
	cin >> n;
	
	int arr[n][100];
	
	CreateRandArr(n, arr);
	cout << "Create random array: " << endl;
	ShowArr(n, arr);
	cout << endl;
	cout << "Dobutok: ";
	DobZavdArr(n, arr);
	cout << endl;
	cout << "Paste10: " << endl;
	Paste10(n, arr);
	cout << endl;
	ShowArr(n, arr);
	cout << endl;
	cout << "NonParni: ";
	NonParni(n, arr);
	
	return 0;
}
	                