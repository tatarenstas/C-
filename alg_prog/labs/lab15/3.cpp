#include <iostream>

using namespace std;

int main() {
	int c;
    char S[] = "abrakadabraabab";
	
	c = 0;
	for (int i = 0; i<strlen(S); i++){
		if (S[i] == 'a'){
			if (S[i+1] == 'b'){
				c++;
			}
    	}
  	}
  	
  	cout << c << endl;
  	
  	if (c>3){
  		for (int i = 0; i<strlen(S); i++){
			if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' || S[i] == 'y'){
				S[i] = ' ';
    		}
  		}
	}
	else {
		for (int i = 0; i<strlen(S); i++){
			if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' || S[i] == 'y'){
				S[i] = '.';
    		}
  		}
	}
	
	cout << S;

    return 0;
}