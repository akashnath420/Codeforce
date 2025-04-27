#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a;
        cin >> a;
        int array[a];

        for(int i = 0; i < a; i++)  {
            cin >> array[i];
        }

        if(a == 1) {
            cout << "YES" << endl;
        }
        else {
            sort(array, array + a);
            vector<int> vec;
            for(int i = 1; i < a; i++) {
                vec.push_back(array[i] - array[i - 1]);
            }
            sort(vec.begin(), vec.end(), greater<int>());

            if(vec[0] <= 1) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }

    }

    return 0;
}
