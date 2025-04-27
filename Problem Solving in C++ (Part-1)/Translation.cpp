#include <iostream>

using namespace std;

int main() {
    string word;
    string word1;

    cin >> word >> word1;

    int n = word.length();
    string word2 = "";
    for(int i = n - 1; i >= 0; i--) {
        word2.push_back(word[i]);
    }

    if(word2 == word1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
