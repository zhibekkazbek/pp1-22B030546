#include <bits/stdc++.h> 
using namespace std;

int main(){
    string s; 
    cin >> s; 
    string s1; 
    s1 = s; 
    for(int i = 0; i < s1.size(); i++ ){ 
        reverse(s.begin(), s.end()); 
        if(s1 == s){ 
            s1.erase(0, 1); 
            s = s1; 
        } 
        else{ 
            cout << s1.size(); 
            return 0; 
        } 
    } 
    cout << 0; 
    return 0;
}