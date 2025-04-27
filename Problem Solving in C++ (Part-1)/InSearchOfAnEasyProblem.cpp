#include <iostream>


using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    bool flag = false;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x == 1) {
            flag = true;
            break;
        }
    }

    if(flag == true) {
        cout << "HARD" << endl;
    }
    else {
        cout << "EASY" << endl;
    }

    return 0;
}
