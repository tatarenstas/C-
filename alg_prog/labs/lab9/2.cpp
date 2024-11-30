#include <iostream>

using namespace std;

int main(){
	int n, i, cdob;
	
	cout << "Enter N: ";
	cin >> n;
	
	int arr1[n], arr2[n];
	
	cout << "Enter arr1: ";
	i = 0;
	for (i; i<n; i++){
		cin >> arr1[i];
	}
	
	cout << "Enter arr2: ";
	i = 0;
	for (i; i<n; i++){
		cin >> arr2[i];
	}
	
	i = 0;
	cdob = 0;
	for (i; i<n; i++){
		cdob += arr1[i] * arr2[i];
	}
	
 	cout << "Result: " << cdob;
 	
 	
	return 0;
}