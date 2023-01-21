/*Bad WI-FI connection
Unfoturnetely, when one of the assistant hast been setting up marks for midterm, 
WIFI connection was cut off. After reconnection, he realized that list of all students and theirs marks were mixed. 
He knows that students were in alphabetical order and marks in ascending order. Help assistant to resotre all marks.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> p1, pair<string, int> p2){
    if(p1.first < p2.first){
        return true;
    }
    if(p1.first > p2.first){
        return false;
    }
    if(p1.first == p2.first){
        if(p1.second < p2.second){
            return true;
        }
        if(p1.second > p2.second){
            return false;
        }
    }
    return false;
}


int main(){
    int n; cin >> n;
    vector<string > v;
    vector<int> t;
    for(int i = 0; i < n; i++){
        string s;
        int a;
        cin >> s >> a;
        v.push_back(make_pair(s, a));
    } 
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}