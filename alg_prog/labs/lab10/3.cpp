#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int ShowArr(int n, int arr[]){
	for (int i = 0; i<n; i++){
 		cout << arr[i] << "  ";
 	}
 	cout << endl;
 	return 0;
}


int main(){
	int n, inpn;
	
	cout << "Rozmirnist: ";
	cin >> n;
	
	int arr[n];
	
	srand(time(NULL));
	
	for (int i=0; i<n; i++){
		arr[i] = 0 + rand() % 10;
	}
	cout << "Array: " << endl;
	ShowArr(n, arr);
	
	return 0;
}