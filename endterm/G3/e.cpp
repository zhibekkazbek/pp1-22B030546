#include <iostream>

using namespace std;

bool isPrime(int x){
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n; cin >> n;
    int a = 2;
    bool ok = false;
    while(a < n){
        if(isPrime(a) == true && isPrime(n - a)){
            ok = true;
            break;
        }
        a++;
    }
    cout << a << " " << n - a;
}