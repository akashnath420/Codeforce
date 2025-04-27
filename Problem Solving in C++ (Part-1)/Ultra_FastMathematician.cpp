#include <iostream>

using namespace std;

int main() {
    string word1, word2;
    cin >> word1 >> word2;

    string word3 = "";
    for(int i = 0; i < word1.length(); i++) {
        if((word1[i] == '0' && word2[i] == '1') || (word1[i] == '1' && word2[i] == '0')) {
            word3.push_back('1');
        }
        else if(word1[i] == '1' && word2[i] == '1') {
            word3.push_back('0');
        }
        else {
            word3.push_back('0');
        }
    }
    
    cout << word3 << endl;

    return 0;
}