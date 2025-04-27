#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n];

    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    sort(array, array + n);

    int miniSum = 0;
    for(int i = 0; i < n - 1; i++) {
        miniSum += (array[n-1] - array[i]);
    }

    cout << miniSum << endl;

    return 0;
}
