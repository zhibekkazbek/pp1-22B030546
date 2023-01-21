/*Sum of K largest
Print out single number — sum of k largest numbers*/

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
    reverse(v.begin(), v.end());
    int k, sum = 0; cin >> k;
    for(int i = 0; i < k; i++){
        sum += v[i];
    }
    cout << sum;
}