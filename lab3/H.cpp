//Sum l...r
//Given an array consisting of integers. Write program, which will get sum of elements a[i], where i(l <= i <= r).
//The first line contains three integers n, l, r, (1 <= n <= 10^5, 1 <= l <= r <= n) — array size and integrals. The
//next line contains n integers ai (1 <= ai <= 10^9) — elements of array

#include <iostream>
using namespace std;
int main(){
    int n, l, r;
    cin >> n >> l >> r;
    long long sum =0;

    int a[n];
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }

    for (int i=l; i<=r; i++){
        sum = sum +a[i];
    }
    cout << sum;
}