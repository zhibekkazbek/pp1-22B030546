//MaxToMin
//Given an array consisting of integers. Write a program, which will change all maximal elements to minimal elements
// of the array.

#include <iostream>
using namespace std;
int main(){
    int n;
    int min = 10000000003, max = -10000000003;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(max<arr[i])max=arr[i];
        if(min>arr[i])min=arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i] == max)cout << min << " ";
        else cout << arr[i] << " "; 
    }
    return 0;
}