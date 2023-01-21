#include <iostream>
#include <cmath>
using namespace std;

int Power(int a, int b){
    return pow(a, b);
}

int main(){
    int x, y; cin >> x >> y;
    cout << Power(x, y);
}