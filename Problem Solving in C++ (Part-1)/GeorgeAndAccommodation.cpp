#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x, y;
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        if(x <= y - 2) {
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}