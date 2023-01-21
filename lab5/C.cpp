/*C-73912.Substring
You’re given to strings, s and t,you need to check is the string t substring of string s.*/

#include <iostream>
using namespace std;

int main(){
    
    string s, t; cin >> s >> t;

    for(int i = 0; i < s.size() - t.size() + 1; i++){
        string sub = s.substr(i, t.size());
        if(sub == t){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}