// S-73393. Isosceles triangle.

#include <iostream>
using namespace std;
int main(){
    int a, b, c; cin >> a >> b >> c;
    if(a==b || b==c || a==c) cout << "Yes";
    else cout << "No";
    return 0;
}