/*Reverse array
You are given N integers. Your task is to reverse sequence of integers. Store N integers in a vector.*/

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
    reverse(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}