/*F-74222.Segment
You’re given string s, and two integers l,r. You need to output substring s[l;r]. Numeration of characters in 
s starts from 0. Guaranteed that l,r can’t be out of the border of string.*/

#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int l, r; cin >> l >> r;

    for(int i=l; i<=r; i++){
        cout << s[i];
    }
}