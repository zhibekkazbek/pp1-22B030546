//Reverse
//Given an array consisting of integers. Print all array in reverse order.

#include <iostream> 
using namespace std;
int main (){
    int n;
    cin >> n;

    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    for (int i=n-1; i>=0; i--){
        cout << a[i] << " ";
    }
}