//D-Подстроки...
#include <iostream>
using namespace std;
int main(){
    string s,t; cin >> s;
    for(int i=s.size()-1; i>=0; i--){
        t=s.substr(0, s.size()-i);
        cout << t << endl;
    }
}