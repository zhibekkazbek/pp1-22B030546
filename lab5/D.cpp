/*D-73916.Palindromes
You’re given string s, you need to print, is this string palindrome or not.*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s; cin >> s;
    string sub = s;

    reverse(sub.begin(), sub.end());

    if(s != sub) cout << "NO";
    else cout << "YES";
}