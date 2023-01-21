/*J-74848.Not palindrome
You’re given string s which is not palindrome. You need to answer, is that possible, if we add one letter to 
s such that s will become palindrome.*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string s; cin >> s;
    string sub = s;
    reverse(s.begin(), s.end());
    if(s == sub || sub.substr(1) == s.substr(0, s.size() - 1)){
        cout << "YES";
        return 0;
    }
    cout << "NO";
}