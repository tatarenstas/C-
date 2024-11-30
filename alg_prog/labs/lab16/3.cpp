#include <iostream>

using namespace std;

int ShowArr(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main() {
	int c;
    char S[] = "2test556tex3t1";
    
    for (int i=0; i<strlen(S); i++){
    	if (isdigit(S[i])){
    		c++;
    	}
	}
	
	int Sdig[c];
	
	c = 0;
	for (int i=0; i<strlen(S); i++){
    	if (isdigit(S[i])){
    		Sdig[c] = S[i] - '0';
    		c++;
    	}
	}
	ShowArr(c, Sdig);

    return 0;
}