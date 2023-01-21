/*Simple Recursion
Print all natural numbers until n with help of recursion (n is inclusive)*/

#include <iostream>
using namespace std;

void rec(int n, int a){
    if(a>n){
        return;
    }
    cout << a << " ";
    return rec(n, a+1);
}

int main(){
    int n; cin >> n;
    rec(n, 1);
}