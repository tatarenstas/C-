#include <iostream>
#include <ctime>
using namespace std;

void ShowArr(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int arr[n];
    srand(time(NULL));
    
    for (int i = 0; i < n; i++) {
        arr[i] = 1 + rand() % 5;
    }
    
    ShowArr(n, arr);
    
    int maxLength = 1, currentLength = 1, maxElement = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxElement = arr[i - 1];
            }
            currentLength = 1;
        }
    }

    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxElement = arr[n - 1];
    }
    
    cout << "Longest" << maxElement << ", repeats: " << maxLength << endl;

    return 0;
}
