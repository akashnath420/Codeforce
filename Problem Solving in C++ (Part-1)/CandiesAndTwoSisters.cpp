#include <iostream>

using namespace std;

int main() {
    int n, c;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> c;
        if(c % 2 == 0) {
            cout << (c / 2) - 1 << endl;
        }
        else {
            cout << (c / 2) << endl;
        }
    }

    return 0;
}
