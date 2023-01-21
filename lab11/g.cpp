/* G-Attendance pliz
Askar Agay, due to the fact that few students remain in practice, decided to take an attendance. 
He has a list of students who came to practice for November. Askar agay decided to add +1 points to 
all students who was in practice at least 3 three different days. Keep in mind that Askar Agay could take 
attendance on the same day several times!*/

#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
    int n; cin >> n;
    map<string, set<int> > mp;
    int total = 0;
    for(int i = 0; i < n; i++){
        string name;
        int att;
        cin >> name >> att;
        mp[name].insert(att);
    }
    for(auto s : mp){
        cout << s.first << " ";
        if(s.second.size() < 3){
            cout << "NO BONUS" << endl;
        }
        else{
            cout << "+1" << endl;
        }
    }
}