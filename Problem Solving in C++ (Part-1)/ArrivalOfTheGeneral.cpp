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

    int max = 0, min = array[0];
    int maxindex = 0, minindex = 0;
    for(int i = 0; i < n; i++) {
        if(array[i] > max) {
            max = array[i];
            maxindex = i;
        }
        if(array[i] <= min) {
            min = array[i];
            minindex = i;
        }
    }

    int result;
    if(maxindex > minindex) {
        result = maxindex + n - minindex - 2  ;
    }
    else {
        result = maxindex  + n - minindex - 1;
    }

    cout << result << endl;

    return 0;
}
