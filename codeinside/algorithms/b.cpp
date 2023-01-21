/*B-Ограбление*/

#include <iostream>
#include <map>

using namespace std;

int main(){
    int n; 
    cin >> n;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string s;
        int a;
        cin >> s >> a;
        if(mp[s] == 0){
            mp[s] = a;
        }
        else{
            mp[s] += a;
        }
    }
    map<string, int> :: iterator it = mp.begin();
    for(it; it != mp.end(); it++){
        cout << it -> first << " " << it -> second << endl;
    }
} 