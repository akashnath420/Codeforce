#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int sum = 0;

    // sum = 1 + (2 + 1) + (3 + 3) + (4 + 6) + (5 + 10) + (6 + 15)
    // n = 24 -- 21 -- 15 -- 10
    for(int i = 1; n > 0; i++) {
        sum = i + sum;
        if(n - sum >= 0) {
            count++;
        }
        n -= sum;
    }
    cout << count << endl;
    
    return 0;
}
