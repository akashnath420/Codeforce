#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        int diff = abs(a - b);
        int count = diff / 10;
        if(diff % 10 > 0) {
            count++;
        }

        cout << count << endl;
    }
    
    return 0;
}
