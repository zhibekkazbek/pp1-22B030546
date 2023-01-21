// Position of maximum
//Given an array consisting of integers. Write a program, which finds position of maximum element of array.
//If maximums is two or more you should output first position.

#include <iostream>
using namespace std;
int main(){
    int n, max = -1000000003;
    cin >> n;

    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    int pos=0;
    for (int i=0; i<n; i++){
        if(a[i]>max){
            max = a[i];
            pos = i+1;
        }
    }
    cout << pos;
}