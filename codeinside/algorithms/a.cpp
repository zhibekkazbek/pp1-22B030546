#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int cnt = 0;

int main(){
    int n;
    cin >> n;
    vector <vector<int>> v;
    v.resize(n, vector<int>(n));
    for(int i=0;i<n;i++){      // inserts elements into the vector v
        for(int j=0;j<n;j++){
            cin >> v[i][j]; 
        }
    }
    int a;
    cin >> a;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j] == a){
                cnt ++;
            }
        }
    }      //accesses elements of vector v
}
