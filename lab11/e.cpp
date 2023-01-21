/*E-Common characters
You are given a list of strings A. Print all characters that appears in all strings*/

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<map<char, int> > v;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        map<char, int> mp;
        for(int j = 0; j < s.size(); j++){
            mp[s[j]]++;
        }
        v.push_back(mp);
    }
    bool pr = false;
    for(char x = 'a'; x <= 'z'; x++){
        bool ok = true;
        for(auto k : v){
            if(k[x] == 0){
                ok = false;
            }
        }
        if(ok){
            cout << x << " ";
            pr = true;
        }
    }
    if(!pr){
        cout << "NO COMMON CHARACTERS";
    }
}