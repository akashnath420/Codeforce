#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string word;
        cin >> word;

        int len = word.length();

        if (len % 2 != 0) {
            cout << "NO" << endl;
        }
        else {
            int n = len / 2;
            int count = 0;

            for (int i = 0; i < n; i++) {
                if (word[i] != word[n + i]) {
                    count++;
                }
            }

            if (count == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
