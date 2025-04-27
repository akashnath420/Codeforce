#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int x, y, n;
        cin >> x >> y >> n;

        int k = (n - y) / x;

        int ans = (x * k) + y;
        cout << ans << endl;
    }


    return 0;
}