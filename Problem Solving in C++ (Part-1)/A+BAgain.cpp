#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int x;
        cin >> x;
        int rem = 0;;
        for(int i = x; i != 0; i /= 10) {
            rem += i % 10;
        }
        cout << rem << endl;
    }
    
    return 0;
}
