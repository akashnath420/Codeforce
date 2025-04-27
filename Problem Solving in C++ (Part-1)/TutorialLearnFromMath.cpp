#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 4, y = n - 4;
    while(true) {
        int count = 0;
        for(int i = 2; i <= sqrt(x); i++) {
            if(x % i == 0) {
                count++;
            }
        }
        int count1 = 0;
        for(int i = 2; i <= sqrt(y); i++) {
            if(y % i == 0) {
                count1++;
            }
        }
        if(count > 0 && count1 > 0) {
            break;
        }
        x++;
        y = n - x;
    }

    cout << x << " " << y << endl;
    

    return 0;
}
