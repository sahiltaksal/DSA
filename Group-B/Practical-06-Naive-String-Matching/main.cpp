
#include <iostream>
#include <string>
using namespace std;

void naiveStringMatch(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();
    bool found = false;

    if (m == 0) {
        cout << "Empty pattern matches at every index from 0 to "
             << n << endl;
        for (int i = 0; i <= n; i++)
            cout << i << " ";
        cout << endl;
        return;
    }

    for (int i = 0; i <= n - m; i++) {
        int j;

        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == m) {
            cout << "Pattern found at index: " << i << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Pattern not found!" << endl;
}

int main() {
    string text, pattern;

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter pattern: ";
    getline(cin, pattern);

    if (pattern.length() > text.length()) {
        cout << "Pattern is longer than text. No match found.\n";
        return 0;
    }

    naiveStringMatch(text, pattern);

    return 0;
}
