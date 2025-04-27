#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    string word, word1;
    

    word1 = "codeforces";

    while(t--) {
        cin >> word;
        int count = 0;
        for(int i = 0; i < word.length(); i++) {
            if(word[i] != word1[i]) {
                count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}
