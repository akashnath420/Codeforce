#include <iostream> 

using namespace std;

int main() {
    int n;
    string word;

    cin >> n;
    cin >> word;

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(word[i] == word[i+1]) {
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}