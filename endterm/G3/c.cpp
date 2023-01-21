#include <iostream>
#include <map>

using namespace std;

int main(){
    int n; cin >> n;
    map<string, string> mp;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            string t;
            cin >> t;
            mp[t] = s;
        }
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){

        string s;
        cin >> s;
        if(mp[s] == ""){
            cout << "Unknown" << endl; 
        }
        else{
            cout << mp[s] << endl;
        }
    }
}