#include <iostream>
#include <cmath>

using namespace std;

float Even(int k){
	int result;
	
	result = (k % 2 == 0);
	
	return result;
}
int main() {
	int a, b, i, count;
	cout << "Enter a, b: ";
	cin >> a >> b;
	
	count = 0;
	i = a;
	for (i; i<b; i++){
		if (Even(i)){
			count += 1;
		}
	}
	
	cout << count << endl;
	
	return 0;
}
