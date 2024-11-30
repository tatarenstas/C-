#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int n, i;
	char S[1000];
	
	i = 0;
  	
  	ifstream filearr("file.txt");
  	while(!filearr.eof()){
  		filearr >> S[i];
  		i++;
	}
	n = i;
	filearr.close();
	
	for (i = 0; i < n; i++){
		cout << S[i];
	}
  	
  	return 0;
}
