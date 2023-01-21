#include <iostream>
#include <sstream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s, t;
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        s += x;
    }
    int k;
    cin >> k;
    string a;
    for(int i = 0; i <= k - 2; i++){
        a += s[i];
    }
    for(int i = k - 1; i < s.size(); i++){
        t += s[i];
    }
    long long x,y;
    stringstream(a) >> x;
    stringstream(t) >> y;
    long long sum = x * y;
    cout << sum;
}