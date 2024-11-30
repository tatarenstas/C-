#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter n: ";
    cin >> n;
    
    int first_half = n / 1000;
    int second_half = n % 1000;
    
	int hundreds_1 = first_half / 100;
    int tens_1 = (first_half / 10) % 10;
    int units_1 = first_half % 10;
    
    int hundreds_2 = second_half / 100;
    int tens_2 = (second_half / 10) % 10;
    int units_2 = second_half % 10;
    
    if ((hundreds_1 + tens_1 + units_1) == (hundreds_2 + tens_2 + units_2)){
		cout << "Lucky";
	}
	else {
		cout << "Unlucky";
	}
    return 0;
}