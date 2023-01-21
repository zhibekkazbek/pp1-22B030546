/*C. 74429. Negative
Given a two-dimensional array of size n x m (n rows, m columns). Write a program, which outputs count
of negative numbers in array.
a[i][j] (-100000 <= a[i][j] <= 100000 ) — elements of
array.*/

#include <iostream>
using namespace std;

int main(){
    int n, m, cnt=0; cin >> n >> m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            if(arr[i][j]<0){
                cnt++;
            }
        }
    }
    cout << cnt;
}