#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int array[n];

        for(int i = 0; i < n; i++) {
            cin >> array[i];
        }

        if(array[n-1] != array[n-2] && array[n-1] != array[n-3]) {
            cout << n << endl;
        }
        else {
            for(int i = 0; i < n; i++) {
                if(array[i] != array[i+1] && array[i] != array[i+2]) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
