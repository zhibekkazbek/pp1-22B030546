/*Sum of uniques*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    vector<int> :: iterator it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    cout << sum;
}