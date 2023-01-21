//From zero to hero
//Given n numbers you need to output the number of zeros among these numbers
//In the first line, input n. 1 ≤ n ≤ 1000. In the second line, input n positive integer numbers

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, a, cnt;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a;
        if(a%100 == 0){
            cnt++;
        }
        else if(a%10 == 0){
            cnt++;
        }
    }
    cout << cnt;
}