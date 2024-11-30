#include <iostream>
#include <cmath>

using namespace std;

int main() {
  	int def_year, y1, m1, d1, y2, m2, d2, full_1, full_2, dif, dif_m;
  	
  	def_year = 4000000000;
  
  	cout << "Enter y1, m1, d1, y2, m2, d2: ";
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	
	full_1 = def_year - (y1 * 365 + (m1 * 30) + d1);
	full_2 = def_year - (y2 * 365 + (m2 * 30) + d2);
	
	if (full_1>full_2){
		dif = full_1 - full_2;
		dif_m = floor(dif/30.416);
		cout << "1st person older, count month: " << dif_m;
	}
	else {
		dif = full_2 - full_1;
		dif_m = floor(dif/30.416);
		cout << "2st person older, count month: " << dif_m;
	}

  	return 0;
}