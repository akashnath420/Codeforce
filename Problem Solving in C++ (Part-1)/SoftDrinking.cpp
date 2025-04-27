#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int a = k * l;
    int b = a / nl;
    int x = c * d;
    int y = p / np;

    int ans = min(b, min(x, y)) / n;

    cout << ans << endl;
    
    return 0;
}
