/*Doubled pair
A pair of numbers is called doubled if there are exists an integer n, such that:a∗2n=b,where a and b
are the numbers from pair. Note that n must lie in the range [−60;60].*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a, b; cin >> a >> b;
    int cnt = 0, x;

    for(int i=-60; i<=60; i++){
        if(b == a * pow(2, i)){
            cnt++;
            x = i;
        }
    }
    if(cnt == 0){
        cout << "NO";
    }
    else{
        cout << "YES" << " " << x;
    }
}