#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int d1, d2, d3, d4, avg, geom_mean;
    cout << "Enter d1, d2, d3, d4: ";
    cin >> d1 >> d2 >> d3 >> d4;

    if (d1 <= d2 && d2 <= d3 && d3 <= d4) {
        avg = (d1 + d2 + d3 + d4) / 4;
        cout << "arith avg: " << avg << endl;
    } else {
        geom_mean = pow(d1 * d2 * d3 * d4, 1.0 / 4);
        cout << "geom avg: " << geom_mean << endl;
    }

    return 0;
}
