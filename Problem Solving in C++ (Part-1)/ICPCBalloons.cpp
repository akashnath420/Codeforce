#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int x;
        string word;
        cin >> x >> word;

        sort(word.begin(), word.end());

        int point = 0;
        for(int i = 0; i < word.length(); i++) {
            if(i == 0) {
                point+=2;
            }
            else if(word[i] == word[i-1]) {
                point++;
            }
            else {
                point+=2;
            }
        }
        cout << point << endl;
    }


    return 0;
}