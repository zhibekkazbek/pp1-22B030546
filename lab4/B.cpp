/* B. 74427. The second.
Given a two-dimensional array n x n. Find the second largest number in array. If all elements are equal,
output 0. a[i][j] (-1000000000 <= a[i][j] <= 1000000000 ) — elements of array.*/

#include <iostream>
using namespace std;

int main(){
    int n, mx=-1000000001, mx2=-1000000001; cin >> n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
            if(arr[i][j]>mx){
                mx=arr[i][j];
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mx2<arr[i][j] && mx != arr[i][j]){
                mx2=arr[i][j];
            }
        }
    }
    if(mx2==-1000000001) cout << "0";
    else cout << mx2;
}