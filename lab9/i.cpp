/*Registration
Students of first course want to registrate on ejudge.You have login requests.
If login is not registered yet print new user added, if this login already exist print user already exists.*/

#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;

    map<string, int> mp;

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if(mp[s] == 0) cout << "new user added" << endl;
        else cout << "user already exists" << endl;
        mp[s]++;
    }
}