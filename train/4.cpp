#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fileread("Zavd4.txt");
	
	char names[10][100];
	int houses[100];
	int cars[100];
	
	int indx = 0;
	while(!fileread.eof() && fileread >> names[indx] >> houses[indx] >> cars[indx]){
		indx++;
	}
	
	for (int i=0; i<indx; i++){
		cout << cars[i] << endl;
	}
	
	fileread.close();
	
	return 0;
}