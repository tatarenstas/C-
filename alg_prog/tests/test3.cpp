#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float i11, i12, i13, i21, i22, i23, i31, i32, i33, i1, i2, det;
    cout << "Enter i11, i12, i13, i21, i22, i23, i31, i32, i33: ";
    cin >> i11 >> i12 >> i13 >> i21 >> i22 >> i23 >> i31 >> i32 >> i33;
    i1 = i11 * i22 * i33 + i21 * i32 * i13 + i12 * i23 * i31;
    i2 = i13 * i22 * i31 + i23 * i32 * i11 + i12 * i21 * i33;
    det = i1-i2;
    cout << "det: " << det;
    return 0;
}