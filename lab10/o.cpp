/*Binary for each
Represent each elements of given vector as binary.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void binary(int n){
    string s = "";
    if(n == 0) s = "0";
    while(n != 0){
        s += char(n % 2 + 48);
        n /= 2;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for_each(v.begin(), v.end(), binary);
}