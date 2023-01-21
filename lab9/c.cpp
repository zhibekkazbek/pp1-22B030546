/*At least 2 times
Given n positive integer numbers.Print how many numbers occurs at least 2 times in this array.*/

#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, cnt = 0; cin >> n;
    map<int, int> mp;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    map<int, int> :: iterator it = mp.begin();
    for(it; it != mp.end(); it++){
        if(it -> second > 1){
            cnt++;
        }
    }
    cout << cnt;
}