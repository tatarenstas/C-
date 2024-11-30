#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int i, c, indx;
	char S[] = "TESTdjdoyjdKK";
	
	for (int i=0; i<strlen(S); i++){
  		if (isupper(S[i])){
  			S[i] = S[i] + 32;
		}
		else if (islower(S[i])){
			S[i] = S[i] - 32;
		}
  	}
  	
  	cout << S << endl;
  	
  	for (int i=0; i<strlen(S); i++){
  		if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u' && S[i] != 'y' && S[i] != 'A' && S[i] != 'E' && S[i] != 'I' && S[i] != 'O' && S[i] != 'U' && S[i] != 'Y'){
  			c++;
		}
  	}
  	c++;
  	
  	char Sres[strlen(S)-c+1];

  	indx = 0;
  	for (int i=0; i<strlen(S); i++){
  		if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u' && S[i] != 'y' && S[i] != 'A' && S[i] != 'E' && S[i] != 'I' && S[i] != 'O' && S[i] != 'U' && S[i] != 'Y'){
  			indx = indx;
		}
		else{
			Sres[indx] = S[i];
			indx++;
		}
  	}
  	
  	Sres[indx] = '\0';
  	cout << Sres << endl;
	
	return 0;

}