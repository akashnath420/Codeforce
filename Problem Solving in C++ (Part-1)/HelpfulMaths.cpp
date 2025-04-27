#include <iostream> 
#include <algorithm>

using namespace std;

int main() {
    string word;

    cin >> word;

    int n = (word.length() + 1) / 2;
    
    int array[n];
    int j = 0;
    for(int i = 0; i < word.length(); i+=2) {
        array[j] = word[i] - '0';
        j++; 
    }

    sort(array, array + n);
   

    j = 0;
    for(int i = 0; i < word.length(); i++) {
        if(i % 2 == 0) {
            cout << array[j];
            j++;
        }
        else {
            cout << "+";
        }
    }
    cout << endl;

    return 0;
}