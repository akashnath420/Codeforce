#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    char name[n];

    for(int i = 0; i < n; i++) {
        cin >> name[i];
    }

    int A = 0;
    int D = 0;
    for(int i = 0; i < n; i++) {
        if(name[i] == 'A') {
            A++;
        }
        else {
            D++;
        }
    }

    if(A > D) {
        cout << "Anton" << endl;
    }
    else if(D > A) {
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }

    return 0;
}
