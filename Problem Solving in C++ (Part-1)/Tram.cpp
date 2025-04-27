#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    int num[n];

    int sum = 0;
    for(int i =  0; i < n; i++) {
        cin >> a;
        cin >> b;

        sum += -a + b;
        num[i] = sum;
    }

    int max = 0;
    for(int i =  0; i < n; i++) {
        if(max < num[i]) {
            max = num[i];
        }
    }

    cout << max << endl;


    return 0;
}
