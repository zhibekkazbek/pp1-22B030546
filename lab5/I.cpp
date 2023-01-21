/*I-74820.Nearly Equal
Let’s call two strings s and t nearly equal, if amount of every letter in s and t is equal. 
You need to answer, is two strings are nearly equal.*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string s, t; cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t) cout << "YES";
    else cout << "NO";
}