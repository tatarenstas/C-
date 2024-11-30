#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char surnames[3][50], names[3][50];
    int ages[3], index;
    
	index = 0;
	ifstream file_read("Zavd1.txt");
	cout << "Ages:" << endl;
    while (file_read >> surnames[index] >> names[index] >> ages[index] && index < 3) {
    	cout << ages[index] << endl;
        index++;
    }

    cout << "\nNames:" << endl;
    for (int i = 0; i < index; i++) {
        cout << names[i] << endl;
    }
    
    cout << "\nSurnames:" << endl;
    for (int i = 0; i < index; i++) {
        cout << surnames[i] << endl;
    }

    file_read.close();
    return 0;
}
