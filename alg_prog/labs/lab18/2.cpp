#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int number;

    cout << "Enter a three-digit number: ";
    cin >> number;

    ofstream fileread("D:\\Zavd2.txt");
    fileread << number;
    fileread.close();

    ifstream filewrite("D:\\Zavd2.txt");
    filewrite >> number;
    filewrite.close();

    int first = number / 100;
    int second = (number / 10) % 10;
    int last = number % 10;
    int resnumber = last * 100 + second * 10 + first;

    ofstream filewrite_res("D:\\Zavd2.txt", ios::app);
    filewrite_res << endl << resnumber;
    filewrite_res.close();

    cout << "Done!" << endl;

    return 0;
}
