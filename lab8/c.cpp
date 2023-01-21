/*Reverse in range
You are given n integers. Then index ranges a and b, (0≤a<b≤n−1). Your task is to reverse array 
elements in a given range ([a...b] — index range bounds inclusively). Store n integers in a vector.*/

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
    int a, b; cin >> a >> b;
    reverse(v.begin() + a, v.begin() + b + 1);
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}