#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ShowArr(int n, int arr[]){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int sort1(int n, int arr[]){
	int i, j, arre1, arre2;
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
}

int sort2(int n, int arr[]){
	int i, j, arre1, arre2;
	i = 0;
    for (i; i<n; i++){
		j = 0;
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
}

int main() {
    int n;
    
    cout << "Enter n: ";
    cin >> n;
    
    int arr[n];
    srand(time(NULL));
    
    for (int i = 0; i < n; i++){
        arr[i] = -10 + rand() % 20; //Андрію Ярославовичу, для того щоб не було чисел у відрізку [-2, 20], замініть % 20 на % 10
    }
    
    ShowArr(n, arr);

    int sum = 0;
    int found = 0;
    
    for (int i = 0; i < n; i++){
        if (arr[i] >= 2 && arr[i] <= 20 && arr[i] % 3 == 0) {
        	if (sum == 0){
        		cout << "Index: " << i;
			}
			else{
				cout << " " << i;
			}
            sum += arr[i];
            found = 1;
        }
    }

    if (found == 1) {
        cout << "\nSum: " << sum << endl;
    }
	else {
		int evenc = 0;
		int notevenc = 0;
		for (int i = 0; i < n; i++){
	        if (arr[i] % 2 == 0){
	            evenc += 1;
	        }
	        else{
	        	notevenc += 1;
			}
    	}
        
    	int arr2[evenc];
    	int arr3[notevenc];
    	int ec = 0;
    	int nec = 0;
    	for (int i = 0; i < n; i++){
	        if (arr[i] % 2 == 0){
	            arr2[ec] = arr[i];
	            ec += 1;
	        }
	        else{
	        	arr3[nec] = arr[i];
	        	nec += 1;
			}
    	}
    	sort1(ec, arr2);
    	sort2(nec, arr3);
    	int arr4[n];
    	for (int i = 0; i < ec; i++){
    		arr4[i] = arr2[i];
    	}
    	for (int i = 0; i < nec; i++){
    		arr4[ec+i] = arr3[i];
    	}
    	
    	cout << "Sorted: ";
    	ShowArr(n, arr4);
    }

    return 0;
}
