/*F-K-th common divisor
Print the K-th largest positive integer that divides both A and B.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, k; cin >> a >> b >> k;
    int cnt = 0;
    for(int i = min(a, b); i >= 1; i--){
        if((a % i) == 0 && (b % i) == 0){
            cnt++;
        }
        if(cnt == k){
            cout << i << endl;
            return 0;
        }
    }
}