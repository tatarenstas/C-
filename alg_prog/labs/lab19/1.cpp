#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
	char surnames[100][50];
	int indx, hist[100], math[100], engl[100];
	
	ofstream filewrite;
	filewrite.open("1_zavd.txt");
	filewrite << "Tataren 80 100 60" << endl;
	filewrite << "Shevchenko 80 80 60" << endl;
	filewrite << "Melnyk 95 95 80" << endl;
    filewrite.close();
    
    ifstream file_read("1_zavd.txt");
    indx = 0;
    while (!file_read.eof() && file_read >> surnames[indx] >> hist[indx] >> math[indx] >> engl[indx]) {
		indx++;
    }
    file_read.close();
    
    for (int i = 0; i < indx; i++) {
    	if (hist[i] >= 90 || math[i] >= 90 || engl[i] >= 90){
    		cout << surnames[i] << endl;
		}
	}
    
    return 0;
}
