#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string word, word1, word2, word3;
    cin >> word >> word1 >> word2;

    word3 = "";

    for(int i = 0; i < word.length(); i++) {
        word3.push_back(word[i]);
    }

    for(int i = 0; i < word1.length(); i++) {
        word3.push_back(word1[i]);
    }

    sort(word3.begin(), word3.end());
    sort(word2.begin(), word2.end());

    if(word3 == word2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}