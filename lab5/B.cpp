/*B-73765.From small to capital
B-73765.From small to capital*/

#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' and s[i] <= 'z') s[i] -= 32;
        cout << s[i];
    }
}