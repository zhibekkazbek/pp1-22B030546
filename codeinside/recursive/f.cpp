#include <iostream>
#include <algorithm>
using namespace std; 
void Reverse(string s){
    reverse(s.begin(), s.end());
    cout << s;
}
int main(){
    string s; cin >> s;
    Reverse(s);
}