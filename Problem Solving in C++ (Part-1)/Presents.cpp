#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n], array2[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    
    for(int i = 0; i < n; i++) {
        array2[array[i] - 1] = i + 1;
    }

    for(int i = 0; i < n; i++) {
        cout << array2[i] << " ";
    }
    
    cout << endl;

    return 0;
}