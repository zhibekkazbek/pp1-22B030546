/*Next permutation
Print all possible next permutation of the sequence. 
Elements should be separated by single empty space. Print each of permutaion in own row.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    set<int> st;
    for(int i = 0; i < n; i++){
        int k; cin >> k;
        int x;
        x = st.size();
        st.insert(k);
        if(x != st.size()){
            v.push_back(k);
        }
    }
    do{
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }while(next_permutation(v.begin(), v.end()));
}