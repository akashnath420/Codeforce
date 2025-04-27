#include <iostream>

using namespace std;

int main() {
    string word;
    cin >> word;

    int upc = 0;
    int lc = 0;

    for(int i = 0; i < word.length(); i++) {
        if(isupper(word[i])) {
            upc++;
        }
        else {
            lc++;
        }
    }

    if(upc > lc) {
        for(int i  = 0; i < word.length(); i++) {
            word[i] = toupper(word[i]);
        }
    }
    else {
        for(int i  = 0; i < word.length(); i++) {
            word[i] = tolower(word[i]);
        }
    }

    cout << word << endl;
    
    return 0;
}