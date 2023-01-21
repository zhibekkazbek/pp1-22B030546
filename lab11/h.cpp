/*H-String shift
We assume that A follows Z. For example, shifting A by 2 results in C (A -> B -> C), 
and shifting X by 3 results in B (X -> Z -> A -> B).*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        s[i] = char((s[i] - 'A' + n) % 26 + 65);
    }
    cout << s;
}