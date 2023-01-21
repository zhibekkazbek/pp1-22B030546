/*Add element
You are given n integers. Then two integers k, (0≤k≤n−1) — index in the sequence and a — given value. 
Your task is to insert number a at index k. Store n integers in a vector.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k, a; // k - index, a - number in index k
    cin >> k >> a;
    v.insert(v.begin() + k, a);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}