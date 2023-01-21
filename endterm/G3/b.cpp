#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    string a, b;
    a = s;
    b = t;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a != b){
        cout << "Shit happens";
        return 0;
    }
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s == t){
            break;
        }
        rotate(t.begin(), t.begin() + 1, t.end());
        cnt++;
    }
    cout << cnt;
}