/*M-74857.Amount of character
You’re given string s, character x and number n. In this task you need to answer is the amount of 
x in the string s is equal to n.*/
//aaa a 3
//YES

#include <iostream>
using namespace std;

int main(){
    string s, x; cin >> s >> x;
    int n; cin >> n;
    for(int i=0; i < s.size(); i++){
        if(x[0]==s[i]) n--;
    }
    cout << (n ? "NO" : "YES");
}