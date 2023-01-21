/*A-71817.Amount of capital and small
You’re given string s, you need to output amount of capital and small letters in string.*/

#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int cnta = 0, cntA = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') cnta++;
        if(s[i] >= 'A' && s[i] <= 'Z') cntA++;
    }
    cout << cnta << " " << cntA;
}