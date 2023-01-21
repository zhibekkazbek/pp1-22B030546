/*Aida and korean serials
Aida is a very good girl, but there is one thing, she is fond of doramas (Korean TV serials). 
Every day she watches several episodes of some dorama. For each dorama, print how many episodes of this 
dorama in total she watched in n days. Output the doramas and the number of episodes (print doramas in lexicographical 
order )*/

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