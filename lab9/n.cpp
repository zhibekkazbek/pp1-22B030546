/*Almat and xor
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    int cnt = 0;
    for(int i = 0; i < v.size() - 1; i++){
        for(int j = i; j < v.size(); j++){
            if(i < j){
                int a = (v[i] ^ v[j]);
                if(mp[a] != 0){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}