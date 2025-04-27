#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string word;
    getline(cin, word);

    string word2 = "";
    for(int i = 1; i < word.length() - 1; i+=3) {
        word2.push_back(word[i]);   
    }

    sort(word2.begin(), word2.end());

    int count = 0;
    for(int i = 0; i < word2.length(); i++) {
        if(word2[i] != word2[i+1]){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
