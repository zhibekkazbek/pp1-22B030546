/* A. 74302. 2d array
Given a two-dimensional array n x n. Find the largest number in array. Remaining lines contain n rows
with n integers a[i] (-100000 <= a[i] <= 100000 ) — elements of array.*/

#include <iostream>
using namespace std;

int main(){
    int n, mx=-100001; cin >> n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
            if(arr[i][j]>mx){
                mx=arr[i][j];
            }
        }
    }
    cout << mx;
}