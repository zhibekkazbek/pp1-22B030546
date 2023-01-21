/*Puzzle.
Boris wants to play a puzzle. He has a square of size N x N, all the cells of which are filled 
with different numbers. He needs to find the maximum number in each row and fill that row with that number.*/

#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n, mx = INT_MIN; cin >> n;
    int a[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            if(a[i][j] > mx){
                mx = a[i][j];
            }
        }
        for(int i=0; i<n; i++){
            cout << mx << ' ';
        }
        cout << '\n';
        mx = INT_MIN;
    }
    
}