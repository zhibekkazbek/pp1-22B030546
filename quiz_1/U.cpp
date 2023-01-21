// U-191143. Do you like running?

#include <iostream>
using namespace std;
int main(){
    double n, m; cin >> n >> m;
    if(n==m){
        cout << "1";
        return 0;
    }

    for(int i=1; n<=m; i++){
        n*=1.1;
        if(n>=m){
            cout << i+1;
            return 0;
        }
    }
    return 0;
}