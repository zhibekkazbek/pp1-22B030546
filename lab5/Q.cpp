/*Q-74871
You’re given two strings s andt. You need to answer, can we take string t by copy and pasting string s.*/

#include <iostream>
using namespace std;

int main(){
    string s, t, ans; cin >> s >> t;
    for(int i = 0; i < t.size() / s.size(); i++){
        ans += s;
    }
    cout << (ans == t ? "YES" : "NO");
}