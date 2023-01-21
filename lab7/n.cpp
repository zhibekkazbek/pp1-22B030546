/* !!! Cheater
There were n problems in second quiz. Teachers wanted to define who is a cheater. 
If student solves a two or more exercise in k minutes it is a obvious that he is a cheater.*/

#include <iostream>
#include <algorithm>
using namespace std;

string cheat(int a[], int i, int n, int k){
    if(abs(a[i] - a[i+1]) < k){
        return "cheater";
    }
    if(a[i] == a[n-1]){
        return "no";
    }
    return cheat(a, i+1, n, k);
}

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    cout << cheat(a, 0, n, k);
}