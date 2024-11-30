#include <iostream>
using namespace std;

int main() {
    int n, d1, d2, d3;
    
    cout << "Enter n, d1, d2, d3: ";
    cin >> n >> d1 >> d2 >> d3;
    
    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int units = n % 10;

    cout << "Result: ";

    if (hundreds == d1 || tens == d1 || units == d1) cout << d1 << " ";
    if (hundreds == d2 || tens == d2 || units == d2) cout << d2 << " ";
    if (hundreds == d3 || tens == d3 || units == d3) cout << d3 << " ";
    cout << endl;

    return 0;
}