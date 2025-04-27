#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = 0; i < a; i++) {
        if (i == 0 || i == a - 1 || i % 2 == 0) {
            for (int j = 0; j < b; j++) {
                cout << "#";
            }
        } 
        else {
            for (int j = 0; j < b; j++) {
                if ((i % 4 == 1 && j == b - 1) || (i % 4 == 3 && j == 0)) {
                    cout << "#";
                } 
                else {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
