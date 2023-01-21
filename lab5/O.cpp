/*O-74866.Last
You’re given string s, which contains only small letters. You need to output character c from 
s such that, position of the c in alphabet is the most further.*/

#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    char max = s[0];

    for(int i=0; i < s.size(); i++){
        if(max<s[i]) max = s[i];
    }

    cout << max;
}