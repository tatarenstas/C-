#include <iostream>
#include <time.h>
#include "head.h"
#include "real.cpp"

using namespace std;

int main(){
	int n, inpn;
	char key;
	
	cout << "Rozmirnist: ";
	cin >> n;
	
	int arr[n];
	
	srand(time(NULL));
	
	for (int i=0; i<n; i++){
		arr[i] = 0 + rand() % 10;
	}
	cout << "Array: " << endl;
	ShowArr(n, arr);
	while (1){
    	Menu();
    	cin >> inpn;
    	switch(inpn){
	    	case 1: cout << "Result:" << endl; ShowArr(n, arr); break;
	    	case 2: cout << "Result:" << endl; cout << Sum(n, arr) << endl; break;
	    	case 3: cout << "Result:" << endl; cout << Avg(n, arr) << endl; break;
	    	case 4: cout << "Result:" << endl; SortArr(n, arr); break;
	    	case 5: cout << "Result:" << endl; PutXAfterY(n, arr); break;
	    	case 6: return 0;
		}
		cout << "Enter any key" << endl;
		cin >> key;
		system("cls");
	}
 	
	return 0;
}