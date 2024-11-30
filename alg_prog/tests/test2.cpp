#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

using namespace std;

int main() {
    float r, h, S, V;
    cout << "Enter r, h, S, V: ";
    cin >> r >> h;
    S = 2*M_PI*r*h;
    V = M_PI*pow(r, 2)*h;
    cout << "S: " << S;
    cout << "\nV: " << V;
    return 0;
}