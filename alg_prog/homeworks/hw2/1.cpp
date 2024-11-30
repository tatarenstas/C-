#include <iostream>
#include <stdlib.h>
#include<string.h>

using namespace std;

int main(){
	int p, indx, c;
	char strq[] = "Mathematic a queen of science";
	
  	p = 0;
  	for (int i = 0; i<strlen(strq); i++){
  		if (strq[i] == ' '){
  			p++;
		}
  	}
  	if (strq[strlen(strq)-1] != ' '){
  		p++;
	}
  	int arr[p];
  	
  	indx = 0;
  	c = 0;
  	for (int i = 0; i<strlen(strq); i++){
  		if (isalpha(strq[i]) != 0 && strq[i] != ' '){
			c += 1;
		}
  		if (strq[i] == ' '){
  			arr[indx] = c;
  			indx++;
  			c = 0;
		}
  	}
  	arr[indx] = c;
  	
  	for (int i = 0; i<p; i++){
  		cout << arr[i] << " ";	
	}
  	
  
  	return 0;
}