#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int c;
	char S[1000];
	cout << "Enter S (>40 symbols): ";
	gets(S);
	if (strlen(S) < 40){
		cout << "Short string";
		return 1;
	}
	
	ofstream filearr_write("D:\\Zavd5.txt");
	filearr_write << S;
	
	c = 0;
	for (int i=0; i<strlen(S); i++){
		if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' || S[i] == 'y'){
			c++;
		}
	}
	cout << c;
	
  	filearr_write << " res: "<< c;
	filearr_write.close();
	
    return 0;
}