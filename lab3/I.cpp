//Reverse elements on l...r !!!
//Given an array consisting of integers. Write program, which will reverse elements in interval l, r.
//The first line contains three integers n, l, r, (1 <= n <= 10^5, 1 <= l <= r <= n) — array size and integrals. The
//next line contains n integers ai (1 <= ai <= 10^9) — elements of array


#include <iostream>
using namespace std;
int main(){
    int n, l, r;
    cin >> n >> l >> r;

    int a[n];
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }

    for(int i=1; i<l; i++){
        cout << a[i] << " ";
    }

    for (int i=r; i>=l; i--){
        cout << a[i] << " ";
    }

    for (int i=r+1; i<=n; i++){
        cout << a[i] << " ";
    }
}