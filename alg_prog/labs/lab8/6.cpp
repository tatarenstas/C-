#include <iostream>
#include <cmath>

using namespace std;

float Leng(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4){
	float result1, result2, result3, result4;
	result1 = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
	result2 = sqrt(pow(x3-x2, 2)+pow(y3-y2, 2));
	result3 = sqrt(pow(x4-x3, 2)+pow(y4-y3, 2));
	result4 = sqrt(pow(x4-x1, 2)+pow(y4-y1, 2));
	cout << "Result: " << result1 << ", " << result2 << ", " << result3 << ", " << result4 << endl;
	
	return 0;
}
	
int main() {
	float x1, x2, x3, x4, y1, y2, y3, y4;
	
	cout << "Enter x1, x2, y1, y2: ";
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	Leng(x1, x2, x3, x4, y1, y2, y3, y4);
	
	return 0;
}
