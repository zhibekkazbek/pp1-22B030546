/*F-Правильная сортировка*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int> > v;
    v.resize(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        if(i % 2 != 0){
            for(int j = 0; j < m; j++){
                sort(v[i].begin(), v[i].end());
                reverse(v[i].end(), v[i].begin());
                cout << v[i][j] << " ";
            }   
        }
        else{
            for(int j = 0; j < m; j++){
                sort(v[i].begin(), v[i].end());
                cout << v[i][j] << " ";
            }
        }
        cout << endl;
    }
}