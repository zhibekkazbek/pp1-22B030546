/*Is it Palindrome?*/

#include <iostream>
using namespace std;

string Pal(string s, int i, string t){
    if(i < 0){
        if(t==s){
            return "Yes";
        }
        else return "No";
    }
    t += s[i];
    return Pal(s, i-1, t);
}

int main(){
    string s; cin >> s;
    cout << Pal(s, s.size()-1, "");
}