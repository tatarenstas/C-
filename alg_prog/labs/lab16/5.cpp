#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char S[] = "aligator banana anna qartuara bananana";
    int ac = 0;
    int word_st = 0;

    for (int i = 0; i <= strlen(S); i++) {
        if (S[i] == ' ' || S[i] == '\0') {
            if (ac == 3) {
                for (int j = word_st; j < i; j++) {
                    cout << S[j];
                }
                cout << endl;
            }
            ac = 0;
            word_st = i + 1;
        } else if (tolower(S[i]) == 'a') {
            ac++;
        }
    }

    return 0;
}
