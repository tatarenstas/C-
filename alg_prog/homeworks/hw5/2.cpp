#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    char surnames[3][50];
    int index;
    float mark, avgmark;
    
	index = 0;
	ifstream file_read("Zavd2.txt");
	while (!file_read.eof() && file_read >> surnames[index] >> mark){
		cout << surnames[index] << " " << mark << endl;
    	avgmark += mark;
        index++;
    }
    file_read.close();
    avgmark = (float)avgmark/3;
    cout << avgmark << endl;
    
    ofstream filewrite("Zavd2.txt", ios::app);
    filewrite << endl << avgmark;
    filewrite.close();
    
    return 0;
}
