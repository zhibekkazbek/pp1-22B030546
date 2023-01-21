#include <iostream>
using namespace std;

int main(){

    int n, mx = -1000000001, pos = 0; cin >> n;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x > mx){
            mx = x;
            pos = i + 1;
        }
    }    

    cout << pos;
}