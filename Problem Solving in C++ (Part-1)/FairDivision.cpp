#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string word ;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            word += to_string(x);
        }

        if(n % 2 != 0) {
            cout << "NO" << endl;
        }
        else {
            string word1, word2 = "";
            for(int i = 0; i < n/2; i++) {
                word1.push_back(word[i]);
            }
            for(int i = n/2; i < n; i++) {
                word2.push_back(word[i]);
            }

            if(word1 == word2) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }

        
    }


    return 0;
}