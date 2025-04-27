#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string word;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> word;
        if(word == "Tetrahedron") {
            sum+=4;
        }
        else if(word == "Cube") {
            sum+=6;
        }
        else if(word == "Octahedron") {
            sum+=8;
        }
        else if(word == "Dodecahedron") {
            sum+=12;
        }
        else {
            sum+=20;
        }
    }
    
    cout << sum << endl;

    return 0;
}
