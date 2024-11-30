#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char text[1000];

    ifstream fileread("D:\\Zavd6.txt");
    if (!fileread) {
        cerr << "Error opening file!" << endl;
    }

    fileread.read(text, 1000);
    text[strlen(text)+1] = '\0';

    fileread.close();
    
    for (int i=0; i<strlen(text); i++){
    	if (text[i] == ' '){
    		if (text[i-1] == ' '){
    			for (int j=i; j<strlen(text); j++){
    				text[j] = text[j+1];
    			}
			}
		}
	}
	
	ofstream filearr_write("D:\\Zavd6.txt", ios::app);
	filearr_write << endl << text;
	filearr_write.close();

    cout << "Text from file: " << text << endl;

    return 0;
}
