#include <iostream> 

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    int array[n];

    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(array[i] > 0 && array[i] >= array[k - 1]) {
            count++;
        }
    }

    cout << count << endl;
    


    return 0;
}