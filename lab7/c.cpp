/*Binary search
You are given a sorted array. Try to find number x from this array.*/  

#include <bits/stdc++.h>
using namespace std;

int a[1000];
int n;

string search(int i, int k){
    if(i==n){
        return "No";
    }
    if(a[i]==k){
        return "Yes";
    }
    return search(i+1,k);
}

int main(){
    int k;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    cin >> k;

    cout << search(0,k);
}