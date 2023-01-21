// #include <iostream>
// #include <cmath>
// using namespace std;

// int Power(int n){
//     int a = 2;
//     return pow(a, n);
// }

// int main(){
//     int x, y; cin >> y;
//     x = 2;
//     cout << Power(y);
// }

#include <bits/stdc++.h>
using namespace std;
int beb(int a){
    if (a == 0)return 1;
    return 2*beb(a-1);
}
int main (){
    int a;
    cin >> a;
    cout << beb(a);
}