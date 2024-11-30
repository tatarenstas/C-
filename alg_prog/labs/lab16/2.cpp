#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char S[] = "test55tex3t";
    char S0[] = "36637yddh3";
    
    char Sres[strlen(S)+strlen(S0)+1];
    
    int i = 0;
  	
  	for (i; i<strlen(S); i++){
  		Sres[i] = S[i];
  	}
  	
  	for (int j = 0; j <strlen(S0); j++, i++){
  		Sres[i] = S0[j];
  	}
  	Sres[i] = '\0';
  	
  	for (int k = 0; k < strlen(Sres); k++) {
        if (isdigit(Sres[k])) {
            Sres[k] = '*';
        }
    }
    
    cout << Sres << endl;

}