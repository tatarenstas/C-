#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int c;
    char text[1000];

    ifstream fileread("5_zavd.txt");

    fileread.read(text, 1000);
    text[strlen(text)+1] = '\0';

    fileread.close();
    
    c = 0;
    for (int i = 0; i < strlen(text); i++){
    	if (isalpha(text[i]) == 0){
    		c++;
		}
	}
	char res[c];
	c = 0;
	for (int i = 0; i < strlen(text); i++){
    	if (isalpha(text[i]) == 0 && text[i] != ' '){
    		res[c] = text[i];
    		c++;
		}
	}
	cout << res;
	
	ofstream filewrite;
	filewrite.open("5_zavd_2.txt");
	filewrite << res << endl;
    filewrite.close();

    return 0;
}
