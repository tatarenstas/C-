#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int ShowArr(int n, float arr[]){
    for (int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main() {
    float a[7], b[7], c[7], d[7], sum;

    srand(time(NULL));

    for (int i = 0; i < 7; i++){
        a[i] = -30.0 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 60.0));
    }
	
	cout << "Ranok array: ";
    ShowArr(7, a);
    
    for (int i = 0; i < 7; i++){
        b[i] = -30.0 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 60.0));
    }
	
	cout << "Obid array: ";
    ShowArr(7, b);
    
    for (int i = 0; i < 7; i++){
        c[i] = -30.0 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 60.0));
    }

	cout << "Vechir array: ";
    ShowArr(7, c);
    
    for (int i = 0; i < 7; i++){
        d[i] = (a[i] + b[i] + c[i])/3;
    }
    
    cout << "Avg array: ";
    ShowArr(7, d);
    
    sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += d[i];
    }
    
    cout << "\nAvg temp: " << sum/7;

    return 0;
}
