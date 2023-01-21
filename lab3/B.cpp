//Positive numbers
//Given an array consisting of integers. Write a program, which outputs count of positive numbers in array.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    long long a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    int count=0;
    for (int i=0; i<n; i++){
        if (a[i]>0){
            count ++;
        }
    }
    cout << count;
}