#include <iostream>
using namespace std; 

int main() { 
    string s;
    getline (cin, s);
    char t;
    cin >> t;

    int index, per;
    bool x = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i]==t){
            cout << i << " ";
            per = i;
            break;
        }
    }
    for (int i = per + 1; i < s.length(); i++) {
        if (s[i] == t) {
            x = true;
            index = i;
        }
    }
    if(x)
    cout << index;
    
    return 0;
}