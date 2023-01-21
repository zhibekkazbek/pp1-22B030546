/*F-74437. Position of maximum.
Given a two-dimensional array n x n. Write a program, which finds position of maximum element in array. 
If maximums are two or more you should output position of the first one.
Remaining lines contain n rows with m integers (-1000000000 <= a[i][j] <= 1000000000 ) — elements of array.
Two integers - row and column indexes (start with 1), position of maximum in array.*/

#include <iostream>
using namespace std;

int main(){
    int n, mx=-1000000001; cin >> n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
            if(mx<arr[i][j]){
                mx=arr[i][j];
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mx==arr[i][j]){
                cout << i+1 << " " << j+1;
                return 0;
            }
        }
    }
}