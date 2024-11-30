#include <iostream>
#include <ctime>
using namespace std;

void ShowArr(int n, int arr[]){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main() {
    int n, c, found, maxLength, maxElement;
    
    cout << "Enter n: ";
    cin >> n;
    
	int arr[n];
    srand(time(NULL));
    
    for (int i = 0; i < n; i++){
        arr[i] = 1 + rand() % 5;
    }
    ShowArr(n, arr);
    
    
    c = 1;
    found = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == arr[i+1]){
        	c++;
		}
		else{
			if (found == 0){
				found = 1;
				maxElement = arr[i];
				maxLength = c;
			}
			else{
				if (c > maxLength){
					maxElement = arr[i];
					maxLength = c;
				}
			}
			c = 1;
    	}
    }
    
    for (int i = 0; i < maxLength; i++){
    	cout << maxElement << " ";
	}
	cout << endl;
    
    cout << "Max element: " << maxElement << endl;
    cout << "Max length: " <<maxLength << endl;
    
    return 0;
}
