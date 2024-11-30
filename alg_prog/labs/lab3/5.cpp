#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3, AB, BC, AC, P, p, S;
    cout << "Enter x1, y1, x2, y2, x3, y3: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    AB = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    BC = sqrt(pow(x3-x2, 2)+pow(y3-y2, 2));
    AC = sqrt(pow(x3-x1, 2)+pow(y3-y1, 2));
    P = AB + BC + AC;
    p = 0.5*P;
    S = sqrt(p*(p-AB)*(p-BC)*(p-AC)); 
    cout << "P: " << P;
    cout << "\nS: " << S;
    return 0;
}