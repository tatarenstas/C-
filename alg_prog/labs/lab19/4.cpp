#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int p, c, indx;
    char S[1000];

    ifstream fileread("4_zavd.txt");

    fileread.read(S, 1000);
    S[strlen(S)+1] = '\0';

    fileread.close();
    
    cout << S << endl;
    
    p = 1;
    for (int i=0; i<strlen(S); i++){
    	if (S[i] == ' '|| S[i] == '\0'){
    		p++;
    	}
	}
	
	char Sres[strlen(S)+p+1];
	
	indx = 0;
	for (int i=0; i<strlen(S); i++){
    	if (S[i] == ' '|| S[i] == '\0'){
    		Sres[indx] = '0' + c;
    		indx++;
    		Sres[indx] = ' ';
    		indx++;
    		c=0;
    	}
    	else{
    		Sres[indx] = S[i];
    		indx++;
    		c++;
		}
	}
	Sres[indx] = '0' + c;
	indx++;
	Sres[indx] = '\0';
	
	cout << Sres;

    return 0;
}
