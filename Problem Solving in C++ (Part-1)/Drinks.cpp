#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }

    cout << (float)(sum) / n << endl;

    return 0;
}