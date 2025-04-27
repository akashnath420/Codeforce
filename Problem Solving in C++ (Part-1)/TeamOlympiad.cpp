#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> p, m, pe;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        if(n == 1) {
            p.push_back(i+1);
        } 
        else if(n == 2) {
            m.push_back(i+1);
        }
        else {
            pe.push_back(i+1);
        }
    }

    int ans = min(p.size(), min(m.size(), pe.size()));

    cout << ans << endl;

    for(int i = 0; i < ans; i++) {
        cout << p[i] << " " << m[i] << " " << pe[i] << endl;
    }

    return 0;
}
