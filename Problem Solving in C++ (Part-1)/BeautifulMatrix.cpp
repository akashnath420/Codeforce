#include <iostream> 

using namespace std;

int main() {
    int Matrix[5][5];

    int array[2];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> Matrix[i][j];
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(Matrix[i][j] == 1) {
                cout << abs(i - 2) + abs(j - 2) << endl;
                return 0;
            }
        }
    }
}