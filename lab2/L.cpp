//2Power
//For a given number N, print out all integer powers of two that do not exceed N, in increasing order

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0; pow(2, i)<=n; i++)
    cout << pow(2, i) << " ";
    return 0;
}