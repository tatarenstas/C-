#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int c;
    char S[] = "test    te xt";
    
    char S1[strlen(S) + 6];
    
    c = 0;
    int j = 0;

    S1[j++] = '1';
    S1[j++] = '2';
    S1[j++] = '3';
    S1[j++] = '4';
    S1[j++] = '5';

    for (int i = 3; i < strlen(S); i++) {
        if (S[i] != ' ' || (j > 0 && S1[j - 1] != ' ')) {
            S1[j] = S[i];
            j++;
        }
    }

    S1[j] = '\0';
    
    cout << S1 << endl;

    return 0;
}
