#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, a;
    cin >> n;

    while(n--) {
        vector<int> ans;
        cin >> a;
        int x = 1;
        while(a) {
            x = x * 10;
            int p = a % x;
            if(p) {
                ans.push_back(p);
            }
            a -= p;
        }

        cout << ans.size() << endl;
        for(int i = ans.size() - 1; i >= 0; i--) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    

    return 0;
}