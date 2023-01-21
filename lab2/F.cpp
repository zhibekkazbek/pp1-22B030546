//Sum
//In this task, you should find the sum of all numbers from 1 to n.

#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    for(int i=0; i<=n; i++){
        sum += i;
    }
    cout << sum;
}