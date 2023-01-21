// Maxmimum in array
//Given an array consisting of integers. Write a program, which outputs maximum in array.
// Output: Single integer, maximum in array

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    int maxi = a[0];
    for (int i; i<n; i++){
        if(a[i] > maxi){
            maxi = a[i];
        }
    }
    cout << maxi;
}