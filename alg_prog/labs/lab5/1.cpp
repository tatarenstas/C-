#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3, b_to_a, c_to_a;
    cout << "Enter x1, y1, x2, y2, x3, y3: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    b_to_a = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    c_to_a = sqrt(pow(x3-x1, 2)+pow(y3-y1, 2));
    if (b_to_a>c_to_a){
    	cout << "Result: B" << "\nX: " << x1 << " Y: " << y1;
	}
	else if (b_to_a<c_to_a){
    	cout << "Result: C" << "\nX: " << x2 << " Y: " << y2;
	}
	else {
		cout << "Same coordinates";
	}
    return 0;
}