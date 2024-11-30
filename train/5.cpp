#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	char names[10][100];
	int digit1[100], digit2[100], digit3[100];
	
	int indx = 0;
	
	ifstream fileread("Zavd5.txt");
	while(!fileread.eof() && fileread >> names[indx] >> digit1[indx] >> digit2[indx] >> digit3[indx]){
		indx++;
	}
		
	cout << indx << endl;
	
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	for (int i=0; i<indx; i++){
		sum1 = sum1 + digit1[i];
		sum2 = sum2 + digit2[i];
		sum3 = sum3 + digit3[i];
	}
	
	float avg1 = (float)sum1/indx;
	float avg2 = (float)sum2/indx;
	float avg3 = (float)sum3/indx;
	
	cout << avg1 << endl;
	cout << avg2 << endl;
	cout << avg3 << endl;
	
	fileread.close();
	
	return 0;
}