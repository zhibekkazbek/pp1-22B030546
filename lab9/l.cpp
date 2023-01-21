/*Specific sorting
Given an array of pair<int, int>. It is required to display the indices of this array in the order 
of non-decreasing values of first + second in elements with these indices.*/

#include <iostream>
#include <map>

using namespace std;

int main(){
    int n; cin >> n;
    multimap<int, int> mp;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        mp.insert(make_pair(x + y, i));
    }
    multimap<int, int> :: iterator it = mp.begin();
    for(it; it != mp.end(); it++){
        cout << it -> second + 1 << " ";
    }
}