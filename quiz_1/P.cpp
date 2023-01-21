//P-186840. Triangle.

#include <iostream>
using namespace std;
int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if(x+y>z && y+z>x && x+z>y && x-y<z && x-z<y && y-z<x)cout << "Valid";
    else cout << "Invalid";
    return 0;
}