// G-140447. Chocolate chip cookies.

#include <iostream>
using namespace std;
int main(){
    int n, x, sum=0, mx=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        sum += x;
        if(mx < x){
            mx=x;
        }
    }
    cout << sum << " " << mx;
    return 0;
}