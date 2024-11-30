#include <iostream>
#include <time.h>
#include <cmath>
#include "head.h"

using namespace std;

int Start(int n, int arr[], int arr_orig[]){
	int type, inpn;
	cout << "Enter type \n1-manual\n2-generator: " << endl;
	cin >> type;
	if (type==1){
		for (int i=0; i<n; i++){
			cin >> inpn;
			arr[i] = inpn;
			arr_orig[i] = inpn;
		}
	}
	else{
		srand(time(NULL));
		for (int i=0; i<n; i++){
			inpn = -20 + rand() % 40;
			arr[i] = inpn;
			arr_orig[i] = inpn;
		}
	}
	return 0;
}

void Menu(){
	cout << "---------------------------------------------------" << endl;
	cout << "|           CHOOSE OPERATION FROM LIST             |" << endl;
	cout << "1 - Print array" << endl;
    cout << "2 - Sort array" << endl;
    cout << "3 - Check which numbers more" << endl;
    cout << "4 - Sum" << endl;
    cout << "5 - Swap" << endl;
    cout << "6 - Split" << endl;
    cout << "7 - Zip" << endl;
    cout << "8 - Exit" << endl;
}

void subMenu1(int n, int arr[]){
	int inpn;
	cout << "---------------------------------------------------" << endl;
	cout << "|           CHOOSE OPERATION FROM LIST             |" << endl;
	cout << "1 - Column" << endl;
    cout << "2 - Row" << endl;
    cin >> inpn;
    switch(inpn){
	    case 1: cout << "Result:" << endl; ShowArrColumn(n, arr); break;
	    case 2: cout << "Result:" << endl; ShowArr(n, arr); break;
	}
}
void subMenu2(int n, int arr[]){
	int inpn;
	cout << "---------------------------------------------------" << endl;
	cout << "|           CHOOSE OPERATION FROM LIST             |" << endl;
	cout << "1 - Up" << endl;
    cout << "2 - Down" << endl;
    cin >> inpn;
    switch(inpn){
	    case 1: cout << "Result:" << endl; SortUp(n, arr); break;
	    case 2: cout << "Result:" << endl; SortDown(n, arr); break;
	}
}

int ShowArr(int n, int arr[]){
	for (int i = 0; i<n; i++){
 		cout << arr[i] << "  ";
 	}
 	cout << endl;
 	return 0;
}
int ShowArrColumn(int n, int arr[]){
	for (int i = 0; i<n; i++){
 		cout << arr[i] << endl;
 	}
 	cout << endl;
 	return 0;
}

int SortUp(int n, int arr[]){
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

int SortDown(int n, int arr[]){
	int arre1, arre2;
	for (int i=0; i<n; i++){
		int j = 0;
		for (j+1; j<n; j++){	
	 		arre1 = arr[i];
	 		arre2 = arr[j];
	 		if (arr[i]>arr[j]){
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

int WhoMany(int n, int arr[]){
	int c1 = 0;
	int c2 = 0;
	for (int i=0; i<n; i++){
		if (arr[i] % 2 == 0){
			c1++;
		}
		else{
			c2++;
		}
	}
	if (c1>c2){
		cout << "Even" << endl;
	}
	else if (c1<c2){
		cout << "Odd" << endl;
	}
	else{
		cout << "Equally" << endl;
	}
	return 0;
}

int Sum(int n, int arr[]){
	int sum = 0;
	for (int i=0; i<n; i++){
		int tens = arr[i]/10;
		int units = arr[i] - tens*10;
		sum += tens + units;
	}
	
	cout << sum << endl; 
	
 	
 	return 0;

}

int Swap(int n, int arr[]){
	int arr2[n];
	
	for (int i=0; i<n; i++){
		int resnumber;
		int tens = arr[i]/10;
		if (tens>0){
			int units = arr[i] - tens*10;
			resnumber = units*10+tens;
			arr2[i] = resnumber;
		}
		else{
			arr2[i] = arr[i];
		}
	}
	ShowArr(n, arr2);
	
 	
 	return 0;
}

int Split(int n, int arr[]){
	int sum = 0;
	
	int p = 0;
	int neg = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] > 0){
			p++;
		}
		else if (arr[i] < 0){
			neg++;
		}
	}
	
	int arrp[p];
	int arrn[neg];
	
	int indx1 = 0;
	int indx2 = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] > 0){
			arrp[indx1] = arr[i];
			indx1++;
		}
		else if (arr[i] < 0){
			arrn[indx2] = arr[i];
			indx2++;
		}
	}
	
	
	ShowArr(p, arrp);
	ShowArr(neg, arrn);
	
 	
 	return 0;
}

int Zip(int n, int arr[]){
	int c = 0;
	
	for (int i = 0; i < n; i++){
		if (i != 0){
			if (arr[i] == arr[i-1]){
				c++;
			}
		}
    }
    
    int arr2[n-c];
    int indx = 0;
    
    for (int i = 0; i < n; i++){
		if (arr[i] == arr[i+1]){
			arr2[indx] = arr[i] + arr[i+1];
			indx++;
			i++;
		}
		else{
			arr2[indx] = arr[i];
			indx++;
		}
    }
	
	ShowArr(n-c, arr2);
	return 0;
}
                               