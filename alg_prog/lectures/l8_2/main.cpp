#include <iostream>
#include <cstdlib>
#include <time.h>
#include "head.h"
#include "real.cpp"

using namespace std;

int main() {
    int n, inpn;
	float min, max;
    
    cout << "Enter n: ";
    cin >> n;
    
    float arr[n];
    srand(time(NULL));
    
    for (int i = 0; i < n; i++){
        arr[i] = 0 + rand() % 10;
    }
    
    ShowArr(n, arr);
    cout << endl;
    
    while (1){
    	Menu();
	    cin >> inpn;
	    
	    switch(inpn){
	    	case 1: cout << min_arr(n, arr) << endl; break;
	    	case 2: cout << max_arr(n, arr) << endl; break;
	    	case 3: return 0;
		}
	}

    return 0;
}
