#include <iostream>

using namespace std;

int main() {
	int c;
    char S[] = "slovozdvanad";
    char Sp1[5];
    char Sp2[5];
    char Sp3[5];
    char S2[13];

   for (int i = 0; i < 12; i++) {
        if (i >= 0 && i < 4) {
            Sp1[i] = S[i];
        } else if (i >= 4 && i < 8) {
            Sp2[i - 4] = S[i];
        } else if (i >= 8 && i < 12) {
            Sp3[i - 8] = S[i];
        }
    }
    
    int idx = 0;
    for (int i = 0; i < 4; i++) {
        S2[idx] = Sp2[i];
        idx++;
    }

    for (int i = 0; i < 4; i++) {
        S2[idx] = Sp3[i];
        idx++;
    }

    for (int i = 0; i < 4; i++) {
        S2[idx] = Sp1[i];
        idx++;
    }
  	
  	c = 0;
  	for (int i = 0; i<strlen(S); i++){
		if (S[i] == 'e'){
			c++;
    	}
  	}
  	
  	cout << S2 << endl;
  	
  	if (c>0){
  		cout << S2 << endl;
	}

    return 0;
}