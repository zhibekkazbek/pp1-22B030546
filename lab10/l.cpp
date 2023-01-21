/*Arithmetic progression in a nutshell
Create required sequence. All members should be in the same row separated by single empty space.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int size = (1 + n) * n / 2;
    vector<int> v(size);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        fill(v.begin() + sum, v.begin() + sum + i, i);
        sum += i;
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}