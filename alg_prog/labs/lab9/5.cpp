#include <iostream>

using namespace std;

int main(){
	int n, i, min, minp;
	
	cout << "Enter N: ";
	cin >> n;
	
	int arr[n];
	
	i = 0;
	for (i; i<n; i++){
		cin >> arr[i];
	}
	
	i = 0;
	min = 482829;
	for (i; i<n; i++){
		if (arr[i] % 2 != 0){
			if (min == 482829){
		 		min = arr[i];
				minp = i;
			}
			else {
				if (arr[i] < min){
					min = arr[i];
					minp = i;
				}
			}
		}
	}
	
 	cout << "Min: " << min << "\nMinp: " << minp;
 	
 	
	return 0;
}