#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    ifstream file_read("D:\\Zavd1.txt");

    char surnames[3][100], names[3][100];
    int ages[3], index = 0, letter_count = 0;

    cout << "Age: ";
    while (file_read >> surnames[index] >> names[index] >> ages[index] && index < 3) {
        cout << ages[index] << " ";

        for (int i = 0; surnames[index][i] != '\0'; i++) {
            if (isalpha(surnames[index][i])) letter_count++;
        }
        for (int i = 0; names[index][i] != '\0'; i++) {
            if (isalpha(names[index][i])) letter_count++;
        }
        index++;
    }

    cout << "\nSurnames, names:" << endl;
    for (int i = 0; i < index; i++) {
        cout << surnames[i] << " " << names[i] << endl;
    }

    cout << "Count of letters: " << letter_count << endl;

    file_read.close();
    return 0;
}
