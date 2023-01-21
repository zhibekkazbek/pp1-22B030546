/*Points
You are given n points on the euclidean plane.Sort them firstly by x coordinate,
and if x’s of some two points are equal sort them by y coordinate.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<pair<int, int> > v;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}