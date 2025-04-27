#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b >= 10) {
            cout << "YES" << endl;
        }
        else if(c + b >= 10) {
            cout << "YES" << endl;
        }
        else if(a + c >= 10) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}