#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int array[n];

    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    sort(array, array + n);
    
    int i = 0, count = 0;
    int n1 = n % 3;

    for(int i = 0; i < n - n1; i+=3) {
        if((array[i] + k) <= 5 && (array[i+1] + k) <= 5 && (array[i+2] + k) <= 5) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
