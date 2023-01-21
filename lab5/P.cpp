/*P-74868.Shift
You’re given string s, you need to shift all characters in s to the next character in alphabetical order. 
If our character is ’z’ change it for ’a’.*/

#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    for(int i=0; i < s.size(); i++){
        if(s[i]==122) s[i] -= 25;
        else s[i] += 1;
        cout << s[i];
    }
}