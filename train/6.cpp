#include <iostream>
#include <fstream>

using namespace std;

int main(){
	char S[100];
	cout << "Enter S: ";
	
	gets(S);
	
	cout << strlen(S) << endl;
	S[strlen(S)] = '\0';
	cout << strlen(S) << endl;
	
	cout << S;
	
	ofstream filewrite("Zavd6.txt");
	filewrite << S;
	
	filewrite.close();	
	
	return 0;
}
