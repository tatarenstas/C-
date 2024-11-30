#include <iostream>
#include <stdlib.h>
#include<string.h>

using namespace std;

int main(){
	int p, indx, c, max_indx;
	char S[] = "slovo_ptext_paragraph";
	
  	p = 1;
  	for (int i = 0; i<strlen(S); i++){
  		if (S[i] == '_'){
  			p++;
		}
  	}
  	
  	cout << "Count of words: " << p << endl;
  	
  	int arr[p];
  	
  	indx = 0;
  	c = 0;
  	for (int i = 0; i<strlen(S); i++){
  		if (isalpha(S[i]) != 0 && S[i] != '_'){
			c += 1;
		}
  		if (S[i] == '_'){
  			arr[indx] = c;
  			indx++;
  			c = 0;
		}
  	}
  	arr[indx] = c;
	max_indx = 0;
	
	for (int i = 0; i<p; i++){
  		if (arr[i] > arr[max_indx]){
  			max_indx = i;
		}
	}
	
	
	cout << "Longest: ";
	p = 0;
	for (int i = 0; i<strlen(S); i++){
  		if (max_indx == p){
  			cout << S[i];
		}
		if (S[i] == '_'){
  			p++;
		}
  	}
  	cout << endl;
  	cout << "Count of symbols longest: " << arr[max_indx] << endl;
  	
  	c = 0;
  	for (int i = 0; i<strlen(S); i++){
  		if (S[i] == 'p'){
  			if (i > 0){
  				if (S[i-1] == '_'){
  					c++;
				}
			}
		}
  	}
  	
  	cout << "Count of words from p: " << c << endl;
  	
  
  	return 0;
}