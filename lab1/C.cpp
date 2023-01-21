#include <iostream>

using namespace std;

int main(){
    int n, a, b, c, d, sum;
    cin >> n;
    a = n % 2;
    n = n / 2;
    b = n % 2;
    n = n / 2;
    c = n % 2;
    n = n / 2;
    d = n % 2;
    sum = a*8 + b*4 + c*2 + d*1;
    cout << sum << endl;
}