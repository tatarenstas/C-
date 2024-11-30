#include <iostream>

using namespace std;

int main(){
	int n, i, dob, min;
	
	cout << "Enter N: ";
	cin >> n;
	
	int arr[n];
	
	i = 0;
	for (i; i<n; i++){
		cin >> arr[i];
	}
	
	i = 0;
	dob = 1;
	for (i; i<n; i++){
		if (arr[i] > 0){
			dob = dob * arr[i];
		}
	}
	
	i = 0;
	for (i; i<n; i++){
		if (i == 0){
			min = arr[i];
		}
		else {
			if (arr[i] < min){
				min = arr[i];
			}
		}
	}
	
 	cout << "Min: " << min << "\nDob: " << dob;
 	
 	
	return 0;
}