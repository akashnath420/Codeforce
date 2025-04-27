#include <iostream> 

using namespace std;

int main() {
    int limak, bob;
    cin >> limak >> bob;

    
    int count = 0;
    while(true) {
      if(limak > bob) {
        break;
      }
      limak = limak * 3;
      bob = bob * 2;
      count++;
    }

    cout << count << endl;
    
    return 0;
}