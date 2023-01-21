#include <iostream>
using namespace std;
int main(){
    int mass[100],n,i,k=0;
    cin>>n;
    for(i=0;i<n;i++) cin >> mass[i];
    for(i=2;i<=n-1;i++){
        if((mass[i]<=mass[i+1]) && (mass[i]<=mass[i-1])) cout << "0";
        else if((mass[i]>mass[i+1]) && (mass[i]>mass[i-1])){
            k=k+1;
        }
    }
    cout << k << " ";
}