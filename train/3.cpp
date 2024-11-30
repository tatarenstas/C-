#include <iostream>
#include <fstream>

using namespace std;

int countDigit(char S[1000]){
	int c = 0;
	for (int i=0; i<strlen(S); i++){
		if (isdigit(S[i])){
			c++;
		}
	}
	
	return c;
}

void changeSymbol(char S[1000]){
	for (int i=0; i<strlen(S); i++){
		if (isalpha(S[i]) != 0){
			if (S[i] == 'a'){
				S[i] = 'z';
			}
			else {
				int char_int = S[i];
				char char_new = char_int - 1;
				S[i] = char_new;
			}
		}
	}
}

int main(){
	char S[1000];
	int c;
	cout << "Enter S: ";
	gets(S);
	
	ofstream filearr_write("Zavd3.txt");
	filearr_write << S;
	
	c = countDigit(S);
	cout << c << endl;
	filearr_write << " " << c;
	
	changeSymbol(S);
	cout << S << endl;
	
	filearr_write << " " << S;
	
	filearr_write.close();
}