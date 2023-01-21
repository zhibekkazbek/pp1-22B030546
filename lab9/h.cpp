/*Strings
You have array which contains n strings, for each string S in our array output first entry of S 
in the given array(in index).*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    vector<pair<string, int> > v;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(mp[s] == 0){
            v.push_back(make_pair(s, i + 1));
        }
        mp[s]++;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}