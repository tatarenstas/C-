#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char S[] = "testtexxttestxt";
    char S0[] = "test";
    
    char Sres[strlen(S) + 1];
    int k = 0;
    
    for (int i = 0; i < strlen(S);) {
        int found = 1;
        
        for (int j = 0; j < strlen(S0); j++) {
            if (S[i + j] != S0[j] || (i + j) >= strlen(S)) {
            	cout << i << " " << j << endl;
                found = 0;
                break;
            }
        }
        
        if (found == 1) {
            i += strlen(S0);
        }
		else {
            Sres[k++] = S[i++];
        }
    }
    
    Sres[k] = '\0';
    
    cout << Sres << endl;

    return 0;
}
