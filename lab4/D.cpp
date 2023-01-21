/*D-74434. Multiplication table.
Write a program that prints an n x n multiplication table.
The first line contains one integer n (2 < n <= 100) — array size.
Two-dimensional array. Separate numbers with one space.*/

#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0)cout << j << " ";
            else if(j==0)cout << i << " ";
            else cout << i*j << " ";
        }
        cout << endl;
    }   
}