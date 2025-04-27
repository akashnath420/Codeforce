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
        if(word == "Timru" && x == 5) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
