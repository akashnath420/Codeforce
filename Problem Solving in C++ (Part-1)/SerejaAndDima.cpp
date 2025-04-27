#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    int array[t];

    for(int i = 0; i < t; i++) {
        cin >> array[i];
    }

    int per = 1, sereja = 0, dima = 0;
    int i = 0;
    int j = t - 1;
    while(t--) {
        if(per % 2 == 1) {
            if(array[i] > array[j]) {
                sereja += array[i];
                i++;
            }
            else {
                sereja += array[j];
                j--;
            }
        }
        else {
            if(array[i] > array[j]) {
                dima += array[i];
                i++;
            }
            else {
                dima += array[j];
                j--;
            }
        }
        per++;
    }
    cout << sereja << " " << dima << endl;

    return 0;
}
