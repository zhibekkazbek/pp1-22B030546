/*L-74856.Order
You’re given string s, you need to output, is that string increasing in alphabetical order. 
String increasing in alphabetical order, if for every position i in alphabet, we can’t find 
such character that meets before position i and appears in alphabet after letter in position i.*/

#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] > s[i+1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}