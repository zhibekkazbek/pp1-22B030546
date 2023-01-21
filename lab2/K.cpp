//Super square
//Find all exact squares of natural numbers that do not exceed a given number N
//Output answer for the problem in each line.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1; i*i<=n; i++)
    cout << i*i << endl;
    return 0;
}