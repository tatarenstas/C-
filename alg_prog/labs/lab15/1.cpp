#include <iostream>

using namespace std;

int main() {
    char S1[] = "banana";
    char S2[] = "apple";
	
	if (strlen(S1) > strlen(S2)) {
		for (int i = 0; i<strlen(S1); i++){
			if (S1[i] == 'a'){
				S1[i] = '*';
			}
    	}
    	cout << S1;
  	}
  	else if (strlen(S2) > strlen(S1)){
  		for (int i = 0; i<strlen(S2); i++){
			if (S2[i] == 'a'){
				S2[i] = '*';
			}
    	}
    	cout << S2;
	}
	else{
		cout << "Porivno";
	}

    return 0;
}