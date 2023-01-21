#include <iostream>
using namespace std;

long long Sum(int arr[], int n){
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    long long sum = Sum(arr, n);
    cout << sum;
}