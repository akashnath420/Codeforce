#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, x, y;
    cin >> a >> x;

    int array[1000];

    for(int i = 0; i < x; i++) {
        cin >> array[i];
    }

    cin >> y;

    int b = x;
    for(int i = 0; i < y; i++) {
        cin >> array[b];
        b++;
    }

    sort(array, array + x + y);

    int count = 0;
    for(int i = 0; i < x + y; i++) {
        if(array[i] != array[i+1]) {
            count++;
        }
    }

    if(count == a) {
        cout << "I become the guy." << endl;
    }
    else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
