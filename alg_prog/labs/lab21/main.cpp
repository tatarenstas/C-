#include <iostream>
#include <time.h>
#include "head.h"
#include "real.cpp"

using namespace std;

int main(){
	int n, inpn;
	char key;
	
	cout << "Enter n: ";
	cin >> n;
	
	int arr[n];
	int arr_orig[n];
	
	Start(n, arr, arr_orig);
	
	cout << "Array: " << endl;
	ShowArr(n, arr_orig);
	
	while (1){
    	Menu();
    	cin >> inpn;
    	switch(inpn){
	    	case 1: subMenu1(n, arr); break;
	    	case 2: subMenu2(n, arr); break;
	    	case 3: cout << "Result:" << endl; WhoMany(n, arr); break;
	    	case 4: cout << "Result:" << endl; Sum(n, arr); break;
	    	case 5: cout << "Result:" << endl; Swap(n, arr); break;
	    	case 6: cout << "Result:" << endl; Split(n, arr); break;
	    	case 7: cout << "Result:" << endl; Zip(n, arr_orig); break;
	    	case 8: return 0;
		}
		cout << "Enter any key" << endl;
		cin >> key;
		system("cls");
	}
 	
	return 0;
}