/*Find K*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x;
        v.push_back(x);
    }
    int k; cin >> k;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == k){
            cout << "Yes";
            return 0;
        }
        
    }
    cout << "No";
}