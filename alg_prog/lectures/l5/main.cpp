#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int ShowArr(int n, int arr[10]){
	int i;
	i = 0;
	for (i; i<n; i++){
 		cout << arr[i] << "  ";
 	}
 	return 0;
}

int main(){
	int n, i, j, arr[50], arre1, arre2;
	
	cin >> n;
	
	srand(time(NULL));
	
	i = 0;
	for (i; i<n; i++){
		arr[i] = 4 + rand() % 7;
	}
	
	/* i = 0;
	for (i; i<10; i++){
		cin >> arr[i];
	}*/
	
	ShowArr(n, arr);
 	
 	cout << endl;
	i = 0;
	for (i; i<n; i++){
		j = 0;
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
 	cout << endl;
 	
 	
 	i = 0;
	for (i; i<n; i++){
 		cout << arr[i] << "  ";
 		if (arr[i] == 7){
 			for	(j=i; j<n; j++){
 				arr[j] = arr[j-1];
			}
		}
 	}
 	
 	ShowArr(n, arr);
 	
 	
	return 0;
}