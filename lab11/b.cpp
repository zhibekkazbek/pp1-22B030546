/*B-Unique array*/

#include <iostream>
#include <set>

using namespace std;

int main(){
    int n; cin >> n;
    set<int> st;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.insert(x);
    }
    if(st.size() == n) cout << "YES";
    else cout << "NO";
}