#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int min = 240 - k;
    
    int count = 0;
    for(int i = 1; i <= n; i++) {
        min -= (i * 5);
        if(min >= 0) {
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}