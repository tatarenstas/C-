#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int ShowArr(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main() {
    int n, p, check;

    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter p: ";
    cin >> p;

    check = 1;

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        arr[i] = -5 + rand() % 20;
    }

    ShowArr(n, arr);
    cout << endl;

   	for (int i = 0; i < n; ++i) {
        if (arr[i] <= p) {
            check = 0;
            break;
        }
    }

    int c = 0;
    int nec = 0;
    int ec = 0;
    if (check == 1) {
    	cout << "Delete even: ";
        for (int i = 0; i < n; ++i) {
            if (arr[i] % 2 != 0) {
                c++;
            }
        }
    }
	else {
		cout << "Delete not even: ";
        for (int i = 0; i < n; ++i) {
            if (arr[i] % 2 == 0) {
                c++;
            }
        }
    }

    int new_n = c;
    int arr2[new_n];

    int i2 = 0;
    if (check == 1) {
        for (int i = 0; i < n; ++i) {
            if (arr[i] % 2 != 0) {
                arr2[i2] = arr[i];
                i2++;
            }
        }
    }
	else {
        for (int i = 0; i < n; ++i) {
            if (arr[i] % 2 == 0) {
                arr2[i2] = arr[i];
                i2++;
            }
        }
    }

    ShowArr(new_n, arr2);

    return 0;
}
