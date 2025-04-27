#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int x = n + 1;
    while (true) {
        int count = 0;
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                count++;
            }
        }
        if (count == 0) {
            break;
        }
        else {
            x++;
        }
    }

    if (x == m) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
