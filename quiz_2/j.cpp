/*Max and min digits of a number.
Given a number N. The task is to find the largest and the smallest digit of the number.*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int max = INT_MIN, min = INT_MAX, k;
    while(n > 0){
        k = n % 10;
        n = n / 10;
        if(k > max) max = k;
        if(k < min) min = k;
    }
    cout << max << " " << min;
}