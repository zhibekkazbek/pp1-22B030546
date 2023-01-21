//Great seven
//Among n numbers you need to count the number of numbers that ends with 7.
//In the first line, input n. 1 ≤ n ≤ 1000. In the second line, input n positive integer numbers.

#include <iostream>

using namespace std;
int main(){
    int n, a, cnt = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a;
        if(a%10 == 7) cnt++;
    }
    cout << cnt;
    return 0;
}