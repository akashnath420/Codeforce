#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int k = n / 3;

        if(((k + 1) * 1) + (k * 2) == n) {
            cout << k + 1 << " " << k << endl;
        }
        else if((k * 1) + ((k + 1) * 2) == n) {
            cout << k << " " << k + 1 << endl;
        }
        else if((k * 1) + (k * 2) == n) {
            cout << k << " " << k << endl;
        }
    }


    return 0;
}