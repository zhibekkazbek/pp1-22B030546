/* G-74816.Equality !!!
Given two strings s and t, check this two strings for equality.*/

#include <iostream>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    if(s.find(t) != -1) cout << "YES";
    else cout << "NO";
}