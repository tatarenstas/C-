#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, inp;
	float s, i, avg;
	cout << "Enter n: ";
	cin >> n;
	
	s = 0;
	i = 1;
	for (i; ; i++){
		cin >> inp;
		if (inp > n){
			cout << "End";
			break;
		}
		s += inp;
		avg = s/i;
		cout << "Avg: " << avg << " S: " << s << endl;
	}
	
	return 0;
}