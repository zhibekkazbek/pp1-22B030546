/*Competition
A few day ago, in KBTU was a hackathon. In hackathon could participate 2 persons as a team. 
Jury marked each student individually, but then they will get sum of scores. There were some problems, 
when competition was ended. All of students had written only theirs nickname at register time. Moreover, 
some students registered twicely(may be more). Jury decided : if they each of student in pair has same names, 
same scores - they are same team, that registered two times. But if they have different scores they are different team. 
Shortly, to be same information has to be completely same. Help Jury create a list of students.*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    map<pair<pair<string, int>, pair<string, int> >, int> mp;
    int n;
    cin >> n;
    string s1, s2;
    int x1, x2;
    for(int i = 0; i < n; i++){
        cin >> s1 >> x1 >> s2 >> x2;
        mp[make_pair(make_pair(s1, x1), make_pair(s2, x2))] = x1 + x2; 
    }
    map<pair<pair<string, int>, pair<string, int> >, int> :: iterator it = mp.begin();
    for(it; it != mp.end(); it++){
        cout << it -> first.first.first << " and " << it -> first.second.first << " " << it -> second << endl;
    }
}