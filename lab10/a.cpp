/*Bad WI-FI connection
Unfoturnetely, when one of the assistant hast been setting up marks for midterm, 
WIFI connection was cut off. After reconnection, he realized that list of all students and theirs marks were mixed. 
He knows that students were in alphabetical order and marks in ascending order. Help assistant to resotre all marks.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    vector<string> v;
    vector<int> t;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
        int x;
        cin >> x;
        t.push_back(x);
    }
    sort(v.begin(), v.end());
    sort(t.begin(), t.end());

    for(int i = 0; i < n; i++){
        cout << v[i] << " " << t[i] << endl;
    }
}