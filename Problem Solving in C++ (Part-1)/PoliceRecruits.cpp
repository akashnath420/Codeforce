#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    int crime = 0, police = 0;
    for(int i = 0; i < t; i++) {
        int x;
        cin >> x;
        if(x > 0) {
            police += x;
        }
        else {
            if(police < 1) {
                crime++;
            }
            else {
                police--;
            }
        }
    }

    cout << crime << endl;

    return 0;
}