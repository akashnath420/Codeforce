#include <iostream>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int h1;
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> h1;
        if(h1 > h) {
            count+=2;
        }
        else {
            count++;
        }
    }
    
    cout << count << endl;


    return 0;
}
