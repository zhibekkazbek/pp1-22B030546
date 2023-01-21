/*K smallest numbers
You are given n, (1≤n≤100) positive integers, each integer v[i], (1≤v[i]≤1000). Then one integer number k, 
(1≤k≤n−1). Find k smallest numbers from given sequence.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int k; cin >> k;
    for(int i = 0; i < k; i++){
        cout << v[i] << " ";
    }
}