#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, i, inp, max, min;
	cout << "Enter n: ";
	cin >> n;
	
	min = 0;
	max = 0;
	i = 0;	
	for (i; i<n; i++){
		cin >> inp;
		if (inp != 0){
			if (i == 0){
				max = inp;
				min = inp;
			}
			else {
				if (max<inp){
					max = inp;
				}
				if (min>inp){
					min = inp;
				}
			}
		}
		else {
			cout << "End" << endl;
		}
	}
	
	cout << "Different: " << max-min << endl;
	
	return 0;
}