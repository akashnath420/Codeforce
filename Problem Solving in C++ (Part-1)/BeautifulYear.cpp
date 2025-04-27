#include <iostream>
#include <set>

using namespace std;

int main() {
    int year;
    cin >> year;

    string Year;

    while(true) {
        year++;
        Year = to_string(year);
        set <char> str;
        
        for(int i = 0; i < 4; i++) {
            str.insert(Year[i]);
        }

        if(str.size() == 4) {
            break;
        }
        else{
            year = stoi(Year);
        } 
    }

    cout << Year << endl;


    return 0;
}
