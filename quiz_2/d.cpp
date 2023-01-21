/* !!! List modes.
You are given a list of integer numbers. Print its mode. Mode is the number that occurs most frequently in the list. 
If there is several modes, print them in descending order.*/

#include <iostream>
using namespace std;

int a[1001];
int main(){
    int n; cin >> n;
    int a2[n];

    for(int i=0; i<n; i++){
        cin >> a2[i];
    }

    int mx=0;
    for(int i=0; i<n; i++){
        a[a2[i]]++;
    }

    for(int i=0; i<1001; i++){
        if(a[i] > mx){
            mx = a[i];
        }
    }

    for(int i=1001; i >= 1; i--){
        if(a[i] == mx){
            cout << i << " ";
        }
    }
}