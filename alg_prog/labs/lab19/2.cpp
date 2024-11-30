#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int n, p, symb_c, c, indx, res_arr[c];;
    char S[1000];
    
    cout << "Enter n: ";
    cin >> n;

    ifstream fileread("2_zavd.txt");

    fileread.read(S, 1000);
    S[strlen(S)+1] = '\0';

    fileread.close();
    
    cout << S << endl;
    
    symb_c = 0;
    p = 0;
    indx = 0;
    for (int i = 0; i <= strlen(S); i++) {
        if (S[i] == ' ' || S[i] == '\0') {
            if (symb_c == n){
            	res_arr[indx] = p;
            	c++;
            	indx++;
			}
            symb_c = 0;
            p++;
        }
		else {
            symb_c++;
        }
    }
    for (int i=0; i<indx; i++){
    	p = 0;
    	for (int j=0; j<strlen(S); j++){
    		if (S[j] == ' ' || S[j] == '\0'){
    			p++;
    		}
    		else{
    			if (res_arr[i] == p){
    				cout << S[j];
				}
			}
		}
		cout << endl;
	}

    return 0;
}
