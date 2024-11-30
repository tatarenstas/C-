#include <iostream>

using namespace std;

int main() {
	int i, c, indx;
	c = 0;
	char S[] = "ttt11uddndmmdja";
    
    for (int i=0; i<strlen(S); i++){
    	if (S[i]==S[i+1]){
    		S[i] = '%';
    		c++;
		}
	}
	
	indx = 0;
	char Sres[strlen(S)-c+1];
	for (int i=0; i<strlen(S); i++){
    	if (S[i]!='%'){
    		Sres[indx] = S[i];
    		indx++;
		}
	}
	
	Sres[indx] = '\0';
	cout << Sres;

    return 0;
}