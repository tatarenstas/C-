#include <iostream>
#include <fstream>

using namespace std;

int main(){
	char S[100];
	cout << "Enter S: ";
	
	gets(S); 
	
	ofstream filewrite("Zavd7.txt");
	
	int n = strlen(S);
	cout << n;
	
	for (int i=0; i<n; i++){
		filewrite << S[i] << endl;
	}
	filewrite.close();
	
	return 0;
}