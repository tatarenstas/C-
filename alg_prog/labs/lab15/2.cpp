#include <iostream>

using namespace std;

int main() {
	int c1, c2, c3, c4, check;
	
	char startChar, endChar;
    cout << "Enter start symb: ";
    cin >> startChar;
    cout << "Enter end symb: ";
    cin >> endChar;
	
    char S[] = "slava_ukraineoo";
    char Sforcut[] = "slava_ukraineoo";
	
	for (int i = strlen(S); i>=0; i--){
		cout << S[i];
  	}
  	cout << endl;
  	
  	c1 = 0;
  	for (int i = 0; i<strlen(S); i++){
  		if (c1 == 0){
			if (S[i] == 'a'){
				cout << i << endl;
				c1++;
			}
		}
  	}
  	
  	c2 = 0;
  	c3 = 0;
  	for (int i = 0; i<strlen(S); i++){
  		if (S[i] == '_'){
			c2++;
		}
		else if (S[i] == 'o'){
			c3++;
		}
  	}
  	cout << "Count '_' : " << c2 << endl;
  	cout << "Count 'o' : " << c3 << endl;
  	
  	for (int i = 0; i<strlen(S); i++){
  		if (S[i] == 'a'){
			S[i] = '*';
		}
  	}
  	cout << S << endl;
  	
  	check = 0;
  	for (int i = 0; i<strlen(S); i++){
		if (Sforcut[i] == endChar){
			check = 0;
		}
		if (check == 1){
			cout << Sforcut[i];
		}
		if (Sforcut[i] == startChar){
			check = 1;
		}
  	}

    return 0;
}