//N-73396. Triangle.

#include <iostream>
using namespace std;
int main(){
    int a, b, c; cin >> a >> b >> c;
    if(a+b > c && a+c > b && b+c > a && a-b < c && a-c < b && b-c < a) cout << "Yes";
    else cout << "No";
    return 0;
}