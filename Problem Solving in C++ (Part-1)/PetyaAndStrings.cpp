#include <iostream> 

using namespace std;

int main() {
    string word;
    string word1;

    cin >> word >> word1;

    for(int i = 0; i < word.length(); i++) {
        if(isupper(word[i])) {
            word[i] = tolower(word[i]);
        }
    }

    for(int i = 0; i < word1.length(); i++) {
        if(isupper(word1[i])) {
            word1[i] = tolower(word1[i]);
        }
    }

    int flag = 0;
    for(int i = 0; i < word.length(); i++) {
        if(word[i] > word1[i]) {
            flag = 1;
            break;
        }
        else if(word[i] < word1[i]) {
            flag = -1;
            break;
        }
    }

    cout << flag << endl;

    return 0;
    
}