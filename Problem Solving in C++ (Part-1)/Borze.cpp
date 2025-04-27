#include <iostream>


using namespace std;

int main() {
    string word;
    cin >> word;

    for(int i = 0; i < word.length(); i++) {
        if(word[i] == '-' && word[i+1] == '.') {
            cout << "1";
            i++;
        }
        else if(word[i] == '-' && word[i] == '-') {
            cout << "2";
            i++;
        }
        else if(word[i] == '.') {
            cout << "0";
        }
        
    }
    cout << endl;

    return 0;
}
