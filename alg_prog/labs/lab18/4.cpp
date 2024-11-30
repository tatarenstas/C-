#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fileread("D:\\Zavd4.txt");

    char surname[50];
    int mark;
    float total = 0;
    int count = 0;

    while (fileread >> surname >> mark) {
        total += mark;
        count++;
    }
    fileread.close();

    float average = total / count;
    char ectsmark;

    if (average >= 90) ectsmark = 'A';
    else if (average >= 80) ectsmark = 'B';
    else if (average >= 70) ectsmark = 'C';
    else if (average >= 60) ectsmark = 'D';
    else if (average >= 50) ectsmark = 'E';
    else if (average >= 40) ectsmark = 'FX';
    else ectsmark = 'F';

    ofstream filewrite("D:\\Zavd4.txt", ios::app);
    filewrite << endl << "Avg mark: " << average << ", " << ectsmark << endl;
    filewrite.close();

    cout << "Done!" << endl;
    return 0;
}
