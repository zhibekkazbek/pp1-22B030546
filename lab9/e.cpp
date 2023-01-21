/*Contacts
Sanzhar have n telephone numbers in his contact list. 
Your task is to find how many numbers occurs in contact list exactly three times.*/

#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, cnt = 0; cin >> n;
    map<string, int> mp;

    for(int i = 0; i < n; i++){
        string x; 
        cin >> x;
        mp[x]++;
    }

    map<string, int> :: iterator it = mp.begin();
    for(it; it != mp.end(); it++){
        if(it -> second == 3){
            cnt++;
        }
    }
    cout << cnt;
}