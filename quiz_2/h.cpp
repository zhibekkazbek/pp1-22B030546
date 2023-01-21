/*Maximum product of two elements.
You are given an integer array. Print the maximum product of any two elements in the array.*/

#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n; cin >> n;
    int a[n];
    int max1 = INT_MIN, max2=INT_MIN;
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    int x;
    for (int i = 0; i < n;i++){
       if (max1 < a[i]){
        max1 = a[i];
        x = i;
       }
    }
    for (int i = 0; i < n;i++){
        if (max2 < a[i] && max2 <= max1 && x != i ){
         max2 = a[i];
       }
    }
    cout << max1*max2;
}
