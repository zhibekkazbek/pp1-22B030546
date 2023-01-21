/*Vector erase
You are given n integers. Then you are given an integer k — index in the vector. 
Your task is to erase value at given index k.*/

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
    int k; cin >> k;
    v.erase(v.begin() + k);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}