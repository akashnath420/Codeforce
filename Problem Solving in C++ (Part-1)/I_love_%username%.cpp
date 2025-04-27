#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n];
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int count = 0;
    int min = array[0];
    int max = array[0];
    for(int i = 0; i < n; i++) {
        if(max > array[i]) {
            max = array[i];
            count++;
        }
        if(min < array[i]) {
            min = array[i];
            count++;
        }
    }

    cout << count << endl;

    return 0;
}