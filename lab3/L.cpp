// Merge two arrays !!!

#include <iostream>
using namespace std;
int main (){
    int x, y;
    cin >> x;
    int a[x+1];
    int r, t;
    a[x+1] = 1e9+17;

    for(int r=1; r<=x; r++){
        cin >> a[r];
    }

    cin >> y;
    int b[y+1];
    b[y+1] = 1e9+17;

    for(int t=1; t<=y; t++){
        cin >> b[t];
    }
        
    int c[x+y];
    r=1, t=1;
    for(int i=1; i<=x+y; i++){
        if(a[r]>=b[t]){
            c[i]=b[t];
            t++;
        }
        else if(a[r]<b[t]) {
            c[i]=a[r];
            r++;
        
        }
    }
    for(int i=1; i<=x+y; i++){
        cout << c[i] << " ";
    }
}