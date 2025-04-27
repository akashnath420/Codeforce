#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x[n], y[n]; 

    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int countSum = 0;
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(x[i] == y[j]) {
                count++;
            }
        }
        countSum += count;
    }

    cout << countSum << endl;


    return 0;
}