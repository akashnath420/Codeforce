#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string word;
    cin >> word;

    for(int i = 0; i < n; i++) {
        word[i] = tolower(word[i]);
    }

    sort(word.begin(), word.end());

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(word[i] != word[i+1]) {
            count++;
        }
    }

    if(count == 26) {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}