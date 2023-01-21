/*Maximum digit
You are given a big number n. You should find a maximum digit of this big number.*/

#include <bits/stdc++.h>
using namespace std;

char Max(string s, int i, char max){
    if(i==s.size()){
        return max;
    }
    if(s[i] > max){
        max = s[i];
    }
    return Max(s, i+1, max);
}

int main(){
    string s;
    cin >> s;
    cout << Max(s, 0, -1);
}