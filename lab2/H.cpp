//Interesting problem
//Given n numbers you need to count the number of even and the number of odd numbers from the given list.
//Input
//In the first line, input n. 1 ≤ n ≤ 1000 In the second line, given n integers
//Output
//In the first line, output the number of evens, after that output the number of odds.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, a, cnt1=0, cnt2=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a%2==0){
        cnt1++;
        }
        else {
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2;
}